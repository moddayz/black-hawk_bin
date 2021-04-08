class ActionEnableLightPanelHeliCB_black_hawk : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(0);
	}
};

class ActionHeliEnableLightPanelSIB_black_hawk: ActionContinuousBase
{
	void ActionHeliEnableLightPanelSIB_black_hawk()
	{
		m_CallbackClass = ActionEnableLightPanelHeliCB_black_hawk;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_STARTENGINE;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ALL;
		m_SpecialtyWeight = 0;
		m_LockTargetOnUse = false;
	}

	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTNone;
		m_ConditionItem = new CCINone;

	}
	
	override string GetText()
	{
		return "Enable Light Panel";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		HeliSIB_black_hawk_base trans = null;
		HumanCommandVehicle vehCommand = player.GetCommand_Vehicle();
		if ( !vehCommand  )return false;	
		
		if ( !target )return false;
		

		if ( !Class.CastTo(trans, target.GetObject()) )return false;
		
		Print("black_hawk ActionCondition");
		Human crew = trans.CrewMember(0);
		if ( !crew )
		{
			crew = trans.CrewMember(1);
			if ( !crew )return false;
		}
		
		int crewIdx = trans.CrewMemberIndex( player );
		if(crewIdx>1)return false;
		
		if(!trans.m_enable)return false;
		if (trans.m_typeVehicle == 0)return false;
		float anim_engine = trans.GetAnimationPhase("beam1");
		if(anim_engine >= 0.5)return false;

		array<string> selections = new array<string>;
		target.GetObject().GetActionComponentNameList(target.GetComponentIndex(), selections);
		Print("black_hawk ActionCondition 2");
		
		for (int s = 0; s < selections.Count(); s++)
		{
			Print("black_hawk ActionCondition selections[s]"+selections[s]);
			if ( selections[s] == "button_beam1")
			{
				Print("black_hawk ActionCondition MemoryPointExists");
				if( trans.MemoryPointExists("button_beam1") )
				{
					vector conPointMS = trans.GetMemoryPointPos("button_beam1");
					Print("black_hawk ActionCondition conPointMS"+conPointMS);
					vector conPointWS = trans.ModelToWorld(conPointMS);
					Print("black_hawk ActionCondition conPointWS"+conPointWS);
					vector pFromPos = player.GetPosition();
					Print("black_hawk ActionCondition pFromPos"+pFromPos);
					//! skip the height for now
					conPointWS[1] = 0;
					pFromPos[1] = 0;
					
					if (vector.Distance(pFromPos, conPointWS) <= 2.0)
					{
						Print("black_hawk ActionCondition 3");
						return true;
					}
				}
			}
		}
		
		return false;
	}

	override bool CanBeUsedInVehicle()
	{
		return true;
	}
};