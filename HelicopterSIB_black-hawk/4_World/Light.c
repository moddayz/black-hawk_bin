class HeliLightPanel_black_hawk extends PointLightBase
{

	private static float m_DefaultBrightness = 7;
	private static float m_DefaultRadius = 0.5;
	
	void HeliLightPanel_black_hawk()
	{
		SetVisibleDuringDaylight(false);
		SetRadiusTo(m_DefaultRadius);
		SetBrightnessTo(m_DefaultBrightness);
		FadeIn(1);
		SetFadeOutTime(2);
		SetFlareVisible(false);
		SetAmbientColor(0.9, 0.9, 1.0);
		SetDiffuseColor(0.9, 0.9, 1.0);
	}
};

class HeliLight_black_hawk extends SpotLightBase
{
	private static float m_DefaultBrightness = 100;
	private static float m_DefaultRadius = 100;
	
	void HeliLight_black_hawk()
	{
		SetVisibleDuringDaylight(false);
		SetRadiusTo(m_DefaultRadius);
		SetSpotLightAngle(50);//50
		SetCastShadow(true);
		SetBrightnessTo(m_DefaultBrightness);
		SetFadeOutTime(0.15);
		SetAmbientColor(1.0, 0.9, 0.8);
		SetDiffuseColor(1.0, 0.9, 0.8);
	}
	
}