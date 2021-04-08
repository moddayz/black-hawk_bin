

class SIBblack_hawk_Door_1_1 extends CarDoor {};
class SIBblack_hawk_Door_1_2 extends CarDoor {};
class SIBblack_hawk_Door_2_1 extends CarDoor {};
class SIBblack_hawk_Door_2_2 extends CarDoor {};

class HeliSIB_black_hawk_base extends HeliSIB_middle
{
	HeliLightPanel_black_hawk m_LightPanel_1_black_hawk;
	HeliLightPanel_black_hawk m_LightPanel_2_black_hawk;
	HeliLightPanel_black_hawk m_LightPanel_3_black_hawk;
	HeliLightPanel_black_hawk m_LightPanel_4_black_hawk;
	HeliLight_black_hawk m_Light_1_black_hawk;
	
	int coord_map=1;
	bool HeliEnableLight=false;
	ref array<string>  m_hawk_blade = {"SIBblack_hawk_blade1","SIBblack_hawk_blade2","SIBblack_hawk_blade3","SIBblack_hawk_blade4","SIBblack_hawk_bladem1","SIBblack_hawk_bladem2","SIBblack_hawk_bladem3","SIBblack_hawk_bladem4"};
	ref array<string>  m_hawk_blade1 = {"SIBblack_hawk_blade1","SIBblack_hawk_blade2","SIBblack_hawk_blade3","SIBblack_hawk_blade4"};
	ref array<string>  m_hawk_blade2 = {"SIBblack_hawk_bladem1","SIBblack_hawk_bladem2","SIBblack_hawk_bladem3","SIBblack_hawk_bladem4"};
	void HeliSIB_black_hawk_base()
	{
		gps_carta_black_hawk(this);
	}

	override bool CanReachSeatFromDoors( string pSeatSelection, vector pFromPos, float pDistance = 1.0 )
	{
		pDistance=2.0;
		string conPointName = GetDoorConditionPointFromSelection(pSeatSelection);
		if (conPointName.Length() > 0)
		{
			if( MemoryPointExists(conPointName) )
			{
				vector conPointMS = GetMemoryPointPos(conPointName);
				vector conPointWS = ModelToWorld(conPointMS);
				
				//! skip the height for now
				conPointWS[1] = 0;
				pFromPos[1] = 0;
				
				if (vector.Distance(pFromPos, conPointWS) <= pDistance)
				{
					return true;
				}
			}
		}

		return false;		
	}
	override bool IsAreaAtDoorFree( int currentSeat, float maxAllowedObjHeight = 0.5, float horizontalExtents = 0.5, float playerHeight = 1.7 )
	{
		return true;
	}
	override void creat_InInventory_heli()
	{
		

		if(IsKindOf("Heliblack_hawk_SIB"))
		{
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_1_1" );
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_1_2" );
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_2_1" );
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_2_2" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade1" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade2" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade3" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade4" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem1" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem2" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem3" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem4" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}
		if(IsKindOf("Heliblack_hawk_SIB_camo"))
		{
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_1_1_camo" );
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_1_2_camo" );
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_2_1_camo" );
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_2_2_camo" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade1" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade2" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade3" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade4" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem1" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem2" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem3" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem4" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}
		super.creat_InInventory_heli();
	};



	override string GetDoorInvSlotNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "SIBblack_hawk_Door_1_1";
			break;
		case 1:
			return "SIBblack_hawk_Door_2_1";
			break;
		case 2:
			return "SIBblack_hawk_Door_1_2";
			break;
		case 3:
			return "SIBblack_hawk_Door_2_2";
			break;
		}
		
		return super.GetDoorInvSlotNameFromSeatPos(posIdx);
	}
	


	override int GetCarDoorsState( string slotType )
	{
		CarDoor carDoor;

		Class.CastTo( carDoor, FindAttachmentBySlotName( slotType ) );
		if ( !carDoor )return CarDoorState.DOORS_MISSING;
		
		switch( slotType )
		{
		case "SIBblack_hawk_Door_1_1":
			if ( GetAnimationPhase("DoorsDriver") > 0.1 )
			return CarDoorState.DOORS_OPEN;
			else
			return CarDoorState.DOORS_CLOSED;

			break;
			
		case "SIBblack_hawk_Door_2_1":
			if ( GetAnimationPhase("DoorsCoDriver") > 0.1 )
			return CarDoorState.DOORS_OPEN;
			else
			return CarDoorState.DOORS_CLOSED;

			break;
			
		case "SIBblack_hawk_Door_1_2":
			if ( GetAnimationPhase("DoorsCargo1") > 0.1 )
			return CarDoorState.DOORS_OPEN;
			else
			return CarDoorState.DOORS_CLOSED;

			break;
			
		case "SIBblack_hawk_Door_2_2":
			if ( GetAnimationPhase("DoorsCargo2") > 0.1 )
			return CarDoorState.DOORS_OPEN;
			else
			return CarDoorState.DOORS_CLOSED;
			break;
			
			
			
		}

		return CarDoorState.DOORS_MISSING;
	}
	
	override int GetSeatAnimationType( int posIdx )
	{
		switch( posIdx )
		{
		case 0:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 1:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 2:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 3:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 4:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 5:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 6:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 7:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 8:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 9:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		}
		return 0;
	}
	override bool CanReachSeatFromSeat( int currentSeat, int nextSeat )
	{
		switch( currentSeat )
		{
		case 0:
			if ( nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 1:
			if ( nextSeat == 0 ||nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 2:
			if ( nextSeat == 0 || nextSeat == 1 ||  nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 3:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 ||  nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 4:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 5:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 ||  nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 6:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 7:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 8:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 9)
			return true;
			break;
		case 9:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 )
			return true;
			break;
		}
		
		return false;
	}
	

	override bool CrewCanGetThrough( int posIdx )
	{
		switch( posIdx )
		{
		case 0:
			if ( GetCarDoorsState( "SIBblack_hawk_Door_1_1" ) == CarDoorState.DOORS_CLOSED )
			return false;
			return true;
			break;
		case 1:
			if ( GetCarDoorsState( "SIBblack_hawk_Door_2_1" ) == CarDoorState.DOORS_CLOSED )
			return false;
			return true;
			break;
		case 2:
		case 4:
		case 6:
		case 8:
			if ( GetCarDoorsState( "SIBblack_hawk_Door_1_2" ) == CarDoorState.DOORS_CLOSED )
			return false;
			return true;
			break;
		case 3:
		case 5:
		case 7:
		case 9:
			if ( GetCarDoorsState( "SIBblack_hawk_Door_2_2" ) == CarDoorState.DOORS_CLOSED )
			return false;
			return true;
			break;
		}
		return false;
	}
	override string GetDoorConditionPointFromSelection( string selection )
	{
		switch( selection )
		{
		case "seat_driver":
			return "seat_con_1_1";
			break;
		case "seat_codriver":
			return "seat_con_2_1";
			break;

		case "seat_cargo1":
		case "seat_cargo3":
		case "seat_cargo5":
		case "seat_cargo7":
			return "seat_con_1_2";
			break;
		case "seat_cargo2":
		case "seat_cargo4":
		case "seat_cargo8":
		case "seat_cargo6":
			return "seat_con_2_2";
			break;

		}
		
		return "";
	}
	
	void SimulateLight(float dt)
	{
		float beam1 = GetAnimationPhase("beam1");
		if(beam1 == 1)
		{
			if(m_LightPanel_1_black_hawk == NULL)
			{
				m_LightPanel_1_black_hawk = HeliLightPanel_black_hawk.Cast( ScriptedLightBase.CreateLight( HeliLightPanel_black_hawk, "0 0 0") );
				m_LightPanel_1_black_hawk.AttachOnMemoryPoint(this, "beamStart10","beamEnd10");
			}
			if(m_LightPanel_2_black_hawk == NULL)
			{
				m_LightPanel_2_black_hawk = HeliLightPanel_black_hawk.Cast( ScriptedLightBase.CreateLight( HeliLightPanel_black_hawk, "0 0 0") );
				m_LightPanel_2_black_hawk.AttachOnMemoryPoint(this, "beamStart11","beamEnd11");
			}
			if(m_LightPanel_3_black_hawk == NULL)
			{
				m_LightPanel_3_black_hawk = HeliLightPanel_black_hawk.Cast( ScriptedLightBase.CreateLight( HeliLightPanel_black_hawk, "0 0 0") );
				m_LightPanel_3_black_hawk.AttachOnMemoryPoint(this, "beamStart12","beamEnd12");
			}
			if(m_LightPanel_4_black_hawk == NULL)
			{
				m_LightPanel_4_black_hawk = HeliLightPanel_black_hawk.Cast( ScriptedLightBase.CreateLight( HeliLightPanel_black_hawk, "0 0 0") );
				m_LightPanel_4_black_hawk.AttachOnMemoryPoint(this, "beamStart13","beamEnd13");
			}
		}else{
			if (m_LightPanel_1_black_hawk)m_LightPanel_1_black_hawk.FadeOut();
			if (m_LightPanel_2_black_hawk)m_LightPanel_2_black_hawk.FadeOut();
			if (m_LightPanel_3_black_hawk)m_LightPanel_3_black_hawk.FadeOut();
			if (m_LightPanel_4_black_hawk)m_LightPanel_4_black_hawk.FadeOut();
		}

		float beam2 = GetAnimationPhase("beam2");
		if(beam2 == 1)
		{
			if(m_Light_1_black_hawk == NULL)
			{
				m_Light_1_black_hawk = HeliLight_black_hawk.Cast( ScriptedLightBase.CreateLight( HeliLight_black_hawk, "0 0 0") );
				m_Light_1_black_hawk.AttachOnMemoryPoint(this, "beamStart2","beamEnd2");
			}
		}else{
			if (m_Light_1_black_hawk)m_Light_1_black_hawk.FadeOut();
		}
	}
	override void SoundAnim_Simulate(float dt)
	{
		if ( GetGame().IsClient()  && m_enable)
		{
			SimulateLight(dt);
		}
		super.SoundAnim_Simulate(dt);
	}


	override bool CanDisplayAttachmentCategory( string category_name )
	{
		category_name.ToLower();
		if(category_name == "chassis")return false;
		return true;
	}
	override bool CanReleaseAttachment( EntityAI attachment )
	{
		string attType = attachment.GetType();
		if(attType=="HeadlightH7" )return true;
		if( attType == "HatchbackWheel" )return false;
		if(m_AnimRotorSpeed > 0)return false;
		return true;
	}
	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached( item, slot_name );
		if(m_hawk_blade.Find(slot_name) > -1)
		{
			item.SetAnimationPhase("box", 1);
			item.SetAnimationPhase("blade", 0);
		}
		
	}
	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached( item, slot_name );
		if(m_hawk_blade.Find(slot_name) > -1)
		{
			if(!item.IsRuined())
			{
				item.SetAnimationPhase("box", 0);
				item.SetAnimationPhase("blade", 1);
			}
		}
		if(slot_name == "CarBattery" || slot_name == "Reflector_1_1" || slot_name == "Reflector_2_1")
		{
			SetAnimationPhase("beam1", 0.0);
			SetAnimationPhase("beam2", 0.0);
		}
	}
	override void OnAttachmentRuined(EntityAI attachment)
	{
		super.OnAttachmentRuined( attachment );
		if(attachment && attachment.IsRuined())
		{
			if(m_hawk_blade.Find(attachment.GetType()) > -1)
			{
				GetGame().ObjectDelete(attachment);
			}
			
			if(attachment.GetType()=="HeadlightH7")
			{
				SetAnimationPhase("beam2", 0.0);
			}
		}
	}
};

class Heliblack_hawk_SIB extends HeliSIB_black_hawk_base{};
void gps_carta_black_hawk(HeliSIB_black_hawk_base heli)
{
	if(!heli)return;
	string name_naps=GetGame().GetWorldName();

	bool active_map=true;
	if(name_naps=="chernarusplus")
	{
		heli.coord_map=15000;active_map=false;
		heli.SetAnimationPhase("monitor_cherno", 0);
	}
	if(name_naps=="enoch")
	{
		heli.coord_map=12800;active_map=false;
		heli.SetAnimationPhase("monitor_livon", 0);
	}
	if(name_naps=="namalsk")
	{
		heli.coord_map=12800;active_map=false;
		heli.SetAnimationPhase("monitor_namalsk", 0);
	}
	if(name_naps=="deerisle")
	{
		heli.coord_map=16500;active_map=false;
		heli.SetAnimationPhase("monitor_deep", 0);
	}
	if(active_map)
	{
		heli.coord_map=16500;
		heli.SetAnimationPhase("monitor_no", 0);
	}
}



modded class ActionHeliStartEngineSIB
{

	override void StartEngineSIB(HeliTest_SIB heli)
	{
		if(heli.IsKindOf("HeliSIB_black_hawk_base"))
		{
			bool atach_start=false;
			float hawk_blade_dem1=1;float hawk_blade_dem1_old=1;
			float hawk_blade_dem2=1;float hawk_blade_dem2_old=1;
			HeliSIB_black_hawk_base helihawk_base;
			if(Class.CastTo(helihawk_base, heli))
			{
				for ( int mz = 0; mz < helihawk_base.m_hawk_blade.Count(); mz++ )
				{
					EntityAI hawk_blade =  heli.GetInventory().FindAttachmentByName(helihawk_base.m_hawk_blade.Get(mz));
					if(!hawk_blade ||  hawk_blade && hawk_blade.IsRuined() )
					{
						atach_start=true;
						break;
					}else
					{
						if(helihawk_base.m_hawk_blade1.Find(hawk_blade.GetType()) > -1)
						{
							hawk_blade_dem1 = hawk_blade.GetHealth01("", "Health");
							if(hawk_blade_dem1 < hawk_blade_dem1_old)
							hawk_blade_dem1_old =hawk_blade_dem1;
						}
						if(helihawk_base.m_hawk_blade2.Find(hawk_blade.GetType()) > -1)
						{
							hawk_blade_dem2 = hawk_blade.GetHealth01("", "Health");
							if(hawk_blade_dem2 < hawk_blade_dem2_old)
							hawk_blade_dem2_old =hawk_blade_dem2;
						}
					}
				}
				heli.SetHealth01("Rotor1", "Health", hawk_blade_dem1_old);
				heli.SetHealth01("Engine", "Health", hawk_blade_dem1_old);
				heli.SetHealth01("Rotor2", "Health", hawk_blade_dem2_old);
				
				if(atach_start)
				{
					heli.m_playSoundWarning=true;
					heli.PlaySoundWarning();	
					return;
				}
			}
			EntityAI Battery_black_hawk = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("CarBattery"));
			if ( !Battery_black_hawk || Battery_black_hawk && Battery_black_hawk.IsRuined() )
			{
				return;
			}

			gps_carta_black_hawk(heli);
			heli.SetAnimationPhase("monitor", 1);
		}
		super.StartEngineSIB(heli);
	}

};

modded class ActionHeliStopEngineSIB
{
	override void StopEngineSIB(HeliTest_SIB heli)
	{
		
		if(heli.IsKindOf("HeliSIB_black_hawk_base"))
		{
			heli.SetAnimationPhase("monitor", 0);
		}
		super.StopEngineSIB(heli);
	}
};



