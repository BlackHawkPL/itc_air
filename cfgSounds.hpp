class CfgSounds
{
	sounds[] = {ITC_AP_enabled, ITC_AP_warning};
	class ITC_AP_enabled
	{
		name = "Autopilot enabled";
		sound[] = {"itc_air\data\Sounds\ap_enabled.ogg", db+10, 1.0};
		titles[] = {0,""};
	};
	class ITC_AP_warning
	{
		name = "Autopilot warning";
		sound[] = {"itc_air\data\Sounds\ap_warning.ogg", db+10, 1.0};
		titles[] = {0,""};
	};
};