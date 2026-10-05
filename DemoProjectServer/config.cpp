class CfgPatches
{
	class DemoProjectServer
	{
		units[]={};
        weapons[]={};
        requiredVersion=1.0;
        requiredAddons[]={
            "DZ_Data",
            "DZ_Scripts",
            "DemoProjectClient",
            "LBmaster_XUQAqH2MJxAJWDJR"
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
			    "DemoProjectClient",
			};
		};
	};
};

class CfgMods
{
	class DemoProjectServer
	{
	    dir = "DemoProjectServer";
        picture = "";
        action = "";
        hideName = 0;
		name = "DemoProjectServer";
		credits = "TheBuster";
		versionPath = "DemoProjectServer/scripts/Data/Version.hpp";
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
                    "DemoProjectServer/scripts/3_Game"
                };
                obfuscated=1;
            };
            class worldScriptModule
            {
                value="";
                files[]=
                {
                    "DemoProjectServer/scripts/4_World"
                };
                obfuscated=1;
            };
			class missionScriptModule
			{
				value = "";
				files[] = {
				        "DemoProjectServer/scripts/5_Mission"
				};
				obfuscated=1;
			};
		};
	};
};
