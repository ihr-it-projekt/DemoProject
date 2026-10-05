class CfgPatches
{
	class Demo ProjectClient
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
	class Demo ProjectClient
	{
	    dir = "Demo ProjectClient";
        picture = "";
        action = "";
        hideName = 0;
		name = "Demo ProjectClient";
		credits = "TheBuster";
		creditsJson = "Demo ProjectClient/Scripts/Data/Credits.json";
		versionPath = "Demo ProjectClient/scripts/Data/Version.hpp";
		inputs = "Demo ProjectClient\inputs.xml";
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
                    "Demo ProjectClient/scripts/3_Game"
                };
            };
            class worldScriptModule
            {
                value="";
                files[]=
                {
                    "Demo ProjectClient/scripts/4_World"
                };
            };
			class missionScriptModule
			{
				value = "";
				files[] = {
                    "Demo ProjectClient/scripts/5_Mission"
				};
			};
		};
	};
};
