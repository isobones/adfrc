// Plow control with grad_trenches soft dependency.
// Gated by CBA settings: ADFRC_plow_clearMines and ADFRC_plow_digTrenches.

params ["_vehicle"];

if (_vehicle getVariable ["adfrc_plowInitDone", false]) exitWith {};
_vehicle setVariable ["adfrc_plowInitDone", true];

if (isServer) then {
    [{
        params ["_args", "_handle"];
        _args params ["_vehicle"];

        if (isNull _vehicle || !alive _vehicle) exitWith {
            [_handle] call CBA_fnc_removePerFrameHandler;
        };

        if !(missionNamespace getVariable ["ADFRC_plow_clearMines", true]) exitWith {};
        if ((_vehicle animationPhase "plow") < 0.95) exitWith {};

        private _searchPos = _vehicle modelToWorld [0, 6, 0];
        private _mines = nearestObjects [_searchPos, ["MineBase"], 4];
        { deleteVehicle _x; } forEach _mines;

    }, 0.1, [_vehicle]] call CBA_fnc_addPerFrameHandler;
};


if (!hasInterface) exitWith {};
[{
    params ["_vehicle"];

    for "_i" from 50 to 0 step -1 do {
        private _params = _vehicle actionParams _i;
        if (count _params > 0 && {(_params select 0) in ["Lower Plow", "Raise Plow"]}) then {
            _vehicle removeAction _i;
        };
    };

    private _baseCond = "alive _target && {isEngineOn _target} && {(_target animationSourcePhase 'hideplow') == 1} && {_this == driver _target}";

    _vehicle addAction [
        "Lower plow",
        {
            params ["_target"];
            _target animateDoor ["plow", 1];

            if (
                (missionNamespace getVariable ["ADFRC_plow_digTrenches", true])
                && {isClass (configFile >> "CfgPatches" >> "grad_trenches_functions")}
            ) then {
                _target setCruiseControl [7, false];
                _target setVariable ["grad_trenches_functions_plowlowered", -1, true];
                [
                    { (_this animationPhase "plow") >= 0.99 },
                    { _this setVariable ["grad_trenches_functions_plowlowered", 1, true] },
                    _target
                ] call CBA_fnc_waitUntilAndExecute;
            };
        },
        nil, 1.5, true, true, "",
        format ["%1 && {(_target animationPhase 'plow') < 0.5}", _baseCond],
        10, false, "", ""
    ];

    _vehicle addAction [
        "Raise plow",
        {
            params ["_target"];
            _target animateDoor ["plow", 0];

            if (
                (missionNamespace getVariable ["ADFRC_plow_digTrenches", true])
                && {isClass (configFile >> "CfgPatches" >> "grad_trenches_functions")}
            ) then {
                _target setCruiseControl [0, false];
                _target setVariable ["grad_trenches_functions_plowlowered", -1, true];
                [
                    { (_this animationPhase "plow") <= 0.01 },
                    { _this setVariable ["grad_trenches_functions_plowlowered", 0, true] },
                    _target
                ] call CBA_fnc_waitUntilAndExecute;
            };
        },
        nil, 1.5, true, true, "",
        format ["%1 && {(_target animationPhase 'plow') >= 0.5}", _baseCond],
        10, false, "", ""
    ];

}, [_vehicle], 0.25] call CBA_fnc_waitAndExecute;