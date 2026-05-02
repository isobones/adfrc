class cfgCloudlets {
	class MachineGunCartridge;
	class MachineGunEject;
	class ADFRC_abrams_cartridge: MachineGunCartridge 
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		lifeTime = 20;
		size[] = {3};
		bounceOnSurface = 0.25;
	};
	class ADFRC_abrams_eject: MachineGunEject
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		lifeTime=20;
		size[]={6};
		bounceOnSurface=0.25;
	};
	class ADFRC_abrams_mag58_cartridge: MachineGunCartridge 
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		lifeTime = 10;
		size[] = {1.1};
		bounceOnSurface = 0.25;
	};
	class ADFRC_abrams_mag58_eject: MachineGunEject
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		lifeTime=20;
		size[]={1.1};
		bounceOnSurface=0.25;
	};
};
class ADFRC_mag58_casingeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_abrams_mag58_cartridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class ADFRC_mag58_linkeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_abrams_mag58_eject";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class cfgAmmo
{
	class B_762x54_Tracer_Green;
	class ADFRC_abrams_762x51_Tracer: B_762x54_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
	};
};
class cfgMagazines
{
	class 150Rnd_762x51_Box;
	class ADFRC_abrams_1000Rnd_762x51_Tracer: 150Rnd_762x51_Box {
		scope = 1;
		ammo = "ADFRC_abrams_762x51_Tracer";
		displayName = "1000 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 1000;
		type = "2*		256";
		tracersEvery = 4;
	};
	class ADFRC_abrams_200rnd_762x51_Tracer: 150Rnd_762x51_Box{
		scope = 1;
		ammo = "ADFRC_abrams_762x51_Tracer";
		displayName = "200 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 200;
		type = "2*		256";
		tracersEvery = 4;
	};
	class ADFRC_abrams_100rnd_762x51_Tracer: 150Rnd_762x51_Box{
		scope = 1;
		ammo = "ADFRC_abrams_762x51_Tracer";
		displayName = "100 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 100;
		type = "2*		256";
		tracersEvery = 4;
	};
	class SmokeLauncherMag;
    class ADFRC_SmokeLauncherMag: SmokeLauncherMag 
	{
        ammo = "ADFRC_SmokeLauncherAmmo";
		count = 2;
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
	class MGun;
	class HMG_M2_Mounted;
	class LMG_coax_ext;
	class ADFRC_abrams_coax: LMG_coax_ext
	{
		displayName = "MG 7.62mm Mag 58 Coax";
		scope = 2;
		magazines[]=
		{
			"ADFRC_abrams_1000Rnd_762x51_Tracer",
			"ADFRC_abrams_200Rnd_762x51_Tracer"
		};
		class GunParticles 
		{

			class effect1 
			{
				effectName = "MachineGunCloud";
				positionName = "Usti hlavne3";
				directionName = "konec hlavne3";
			};
		};
	};	
	class ADFRC_abrams_mag58: ADFRC_abrams_coax
	{
		displayName = "MG 7.62mm Mag 58";
		scope = 2;
		magazines[]=
		{
			"ADFRC_abrams_1000Rnd_762x51_Tracer",
			"ADFRC_abrams_200Rnd_762x51_Tracer",
			"ADFRC_abrams_100Rnd_762x51_Tracer"
		};
		class GunParticles 
		{
			class effect1
			{
				effectName = "MachineGunCloud";
				positionName = "Usti hlavne4";
				directionName = "konec hlavne4";
			};
		};
	};
	class player;
	class cannon_120mm;
	class ADFRC_abrams_M256: cannon_120mm
	{
		displayName = "M256 120mm Cannon";
		scope = 2;
		aiDispersioncoefX = 4;
		aiDispersioncoefY = 6;
		airateoffire = 2;
		airateoffiredistance = 1000;
		canlock = 1;
		//reloadMagazineSound[]={"ADF_Tracked\adfrc_abrams\sounds\weapons\shells\adfrc_abrams_reload.wss",100,100};
		magazineReloadTime = 6;
		//reloadSound[]={"ADF_Tracked\adfrc_abrams\sounds\weapons\shells\adfrc_abrams_reload.wss",100,100};
		reloadTime = 6;
		class GunParticles 
		{
			class effect1
			{
				effectName = "CannonFired";
				positionName = "m256_muzzle_dir";
				directionName = "m256_muzzle";
			};
		};
	};
	class ADFRC_abrams_M2HBQCB: HMG_M2_Mounted 
	{
		displayName="12.7mm M2HB QCB MG";
		scope = 2;
		class GunParticles 
{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
			class effect2 
			{
				directionName = "nabojniceend";
				effectName = "MachineGunEject";
				positionName = "nabojnicestart";
			};
			class effect3 
			{
				directionName = "case_eject_dir";
				effectName = "MachineGunCartridge2";
				positionName = "case_eject_pos";
			};
		};
	};
	class ADFRC_abrams_M2HBQCB_RWS: ADFRC_abrams_M2HBQCB 
	{
		displayName="Kongsberg RS4LP - M2HB MG";
		scope = 2;
		ballisticsComputer = "2 + 16";
		class GunParticles 
{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
			class effect2 
			{
				directionName = "nabojniceend";
				effectName = "MachineGunEject";
				positionName = "nabojnicestart";
			};
			class effect3 
			{
				directionName = "case_eject_dir";
				effectName = "MachineGunCartridge2";
				positionName = "case_eject_pos";
			};
		};
	};
};
