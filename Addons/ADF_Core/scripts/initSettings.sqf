// CBA mod-wide settings for ADF Re-Cut.
// Uses CBA_fnc_addSetting (safe to call from preInit without cba_settings as a hard dependency).

[
    "ADFRC_plow_clearMines",
    "CHECKBOX",
    ["Mine plow clears mines", "When enabled, lowered mine plows automatically destroy mines they encounter without damaging the vehicle. Plow must be fully deployed."],
    "ADF Re-Cut",
    true
] call CBA_fnc_addSetting;

[
    "ADFRC_plow_digTrenches",
    "CHECKBOX",
    ["Mine plow digs trenches", "When enabled and grad_trenches is loaded, lowered mine plows can dig vehicle trenches by driving forward. No effect without grad_trenches."],
    "ADF Re-Cut",
    true
] call CBA_fnc_addSetting;