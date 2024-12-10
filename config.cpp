class CfgPatches
{
	class SleepysPouches
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters"	
		};
	};
};
class CfgMods
{
	class SleepysPouches
	{
		dir="SleepysPouches";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="SleepysPouches";
		credits="Tylord";
		author="Sleepyshot";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"MyModFiles/SleepysPouches/scripts/4_World"                 
				};
			};
		};
	};
};


class CfgSlots
{
//      MILITARY               //////////////////////////////////////////////////////////////////
	class slot_PouchNade1
	{
		name="PouchNade1";
		displayName="Grenade";
		ghostIcon="set:dayz_inventory image:grenade";
	};
	class slot_PouchNade2
	{
		name="PouchNade2";
		displayName="Grenade";
		ghostIcon="set:dayz_inventory image:grenade";
	};
	class slot_PouchRange
	{
		name="PouchRange";
		displayName="Range Finder";
		ghostIcon="set:dayz_inventory image:missing";
	};
//      MEDICAL                //////////////////////////////////////////////////////////////////
	class slot_PouchBand1
	{
		name="PouchBand1";
		displayName="Bandages";
		ghostIcon="set:dayz_inventory image:medicalbandage";
	};
	class slot_PouchBand2
	{
		name="PouchBand2";
		displayName="Bandages";
		ghostIcon="set:dayz_inventory image:medicalbandage";
	};
	class slot_PouchSaline
	{
		name="PouchSaline";
		displayName="Transfusion Kits";
		ghostIcon="set:dayz_inventory image:missing";
	};
	class slot_PouchAutoInj1
	{
		name="PouchAutoInj1";
		displayName="Auto Injectors";
		ghostIcon="set:dayz_inventory image:missing";
	};
	class slot_PouchAutoInj2
	{
		name="PouchAutoInj2";
		displayName="Auto Injectors";
		ghostIcon="set:dayz_inventory image:missing";
	};

//      FISHING                //////////////////////////////////////////////////////////////////
	class slot_PouchFishnet
	{
		name="PouchFishnet";
		displayName="Fishnet Trap";
		ghostIcon="set:dayz_inventory image:metalwire";
	};
	class slot_PouchBottleTrap
	{
		name="PouchBottleTrap";
		displayName="Bottle Trap";
		ghostIcon="set:dayz_inventory image:missing";
	};

//      NOMAD                  //////////////////////////////////////////////////////////////////
	class slot_PouchGps
	{
		name="PouchGps";
		displayName="Gps";
		ghostIcon="set:dayz_inventory image:walkietalkie";
	};
	class slot_PouchMap
	{
		name="PouchMap";
		displayName="Map";
		ghostIcon="set:dayz_inventory image:paper";
	};
	class slot_PouchCompass
	{
		name="PouchCompass";
		displayName="Compass";
		ghostIcon="set:dayz_inventory image:missing";
	};
//      HUNTER                 //////////////////////////////////////////////////////////////////
	class slot_PouchBinoc
	{
		name="PouchBinoc";
		displayName="Binoculars";
		ghostIcon="set:dayz_inventory image:missing";
	};
	class slot_PouchHeatPack1
	{
		name="PouchHeatPack1";
		displayName="HeatPack";
		ghostIcon="set:dayz_inventory image:missing";
	};
	class slot_PouchHeatPack2
	{
		name="PouchHeatPack2";
		displayName="HeatPack";
		ghostIcon="set:dayz_inventory image:missing";
	};
	class slot_PouchGunKit
	{
		name="PouchGunKit";
		displayName="Rifle Cleaning Kit";
		ghostIcon="set:dayz_inventory image:missing";
	};
};

class DefaultAction;
class CfgVehicles
{
	class Inventory_Base;
	class Bottle_Base;
    class Container_Base;
	class Grenade_Base;
	class ItemGPS;
	class ItemOptics;
	class ItemMap;
	class ItemCompass;
	class Transmitter_Base;
	class Trap_Base;
	class MapDefaults;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//                              Pouches
/////////////////////////////////////////////////////////////////////////////////////////////////////
    class SLP_Pouches_ColorBase: Container_Base
    {
		model="MyModFiles\SleepysPouches\SLP_Pouches.p3d";
		itemInfo[]=
		{
			"Clothing",
			"Belt"
		};
        inventorySlot[]=
		{
			"Belt_Back"
		};
		attachments[]= 
		{
			"Knife"
		};
        hiddenSelections[]=
        {
            "Camo"
        };
		rotationFlags=17;
		weight=60;
		itemSize[]={3,3};
		itemsCargoSize[]={3,2};
		allowOwnedCargoManipulation=1;
		canBeDigged=1;
		repairableWithKits[]={2};
		repairCosts[]={25};
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1.00,
							
							{
								"MyModFiles\SleepysPouches\data\SLP_Pouches.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MyModFiles\SleepysPouches\data\SLP_Pouches.rvmat"
							}
						},
						
						{
							0.50,
							
							{
								"MyModFiles\SleepysPouches\data\SLP_Pouches_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MyModFiles\SleepysPouches\data\SLP_Pouches_damage.rvmat"
							}
						},
						
						{
							0.00,
							
							{
								"MyModFiles\SleepysPouches\data\SLP_Pouches_destruct.rvmat"
							}
						}
					};
				};
			};
		};
        soundImpactType="textile";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
    };

  	class SLP_Pouches_Medical : SLP_Pouches_ColorBase
    {
        scope=2;
		displayName="Medical Pouches";
		descriptionShort="Medical Pouches that can attach to your belt.";
        hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysPouches\data\SLP_Pouches_Medical_co.paa"
		};
		attachments[]=
		{
			"Knife",
			"PouchBand2",
			"PouchBand1",
			"PouchAutoInj1",
			"PouchAutoInj2",
			"PouchSaline"
			
		};
    };
	class SLP_Pouches_Nomad : SLP_Pouches_ColorBase
    {
        scope=2;
		displayName="Nomad Pouches";
		descriptionShort="Nomad Pouches that can attach to your belt.";
        hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysPouches\data\SLP_Pouches_Nomad_co.paa"
		};
		attachments[]=
		{
			"Knife",
			"PouchGps",
			"PouchCompass",
			"PouchMap"
		};
    };
    class SLP_Pouches_Military : SLP_Pouches_ColorBase
    {
        scope=2;
		displayName="Military Pouches";
		descriptionShort="Military Pouches that can attach to your belt.";
        hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysPouches\data\SLP_Pouches_WinterCamo_co.paa"
		};
		attachments[]=
		{
			"Knife",
			"PouchNade1",
			"PouchNade2",
			"PouchRange",
			"NVG"
		};
    };
	class SLP_Pouches_Fishing : SLP_Pouches_ColorBase
	{
		scope=2;
		displayName="Fishing Pouches";
		descriptionShort="Fishing Pouches that can attach to your belt.";
        hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysPouches\data\SLP_Pouches_Fishing_co.paa"
		};
		attachments[]=
		{
			"Knife",
			"Hook",
			"Bait",
			"PouchBottleTrap",
			"PouchFishnet"
		};
	};
	class SLP_Pouches_Hunting : SLP_Pouches_ColorBase
	{
		scope=2;
		displayName="Hunting Pouches";
		descriptionShort="Hunting Pouches that can attach to your belt.";
        hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysPouches\data\SLP_Pouches_Hunter_co.paa"
		};
		attachments[]=
		{
			"Knife",
			"PouchBinoc",
			"PouchHeatPack1",
			"PouchHeatPack2",
			"PouchGunKit"
		};
	};
	



/////////////////////////////////////////////////////////////////////////////////////////////////////
//                              Vanilla Overrides
/////////////////////////////////////////////////////////////////////////////////////////////////////
//        OTHER               ///////////////////////////////////////////////////////////////////////
	class WaterBottle: Bottle_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_WaterBottle0";
		descriptionShort="$STR_CfgVehicles_WaterBottle1";
		model="\dz\gear\drinks\WaterBottle.p3d";
		inventorySlot[]=
		{
			"Belt_Left"
		};
		debug_ItemCategory=6;
		weight=50;
		itemSize[]={1,3};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		varTemperatureMax=1;
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterBottle_in_B
				{
					soundSet="WaterBottle_in_B_SoundSet";
					id=202;
				};
				class WaterBottle_in_C
				{
					soundSet="WaterBottle_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class WaterBottle_out_A
				{
					soundSet="WaterBottle_out_A_SoundSet";
					id=205;
				};
				class WaterBottle_out_B
				{
					soundSet="WaterBottle_out_B_SoundSet";
					id=206;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="WaterBottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class FilteringBottle: Bottle_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_FilteringBottle0";
		descriptionShort="$STR_CfgVehicles_FilteringBottle1";
		model="\dz\gear\drinks\FilteringBottle.p3d";
		inventorySlot[]=
		{
			"Belt_Left"
		};
		weight=180;
		itemSize[]={1,3};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  + 131072 + 262144 + 524288 + 2097152 + 4194304 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) - 32768 - 8192 - 16384";
		varTemperatureFreezePoint=-200;
		varTemperatureThawPoint=-200;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varTemperatureOverheatTime=0;
		varTemperatureMax=80;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=650;
		temperaturePerQuantityWeight=1.5;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\drinks\data\Loot_FilteringBottle.rvmat"
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterPouch_in_B
				{
					soundSet="WaterPouch_in_B_SoundSet";
					id=202;
				};
				class WaterPouch_in_C
				{
					soundSet="WaterPouch_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class WaterPouch_out_A
				{
					soundSet="WaterPouch_out_A_SoundSet";
					id=205;
				};
				class WaterPouch_out_B
				{
					soundSet="WaterPouch_out_B_SoundSet";
					id=206;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.059999999,0.035,0};
				orientation[]={3,-95,90};
			};
			class DirectCookingB
			{
				position[]={0.059999999,0.035,0};
				orientation[]={-5,105,90};
			};
			class DirectCookingC
			{
				position[]={0.059999999,0.035,0};
				orientation[]={3,-95,90};
			};
		};
	};


//        NOMAD               ///////////////////////////////////////////////////////////////////////
	class GPSReceiver: ItemGPS
	{
		scope=2;
		displayName="$STR_GPSReceiver0";
		descriptionShort="$STR_GPSReceiver1";
		model="\dz\gear\navigation\GPSReceiver.p3d";
		itemSize[]={1,2};
		weight=350;
		rotationFlags=1;
		simulation="ItemGPS";
		inventorySlot[]=
		{
			"WalkieTalkie",
			"PouchGps"
		};
		attachments[]=
		{
			"BatteryD"
		};
		repairableWithKits[]={7};
		repairCosts[]={50};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=3;
		};
		hiddenSelections[]=
		{
			"grid_1_0",
			"grid_1_1",
			"grid_1_2",
			"grid_2_0",
			"grid_2_1",
			"grid_2_2",
			"alt_0",
			"alt_1",
			"alt_2",
			"alt_3"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa",
			"dz\gear\navigation\data\GPS_dash_ca.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\navigation\data\GPSReceiver.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\navigation\data\GPSReceiver.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\navigation\data\GPSReceiver_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\navigation\data\GPSReceiver_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\navigation\data\GPSReceiver_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class DisplayState
			{
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
		};
		soundImpactType="plastic";
	};
	class PersonalRadio: Transmitter_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_PersonalRadio0";
		descriptionShort="$STR_CfgVehicles_PersonalRadio1";
		lootTag[]=
		{
			"Police",
			"Hunting",
			"Camping",
			"Military_east"
		};
		model="\dz\gear\radio\WalkieTalkie.p3d";
		weight=250;
		absorbency=0.5;
		itemSize[]={1,3};
		inventorySlot[]=
		{
			"WalkieTalkie",
			"PouchGps"
		};
		rotationFlags=1;
		oldpower=0;
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
		simulation="itemTransmitter";
		inputRange[]={2,5,10};
		range=5000;
		attachments[]=
		{
			"BatteryD"
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			wetnessExposure=0.1;
		};
		class ClothingTypes
		{
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\radio\data\WalkieTalkie.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\radio\data\WalkieTalkie.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\radio\data\WalkieTalkie_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\radio\data\WalkieTalkie_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\radio\data\WalkieTalkie_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class turnOnRadio
				{
					soundSet="turnOnRadio_SoundSet";
					id=1006;
				};
				class turnOffRadio
				{
					soundSet="turnOffRadioNoise_SoundSet";
					id=1007;
				};
			};
		};
	};
	class ChernarusMap: ItemMap
	{
		scope=2;
		displayName="$STR_CfgVehicles_ChernarusMap0";
		descriptionShort="$STR_CfgVehicles_ChernarusMap1";
		model="\dz\gear\navigation\Map_chernarus_animated.p3d";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=40;
		selectionPaper="paper";
		simulation="ItemMap";
		inventorySlot[]=
		{
			"PouchMap"
		};
		hiddenSelections[]=
		{
			"texture_map_closed",
			"texture_map_opened",
			"texture_legend"
		};
		absorbency=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\navigation\data\Map_chernarus.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\navigation\data\Map_chernarus.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\navigation\data\Map_chernarus_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MapProperties: MapDefaults
		{
			scaleMin=0.079999998;
			scaleMax=0.347;
		};
		class AnimationSources
		{
			class map_closed
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class map_opened
			{
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
		};
	};
	class Compass: ItemCompass
	{
		scope=2;
		displayName="$STR_CfgVehicles_Compass0";
		descriptionShort="$STR_CfgVehicles_Compass1";
		model="\dz\gear\navigation\compass.p3d";
		animClass="Compass";
		itemSize[]={1,2};
		weight=190;
		simulation="ItemCompass";
		inventorySlot[]=
		{
			"PouchCompass"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\navigation\data\compass.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\navigation\data\compass.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\navigation\data\compass_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\navigation\data\compass_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\navigation\data\compass_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class cover
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
		};
		soundImpactType="glass";
		class AnimEvents
		{
			class SoundWeapon
			{
				class compass_open
				{
					soundSet="compass_open_SoundSet";
					id=204;
				};
				class compass_close
				{
					soundSet="compass_close_SoundSet";
					id=205;
				};
			};
		};
	};
	class OrienteeringCompass: ItemCompass
	{
		scope=2;
		displayName="$STR_CfgVehicles_OrienteeringCompass0";
		descriptionShort="$STR_CfgVehicles_OrienteeringCompass1";
		model="\dz\gear\navigation\compass_modern.p3d";
		animClass="Compass";
		itemSize[]={1,2};
		weight=130;
		simulation="ItemCompass";
		inventorySlot[]=
		{
			"PouchCompass"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\navigation\data\compass_modern.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\navigation\data\compass_modern.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\navigation\data\compass_modern_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\navigation\data\compass_modern_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\navigation\data\compass_modern_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class wheel
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
		};
		soundImpactType="plastic";
	};
//        MILITARY            ///////////////////////////////////////////////////////////////////////
	class RGD5Grenade: Grenade_Base
	{
		inventorySlot[]=
		{
			"PouchNade1",
			"PouchNade2"
		};
	};
	class M67Grenade: Grenade_Base
	{
		inventorySlot[]=
		{
			"PouchNade1",
			"PouchNade2"
		};
	};
	class M18SmokeGrenade_ColorBase: Grenade_Base
	{
		inventorySlot[]=
		{
			"PouchNade1",
			"PouchNade2"
		};
	};
	class RDG2SmokeGrenade_ColorBase: Grenade_Base
	{
		inventorySlot[]=
		{
			"PouchNade1",
			"PouchNade2"
		};
	};
	class Grenade_ChemGas: Grenade_Base
	{
		inventorySlot[]=
		{
			"PouchNade1",
			"PouchNade2"
		};
	};
	class Rangefinder: ItemOptics
	{
		scope=2;
		displayName="$STR_CfgVehicles_Rangefinder0";
		descriptionShort="$STR_CfgVehicles_Rangefinder1";
		model="\dz\gear\optics\Rangefinder.p3d";
		simulation="itemoptics";
		animClass="Binoculars";
		itemSize[]={2,1};
		weight=270;
		rotationFlags=17;
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="\dz\gear\optics\opticview_rangefinder.p3d";
			distanceZoomMin=500;
			distanceZoomMax=500;
			opticsZoomMin="0.3926/4";
			opticsZoomMax="0.3926/4";
			opticsZoomInit="0.3926/4";
		};
		inventorySlot[]=
		{
			"PouchRange"
		};
		attachments[]=
		{
			"BatteryD"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\optics\data\Rangefinder.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\optics\data\Rangefinder.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\optics\data\Rangefinder_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\optics\data\Rangefinder_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\optics\data\Rangefinder_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
		soundImpactType="plastic";
	};
	

//        FISHING             ///////////////////////////////////////////////////////////////////////
	
	class FishNetTrap: Trap_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_FishNetTrap0";
		descriptionShort="$STR_CfgVehicles_FishNetTrap1";
		model="\dz\gear\traps\fishnettrap.p3d";
		inventorySlot[]=
		{
			"PouchFishnet"
		};
		attachments[]=
		{
			"Trap_Bait_1"
		};
		slopeTolerance=0.2;
		yawPitchRollLimit[]={20,20,20};
		weight=570;
		itemSize[]={3,2};
		allowOwnedCargoManipulation=1;
		itemBehaviour=1;
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\traps\data\fishnettrap_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\traps\data\fishnettrap.rvmat"
		};
		hologramMaterial="fishnettrap";
		hologramMaterialPath="dz\gear\traps\data";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\gear\traps\data\fishnettrap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\gear\traps\data\fishnettrap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\gear\traps\data\fishnettrap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\gear\traps\data\fishnettrap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\gear\traps\data\fishnettrap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Trapping
		{
			baitTypes[]={0};
			baitTypeChances[]={0.15000001};
			resultQuantityBaseMod=0.5;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0.5;
		};
		class AnimationSources
		{
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class triggered
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		soundImpactType="textile";
	};
	class SmallFishTrap: Trap_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SmallFishTrap0";
		descriptionShort="$STR_CfgVehicles_SmallFishTrap1";
		model="\dz\gear\traps\smallfishtrap.p3d";
		rotationFlags=2;
		inventorySlot[]=
		{
			"PouchBottleTrap"
		};
		attachments[]=
		{
			"Trap_Bait_1"
		};
		slopeTolerance=0.2;
		yawPitchRollLimit[]={20,20,20};
		weight=25;
		itemSize[]={1,2};
		allowOwnedCargoManipulation=1;
		itemBehaviour=1;
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\drinks\Data\loot_waterbottle_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\drinks\Data\Loot_WaterBottle.rvmat"
		};
		hologramMaterial="Loot_WaterBottle";
		hologramMaterialPath="dz\gear\drinks\Data";
		destroyOnEmpty=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Trapping
		{
			baitTypes[]={0};
			baitTypeChances[]={0.15000001};
			resultQuantityBaseMod=0.5;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0.5;
		};
		class AnimationSources
		{
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class triggered
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		soundImpactType="plastic";
	};
//        MEDICAL             ///////////////////////////////////////////////////////////////////////
	class BandageDressing: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_BandageDressing0";
		descriptionShort="$STR_CfgVehicles_BandageDressing1";
		model="\dz\gear\medical\Bandage_dressing.p3d";
		debug_ItemCategory=7;
		inventorySlot[]=
		{
			"MedicalBandage",
			"PouchBand1",
			"PouchBand2"
		};
		isMeleeWeapon=1;
		quantityBar=1;
		varQuantityDestroyOnMin=1;
		varQuantityInit=4;
		varQuantityMin=0;
		varQuantityMax=4;
		varCleannessInit=1;
		rotationFlags=17;
		weight=10;
		weightPerQuantityUnit=30;
		absorbency=0.80000001;
		itemSize[]={1,2};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundImpactType="textile";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\bandage.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\bandage.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\bandage_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\bandage_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\bandage_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet="Bandage_loop_SoundSet";
					id=201;
				};
				class Bandage_loop2
				{
					soundSet="Bandage_loop_SoundSet";
					id=202;
				};
				class Bandage_loop3
				{
					soundSet="Bandage_loop_SoundSet";
					id=203;
				};
				class Bandage_start
				{
					soundSet="Bandage_start_SoundSet";
					id=204;
				};
				class Bandage_end
				{
					soundSet="Bandage_end_SoundSet";
					id=205;
				};
			};
		};
	};
	class Epinephrine: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Epinephrine0";
		descriptionShort="$STR_CfgVehicles_Epinephrine1";
		model="\dz\gear\medical\Epinephrine.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
		inventorySlot[]=
		{
			"PouchAutoInj1",
			"PouchAutoInj2"
		};
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\epipen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Morphine: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Morphine0";
		descriptionShort="$STR_CfgVehicles_Morphine1";
		model="\dz\gear\medical\Morphine.p3d";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
		inventorySlot[]=
		{
			"PouchAutoInj1",
			"PouchAutoInj2"
		};
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\Morphine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\Morphine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\Morphine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\Morphine_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\Morphine_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Morphine_spear
				{
					soundSet="Morphine_spear_SoundSet";
					id=201;
				};
				class Morphine_out
				{
					soundSet="Morphine_out_SoundSet";
					id=202;
				};
			};
		};
	};
	class AntiChemInjector: Inventory_Base
	{
		scope=2;
		displayName="$STR_AntiChemInjector0";
		descriptionShort="$STR_AntiChemInjector1";
		model="\dz\gear\medical\Epinephrine.p3d";
		debug_ItemCategory=7;
		inventorySlot[]=
		{
			"PouchAutoInj1",
			"PouchAutoInj2"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\antidote_co.paa"
		};
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\epipen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SalineBagIV: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SalineBagIV0";
		descriptionShort="$STR_CfgVehicles_SalineBagIV1";
		model="\dz\gear\medical\TransfusionKit.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={2,2};
		weight=500;
		inventorySlot[]=
		{
			"PouchSaline"
		};
		isMeleeWeapon=1;
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\transfusion_kit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\transfusion_kit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\transfusion_kit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\transfusion_kit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\transfusion_kit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class BloodBag_start
				{
					soundSet="BloodBag_start_SoundSet";
					id=201;
				};
				class BloodBag_spear
				{
					soundSet="BloodBag_spear_SoundSet";
					id=202;
				};
				class BloodBag_loop
				{
					soundSet="BloodBag_loop_SoundSet";
					id=203;
				};
				class BloodBag_loop2
				{
					soundSet="BloodBag_loop_SoundSet";
					id=204;
				};
				class BloodBag_end
				{
					soundSet="BloodBag_end_SoundSet";
					id=205;
				};
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class BloodBagIV: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_BloodBagIV0";
		descriptionShort="$STR_CfgVehicles_BloodBagIV1";
		model="\dz\gear\medical\BloodBag_Full_IV.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={2,2};
		weight=110;
		weightPerQuantityUnit=1;
		quantityBar=1;
		stackedUnit="ml";
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
		varQuantityDestroyOnMin=1;
		varLiquidTypeInit=4;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256";
		inventorySlot[]=
		{
			"PouchSaline"
		};
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\BloodBag_Full.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\BloodBag_Full.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\BloodBag_Full_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\BloodBag_Full_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\BloodBag_Full_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class BloodBag_start
				{
					soundSet="BloodBag_start_SoundSet";
					id=201;
				};
				class BloodBag_spear
				{
					soundSet="BloodBag_spear_SoundSet";
					id=202;
				};
				class BloodBag_loop
				{
					soundSet="BloodBag_loop_SoundSet";
					id=203;
				};
				class BloodBag_loop2
				{
					soundSet="BloodBag_loop_SoundSet";
					id=204;
				};
				class BloodBag_end
				{
					soundSet="BloodBag_end_SoundSet";
					id=205;
				};
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
//        HUNTING             ///////////////////////////////////////////////////////////////////////
	class Binoculars: ItemOptics
	{
		scope=2;
		displayName="$STR_cfgvehicles_optics_binoculars0";
		descriptionShort="$STR_cfgvehicles_optics_binoculars1";
		model="\dz\gear\optics\binoculars.p3d";
		simulation="itemoptics";
		animClass="Binoculars";
		inventorySlot[]=
		{
			"PouchBinoc"
		};
		itemSize[]={2,2};
		weight=980;
		rotationFlags=17;
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="\DZ\gear\optics\binoculars_view.p3d";
			distanceZoomMin=100;
			distanceZoomMax=100;
			opticsZoomMin=0.050000001;
			opticsZoomMax=0.050000001;
			opticsZoomInit=0.050000001;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\optics\data\binoculars.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\optics\data\binoculars.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\optics\data\binoculars_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\optics\data\binoculars_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\optics\data\binoculars_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
		soundImpactType="glass";
	};
	class Heatpack: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Heatpack0";
		descriptionShort="$STR_CfgVehicles_Heatpack1";
		model="\DZ\gear\tools\Heatpack.p3d";
		animClass="Knife";
		rotationFlags=17;
		itemSize[]={1,2};
		varEnergyInit=1000;
		varEnergyMin=0;
		varEnergyMax=1000;
		weightPerQuantityUnit=0;
		temperaturePerQuantityWeight=4;
		varTemperatureMax=80;
		varTemperatureMin=25;
		inventorySlot[]=
		{
			"PouchHeatPack1",
			"PouchHeatPack2"
		};
		weight=150;
		fragility=0.0099999998;
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\heat_pack.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\heat_pack.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\heat_pack_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\heat_pack_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\heat_pack_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class EnergyManager
		{
			energyAtSpawn=1200;
			energyUsagePerSecond=1;
			updateInterval=40;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class WeaponCleaningKit: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_WeaponCleaningKit0";
		descriptionShort="$STR_CfgVehicles_WeaponCleaningKit1";
		model="\dz\gear\tools\cleaning_kit_wood.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		rotationFlags=17;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		inventorySlot[]=
		{
			"PouchGunKit"
		};
		weight=780;
		weightPerQuantityUnit=0;
		itemSize[]={2,3};
		fragility=0.0099999998;
		repairKitType=1;
		soundImpactType="wood";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFistLight";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFistHeavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFistHeavy";
				range=2.8;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyPouchSheathProxy : ProxyAttachment
	{
		scope=2;
		inventorySlot= "PouchSheath";
		model="MyModFiles\SleepysPouches\PouchSheathProxy.p3d";
	};
	class ProxyPouchNadeProxy1 : ProxyAttachment
	{
		scope=2;
		inventorySlot= "PouchNade1";
		model="MyModFiles\SleepysPouches\PouchNadeProxy1.p3d";
	};
	class ProxyPouchNadeProxy2 : ProxyAttachment
	{
		scope=2;
		inventorySlot= "PouchNade2";
		model="MyModFiles\SleepysPouches\PouchNadeProxy2.p3d";
	};
	class ProxyPouchBandProxy1 : ProxyAttachment
	{
		scope=2;
		inventorySlot= "PouchBand1";
		model="MyModFiles\SleepysPouches\PouchBandProxy1.p3d";
	};
	class ProxyPouchBandProxy2 : ProxyAttachment
	{
		scope=2;
		inventorySlot= "PouchBand2";
		model="MyModFiles\SleepysPouches\PouchBandProxy2.p3d";
	};
	class ProxyPouchGpsProxy : ProxyAttachment
	{
		scope=2;
		inventorySlot= "PouchGps";
		model="MyModFiles\SleepysPouches\PouchGpsProxy.p3d";
	};
	class ProxyPouchFishnetProxy : ProxyAttachment
	{
		scope=2;
		inventorySlot= "PouchFishnet";
		model="MyModFiles\SleepysPouches\PouchFishnetProxy.p3d";
	};
	class ProxyPouchBinocProxy : ProxyAttachment
	{
		scope=2;
		inventorySlot= "PouchBinoc";
		model="MyModFiles\SleepysPouches\PouchBinocProxy.p3d";
	};
};