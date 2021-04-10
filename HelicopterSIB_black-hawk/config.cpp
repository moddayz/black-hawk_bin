class CfgPatches
{
	class HelicopterModSIB_black_hawk
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"HelicopterModScriptsSIB"};
	};
};
class CfgMods
{
	class HelicopterModSIB_black_hawk
	{
		dir="HelicopterSIB_black-hawk";
		hideName=0;
		hidePicture=0;
		name="HelicopterModSIB_black_hawk";
		credits="";
		author="SIBNIC";
		authorID="";
		version="version 5";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_black-hawk/4_World"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_black-hawk/3_Game"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_black-hawk/5_Mission"
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class Heli_crash_SoundShaders
	{
		samples[] = {{"HelicopterSIB_black-hawk\Sound\crash",1}};
		range = 250;
		volume = 1.0;
	};
	class Heli_warning_SoundShaders
	{
		samples[] = {{"HelicopterSIB_black-hawk\Sound\warning",1}};
		range = 250;
		volume = 1.0;
	};
	class Heli_engine_SoundShaders
	{
		samples[] = {{"HelicopterSIB_black-hawk\Sound\engine",1}};
		range = 700;
		volume = 1.5;
	};
	class Heli_rotor_SoundShaders
	{
		samples[] = {{"HelicopterSIB_black-hawk\Sound\rotor",1}};
		range = 700;
		volume = 1.5;
	};
	class Heli_start_SoundShaders
	{
		samples[] = {{"HelicopterSIB_black-hawk\Sound\start",1}};
		range = 500;
		volume = 1.5;
	};
	class Heli_stop_SoundShaders
	{
		samples[] = {{"HelicopterSIB_black-hawk\Sound\stop",1}};
		range = 500;
		volume = 1.5;
	};
};
class CfgSoundSets
{
	class Heli_base_SoundSet
	{
		sound3DProcessingType = "character3DProcessingType";
		volumeCurve = "characterAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class HelicopterCrash_SoundSets: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_crash_SoundShaders"};
	};
	class HelicopterWarning_SoundSets: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_warning_SoundShaders"};
	};
	class HelicopterStart_SoundSets: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_start_SoundShaders"};
	};
	class HelicopterStop_SoundSets: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_stop_SoundShaders"};
	};
	class HelicopterEngine_SoundSets: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_engine_SoundShaders"};
		loop = 1;
	};
	class HelicopterRotor_SoundSets: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_rotor_SoundShaders"};
		loop = 1;
	};
};


class CfgVehicles
{
	
	
	class AnimationSources;
	class CarDoor;
	class Inventory_Base;
	class Crew;
	
	class SIBblack_hawk_Door_1_1: CarDoor
	{
		scope = 2;
		displayName = "doors_driver";
		descriptionShort = "doors_driverD";
		model = "HelicopterSIB_black-hawk\SIBblack_hawk_doors_driver.p3d";
		inventorySlot[] = {"SIBblack_hawk_Door_1_1"};
		rotationFlags = 8;
	};
	class SIBblack_hawk_Door_1_2: CarDoor
	{
		scope = 2;
		displayName = "$STR_doors_cargo1";
		descriptionShort = "$STR_doors_cargo1d";
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_doors_cargo1.p3d";
		inventorySlot[] = {"SIBblack_hawk_Door_1_2"};
		rotationFlags = 8;
	};
	class SIBblack_hawk_Door_2_1: CarDoor
	{
		scope = 2;
		displayName = "$STR_SIBblack_hawk_doors_codriver";
		descriptionShort = "$STR_SIBblack_hawk_doors_codriverd";
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_doors_codriver.p3d";
		inventorySlot[] = {"SIBblack_hawk_Door_2_1"};
		rotationFlags = 8;
	};
	class SIBblack_hawk_Door_2_2: CarDoor
	{
		scope = 2;
		displayName = "$STR_SIBblack_hawk_doors_cargo2";
		descriptionShort = "$STR_SIBblack_hawk_doors_cargo2d";
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_doors_cargo2.p3d";
		inventorySlot[] = {"SIBblack_hawk_Door_2_2"};
		rotationFlags = 8;
	};
	class SIBblack_hawk_Door_1_1_camo: SIBblack_hawk_Door_1_1
	{
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_black-hawk\data\11_camo.paa"};
	};
	class SIBblack_hawk_Door_1_2_camo: SIBblack_hawk_Door_1_2
	{
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_black-hawk\data\11_camo.paa"};
	};
	class SIBblack_hawk_Door_2_1_camo: SIBblack_hawk_Door_2_1
	{
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_black-hawk\data\11_camo.paa"};
	};
	class SIBblack_hawk_Door_2_2_camo: SIBblack_hawk_Door_2_2
	{
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_black-hawk\data\11_camo.paa"};
	};
	
	class SIBblack_hawk_blade1:  Inventory_Base
	{
		scope = 2;
		displayName = "black hawk blade 1";
		descriptionShort = "black hawk blade 1";
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_blade1.p3d";
		inventorySlot[] = {"SIBblack_hawk_blade1"};
		//rotationFlags = 8;
		itemSize[] = {10,10};
		class AnimationSources
		{
			class box
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0;
			};
			class blade
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0;
			};
		};
	};
	class SIBblack_hawk_blade2:  SIBblack_hawk_blade1
	{
		scope = 2;
		displayName = "black hawk blade 2";
		descriptionShort = "black hawk blade 2";
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_blade2.p3d";
		inventorySlot[] = {"SIBblack_hawk_blade2"};
	};
	class SIBblack_hawk_blade3:  SIBblack_hawk_blade1
	{
		scope = 2;
		displayName = "black hawk blade 3";
		descriptionShort = "black hawk blade 3";
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_blade3.p3d";
		inventorySlot[] = {"SIBblack_hawk_blade3"};
	};
	class SIBblack_hawk_blade4:  SIBblack_hawk_blade1
	{
		scope = 2;
		displayName = "black hawk blade 4";
		descriptionShort = "black hawk blade 4";
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_blade4.p3d";
		inventorySlot[] = {"SIBblack_hawk_blade4"};
	};
	class SIBblack_hawk_bladem1:  SIBblack_hawk_blade1
	{
		scope = 2;
		displayName = "black hawk tail blade 1";
		descriptionShort = "black hawk tail blade 1";
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_bladem1.p3d";
		inventorySlot[] = {"SIBblack_hawk_bladem1"};
	};
	class SIBblack_hawk_bladem2:  SIBblack_hawk_blade1
	{
		scope = 2;
		displayName = "black hawk tail blade 2";
		descriptionShort = "black hawk tail blade 2";
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_bladem2.p3d";
		inventorySlot[] = {"SIBblack_hawk_bladem2"};
	};
	class SIBblack_hawk_bladem3:  SIBblack_hawk_blade1
	{
		scope = 2;
		displayName = "black hawk tail blade 3";
		descriptionShort = "black hawk tail blade 3";
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_bladem3.p3d";
		inventorySlot[] = {"SIBblack_hawk_bladem3"};
	};
	class SIBblack_hawk_bladem4:  SIBblack_hawk_blade1
	{
		scope = 2;
		displayName = "black hawk tail blade 4";
		descriptionShort = "black hawk tail blade 4";
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_bladem4.p3d";
		inventorySlot[] = {"SIBblack_hawk_bladem4"};
	};
	class HeliSIB_middle;
	class HeliSIB_black_hawk_base: HeliSIB_middle
	{
		scope=1;
		attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","SIBblack_hawk_Door_1_1","SIBblack_hawk_Door_1_2","SIBblack_hawk_Door_2_1","SIBblack_hawk_Door_2_2","CarBattery","SIBblack_hawk_blade1","SIBblack_hawk_blade2","SIBblack_hawk_blade3","SIBblack_hawk_blade4","SIBblack_hawk_bladem1","SIBblack_hawk_bladem2","SIBblack_hawk_bladem3","SIBblack_hawk_bladem4","Reflector_1_1","Reflector_2_1"};
		model="\HelicopterSIB_black-hawk\black_hawk.p3d";
		class GUIInventoryAttachmentsProps
		{
			class Chassis 
			{
				name = "$STR_attachment_Chassis0";
				description = "";
				icon = "cat_vehicle_chassis";
				attachmentSlots[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2"};
			};
			class Body
			{
				name = "$STR_attachment_Body0";
				description = "";
				icon="cat_vehicle_body";
				attachmentSlots[] = {"SIBblack_hawk_Door_1_1","SIBblack_hawk_Door_1_2","SIBblack_hawk_Door_2_1","SIBblack_hawk_Door_2_2","Reflector_1_1","Reflector_2_1"};
			};
			class Engine
			{
				name = "$STR_attachment_Engine0";
				description = "";
				attachmentSlots[] = {"CarBattery","SIBblack_hawk_blade1","SIBblack_hawk_blade2","SIBblack_hawk_blade3","SIBblack_hawk_blade4","SIBblack_hawk_bladem1","SIBblack_hawk_bladem2","SIBblack_hawk_bladem3","SIBblack_hawk_bladem4"};
				icon = "cat_vehicle_engine";
			};
		};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 3000;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Body
				{
					fatalInjuryCoef = 0.001;
					memoryPoints[] = {"dmgzone_body"};
					componentNames[] = {"dmgzone_body"};
					class Health
					{
						hitpoints = 8000;
						transferToGlobalCoef = 0.001;
					};
					transferToZonesNames[] = {};
					inventorySlots[] = {};
				};
				class Chassis
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_chassis","dmgzone_proj"};
					componentNames[] = {"dmgzone_chassis","dmgzone_proj"};
					class Health
					{
						hitpoints = 3000;
						transferToGlobalCoef = 0;

					};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
				class Engine
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_engine"};
					componentNames[] = {"dmgzone_engine"};
					class Health
					{
						hitpoints = 3000;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlots[] = {"CarBattery"};
					inventorySlotsCoefs[] = {0.0};
				};
				class Fuel
				{
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgzone_fuel"};
					memoryPoints[] = {"dmgzone_fuel"};
					class Health
					{
						hitpoints = 700;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlotsCoefs[] = {};
					inventorySlots[] = {};
				};
				class Rotor1
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_rotor1"};
					componentNames[] = {"dmgzone_rotor1"};
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlots[] = {"SIBblack_hawk_blade1","SIBblack_hawk_blade2","SIBblack_hawk_blade3","SIBblack_hawk_blade4"};
					inventorySlotsCoefs[] = {0.1,0.1,0.1,0.1};
				};
				class Rotor2
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_rotor2"};
					componentNames[] = {"dmgzone_rotor2"};
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlots[] = {"SIBblack_hawk_bladem1","SIBblack_hawk_bladem2","SIBblack_hawk_bladem3","SIBblack_hawk_bladem4"};
					inventorySlotsCoefs[] = {0.1,0.1,0.1,0.1};
					
				};
			};
		};
		class AnimationSources:AnimationSources
		{
			class beam1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class beam2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class gpsx
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class gpsy
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class monitor
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			
			class monitor_cherno
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			
			class monitor_namalsk
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			
			class monitor_livon
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			
			class monitor_deep
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class monitor_no
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			
			
			
		};
		class Crew: Crew
		{
			class Driver
			{
				actionSel = "seat_driver";
				proxyPos = "crewDriver";
				getInPos = "pos_driver";
				getInDir = "pos_driver_dir";
				isDriver = 0;	
			};
			class CoDriver
			{
				actionSel = "seat_coDriver";
				proxyPos = "crewCoDriver";
				getInPos = "pos_coDriver";
				getInDir = "pos_coDriver_dir";
				isDriver = 0;	
			};
			class Cargo1
			{
				actionSel = "seat_cargo1";
				proxyPos = "crewcargo1";
				getInPos = "pos_cargo1";
				getInDir = "pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel = "seat_cargo2";
				proxyPos = "crewcargo2";
				getInPos = "pos_cargo2";
				getInDir = "pos_cargo2_dir";
			};
			class Cargo3
			{
				actionSel = "seat_cargo3";
				proxyPos = "crewcargo3";
				getInPos = "pos_cargo3";
				getInDir = "pos_cargo3_dir";
			};
			class Cargo4
			{
				actionSel = "seat_cargo4";
				proxyPos = "crewcargo4";
				getInPos = "pos_cargo4";
				getInDir = "pos_cargo4_dir";
			};
			class Cargo5
			{
				actionSel = "seat_cargo5";
				proxyPos = "crewcargo5";
				getInPos = "pos_cargo5";
				getInDir = "pos_cargo5_dir";
			};
			class Cargo6
			{
				actionSel = "seat_cargo6";
				proxyPos = "crewcargo6";
				getInPos = "pos_cargo6";
				getInDir = "pos_cargo6_dir";
			};
			class Cargo7
			{
				actionSel = "seat_cargo7";
				proxyPos = "crewcargo7";
				getInPos = "pos_cargo7";
				getInDir = "pos_cargo7_dir";
			};
			class Cargo8
			{
				actionSel = "seat_cargo8";
				proxyPos = "crewcargo8";
				getInPos = "pos_cargo8";
				getInDir = "pos_cargo8_dir";
			};
		};

	};
	class Heliblack_hawk_SIB_clear: HeliSIB_black_hawk_base
	{
		scope=2;
		displayName="black hawk";
		descriptionShort="";
	};
	class Heliblack_hawk_SIB: HeliSIB_black_hawk_base
	{
		scope=2;
		displayName="black hawk";
		descriptionShort="";
	};
	class Heliblack_hawk_SIB_camo: HeliSIB_black_hawk_base
	{
		scope=2;
		displayName="UH-60 Camo";
		hiddenSelections[] = {"camo0","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_black-hawk\data\hawk_camo.paa","HelicopterSIB_black-hawk\data\8_camo.paa","HelicopterSIB_black-hawk\data\11_camo.paa","HelicopterSIB_black-hawk\data\28_camo.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,100};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class Heliblack_hawk_SIB_camo_clear: Heliblack_hawk_SIB_clear
	{
		scope=2;
		displayName="UH-60 Camo";
		hiddenSelections[] = {"camo0","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_black-hawk\data\hawk_camo.paa","HelicopterSIB_black-hawk\data\8_camo.paa","HelicopterSIB_black-hawk\data\11_camo.paa","HelicopterSIB_black-hawk\data\28_camo.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,100};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	

};
	
class CfgSlots
{
	class Slot_SIBblack_hawk_Door_1_1
	{
		name="SIBblack_hawk_Door_1_1";
		displayName="Left Door";
		ghostIcon="doorfront";
	};
	class Slot_SIBblack_hawk_Door_2_1
	{
		name="SIBblack_hawk_Door_2_1";
		displayName="Right Door";
		ghostIcon="doorfront";
	};
	class Slot_SIBblack_hawk_Door_1_2
	{
		name="SIBblack_hawk_Door_1_2";
		displayName="Left Back Door";
		ghostIcon="doorrear";
	};
	class Slot_SIBblack_hawk_Door_2_2
	{
		name="SIBblack_hawk_Door_2_2";
		displayName="Right Back Door";
		ghostIcon="doorrear";
	};
	class Slot_SIBblack_hawk_blade1
	{
		name="SIBblack_hawk_blade1";
		displayName="Black_hawk blade 1";
		ghostIcon="doorrear";
	};
	class Slot_SIBblack_hawk_blade2
	{
		name="SIBblack_hawk_blade2";
		displayName="Black_hawk blade 2";
		ghostIcon="doorrear";
	};
	class Slot_SIBblack_hawk_blade3
	{
		name="SIBblack_hawk_blade3";
		displayName="Black_hawk blade 3";
		ghostIcon="doorrear";
	};
	class Slot_SIBblack_hawk_blade4
	{
		name="SIBblack_hawk_blade4";
		displayName="Black_hawk blade 4";
		ghostIcon="doorrear";
	};
	class Slot_SIBblack_hawk_bladem1
	{
		name="SIBblack_hawk_bladem1";
		displayName="Black_hawk tail blade 1";
		ghostIcon="doorrear";
	};
	class Slot_SIBblack_hawk_bladem2
	{
		name="SIBblack_hawk_bladem2";
		displayName="Black_hawk tail blade 2";
		ghostIcon="doorrear";
	};
	class Slot_SIBblack_hawk_bladem3
	{
		name="SIBblack_hawk_bladem3";
		displayName="Black_hawk tail blade 3";
		ghostIcon="doorrear";
	};
	class Slot_SIBblack_hawk_bladem4
	{
		name="SIBblack_hawk_bladem4";
		displayName="Black_hawk tail blade 4";
		ghostIcon="doorrear";
	};
};

class CfgNonAIVehicles
{
	class ProxyVehiclePart;
	class ProxySIBblack_hawk_doors_driver: ProxyVehiclePart
	{
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_doors_driver.p3d";
		inventorySlot = "SIBblack_hawk_Door_1_1";
	};
	class ProxySIBblack_hawk_doors_codriver: ProxyVehiclePart
	{
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk__doors_codriver.p3d";
		inventorySlot = "SIBblack_hawk_Door_2_1";
	};
	class ProxySIBblack_hawk_doors_cargo1: ProxyVehiclePart
	{
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_doors_cargo1.p3d";
		inventorySlot = "SIBblack_hawk_Door_1_2";
	};
	class ProxySIBblack_hawk_doors_cargo2: ProxyVehiclePart
	{
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_doors_cargo2.p3d";
		inventorySlot = "SIBblack_hawk_Door_2_2";
	};
	class ProxySIBblack_hawk_blade1: ProxyVehiclePart
	{
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_blade1.p3d";
		inventorySlot = "SIBblack_hawk_blade1";
	};
	class ProxySIBblack_hawk_blade2: ProxyVehiclePart
	{
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_blade2.p3d";
		inventorySlot = "SIBblack_hawk_blade2";
	};
	class ProxySIBblack_hawk_blade3: ProxyVehiclePart
	{
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_blade3.p3d";
		inventorySlot = "SIBblack_hawk_blade3";
	};
	class ProxySIBblack_hawk_blade4: ProxyVehiclePart
	{
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_blade4.p3d";
		inventorySlot = "SIBblack_hawk_blade4";
	};
	class ProxySIBblack_hawk_bladem1: ProxyVehiclePart
	{
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_bladem1.p3d";
		inventorySlot = "SIBblack_hawk_bladem1";
	};
	class ProxySIBblack_hawk_bladem2: ProxyVehiclePart
	{
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_bladem2.p3d";
		inventorySlot = "SIBblack_hawk_bladem2";
	};
	class ProxySIBblack_hawk_bladem3: ProxyVehiclePart
	{
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_bladem3.p3d";
		inventorySlot = "SIBblack_hawk_bladem3";
	};
	class ProxySIBblack_hawk_bladem4: ProxyVehiclePart
	{
		model = "\HelicopterSIB_black-hawk\SIBblack_hawk_bladem4.p3d";
		inventorySlot = "SIBblack_hawk_bladem4";
	};
};