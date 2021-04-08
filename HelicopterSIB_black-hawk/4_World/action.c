
modded class ActionHeliEnableLightPanelSIB_black_hawk
{
	bool m_IsFinished;
	override void OnStartServer( ActionData action_data ){m_IsFinished = false;}
	override void OnFinishProgressServer( ActionData action_data ){m_IsFinished = true;}
	override void OnEndServer( ActionData action_data )
	{		
		if ( m_IsFinished )
		{
			HumanCommandVehicle vehCommand = action_data.m_Player.GetCommand_Vehicle();
			if( vehCommand )
			{
				Transport trans = vehCommand.GetTransport();
				if ( trans )
				{
					HeliSIB_black_hawk_base heli;
					if ( Class.CastTo(heli, trans) )
					{
						EntityAI Battery_black_hawk = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("CarBattery"));
						if ( !Battery_black_hawk || Battery_black_hawk && Battery_black_hawk.IsRuined() )
						{
							return;
						}
						EntityAI Reflector_1_1_black_hawk = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("Reflector_1_1"));
						if ( !Reflector_1_1_black_hawk || Reflector_1_1_black_hawk && Reflector_1_1_black_hawk.IsRuined() )
						{
							return;
						}
						heli.SetAnimationPhase("beam1", 1.0);
					}
				}
			}	
		}
	}
	
};

modded class ActionHeliDisableLightPanelSIB_black_hawk
{
	bool m_IsFinished;
	override void OnStartServer( ActionData action_data ){m_IsFinished = false;}
	override void OnFinishProgressServer( ActionData action_data ){m_IsFinished = true;}
	override void OnEndServer( ActionData action_data )
	{
		if ( m_IsFinished )
		{
			HumanCommandVehicle vehCommand = action_data.m_Player.GetCommand_Vehicle();
			if( vehCommand )
			{
				Transport trans = vehCommand.GetTransport();
				if ( trans )
				{
					HeliSIB_black_hawk_base heli;
					if ( Class.CastTo(heli, trans) )
					{
						heli.SetAnimationPhase("beam1", 0.0);
					}
				}
			}
		}
	}
};

modded class ActionHeliEnableLightSIB_black_hawk
{
	bool m_IsFinished;
	override void OnStartServer( ActionData action_data ){m_IsFinished = false;}
	override void OnFinishProgressServer( ActionData action_data ){m_IsFinished = true;}
	override void OnEndServer( ActionData action_data )
	{		
		if ( m_IsFinished )
		{
			HumanCommandVehicle vehCommand = action_data.m_Player.GetCommand_Vehicle();
			if( vehCommand )
			{
				Transport trans = vehCommand.GetTransport();
				if ( trans )
				{
					HeliSIB_black_hawk_base heli;
					if ( Class.CastTo(heli, trans) )
					{
						EntityAI Battery_black_hawk = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("CarBattery"));
						if ( !Battery_black_hawk || Battery_black_hawk && Battery_black_hawk.IsRuined() )
						{
							return;
						}
						EntityAI Reflector_2_1_black_hawk = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("Reflector_2_1"));
						if ( !Reflector_2_1_black_hawk || Reflector_2_1_black_hawk && Reflector_2_1_black_hawk.IsRuined() )
						{
							return;
						}
						heli.SetAnimationPhase("beam2", 1.0);
					}
				}
			}	
		}
	}
	
};

modded class ActionHeliDisableLightSIB_black_hawk
{
	bool m_IsFinished;
	override void OnStartServer( ActionData action_data ){m_IsFinished = false;}
	override void OnFinishProgressServer( ActionData action_data ){m_IsFinished = true;}
	override void OnEndServer( ActionData action_data )
	{
		if ( m_IsFinished )
		{
			HumanCommandVehicle vehCommand = action_data.m_Player.GetCommand_Vehicle();
			if( vehCommand )
			{
				Transport trans = vehCommand.GetTransport();
				if ( trans )
				{
					HeliSIB_black_hawk_base heli;
					if ( Class.CastTo(heli, trans) )
					{
						heli.SetAnimationPhase("beam2", 0.0);
					}
				}
			}
		}
	}
};

modded class PlayerBase
{
	override void SetActions(out TInputActionMap InputActionMap)
	{
		//black_hawk 
		AddAction(ActionHeliEnableLightSIB_black_hawk, InputActionMap);
		AddAction(ActionHeliEnableLightPanelSIB_black_hawk, InputActionMap);
		AddAction(ActionHeliDisableLightSIB_black_hawk, InputActionMap);
		AddAction(ActionHeliDisableLightPanelSIB_black_hawk, InputActionMap);
		super.SetActions(InputActionMap);
	}
}
modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		actions.Insert(ActionHeliEnableLightSIB_black_hawk);
		actions.Insert(ActionHeliEnableLightPanelSIB_black_hawk);
		actions.Insert(ActionHeliDisableLightSIB_black_hawk);
		actions.Insert(ActionHeliDisableLightPanelSIB_black_hawk);
		super.RegisterActions(actions);
	}
}