
modded class IngameHud
{
	override void RefreshVehicleHud( float timeslice )
	{
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		if ( player )
		{
			HumanCommandVehicle hcv = player.GetCommand_Vehicle();	
			if ( hcv )
			{			
				HeliSIB_black_hawk_base helicoterhawk = HeliSIB_black_hawk_base.Cast( hcv.GetTransport() );
				if( helicoterhawk )
				{
					helicoterhawk.SetAnimationPhase("gpsy", (helicoterhawk.GetPosition()[0] /helicoterhawk.coord_map));
					helicoterhawk.SetAnimationPhase("gpsx", (helicoterhawk.GetPosition()[2] /helicoterhawk.coord_map));
				}
			}
		}
		super.RefreshVehicleHud(timeslice);	
	}	
};