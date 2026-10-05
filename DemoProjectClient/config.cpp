class CfgPatches
{
	class DemoProjectClient
	{
		units[]={};
        weapons[]={};
        requiredVersion=1.0;
        requiredAddons[]={
            "DZ_Data",
            "DZ_Scripts",
            "TBLibClient",
            "JM_CF_Scripts"
        };
	};
};

class CfgAddons
{
	class PreloadBanks {};
	class PreloadAddons
	{
		class dayz
		{
			list[] ={
			    "TBLibClient",
			};
		};
	};
};


class CfgMods
{
	class DemoProjectClient
	{
	    dir = "DemoProjectClient";
        picture = "";
        action = "";
        hideName = 0;
		name = "DemoProjectClient";
		credits = "TheBuster";
		creditsJson = "DemoProjectClient/Scripts/Data/Credits.json";
		versionPath = "DemoProjectClient/scripts/Data/Version.hpp";
		inputs = "DemoProjectClient\inputs.xml";
		author = "TheBuster";
		authorID = "76561198196317725";
		version = "1.0.0";
		extra = 0;
		type = "mod";

		dependencies[] = {"Game", "World", "Mission"};

		class defs
		{
            class gameScriptModule
            {
                value="";
                files[]=
                {
                    "DemoProjectClient/scripts/3_Game"
                };
            };
            class worldScriptModule
            {
                value="";
                files[]=
                {
                    "DemoProjectClient/scripts/4_World"
                };
            };
			class missionScriptModule
			{
				value = "";
				files[] = {
                    "DemoProjectClient/scripts/5_Mission"
				};
			};
		};
	};
};
