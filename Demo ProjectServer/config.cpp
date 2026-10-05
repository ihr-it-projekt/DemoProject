class CfgPatches
{
	class Demo ProjectServer
	{
		units[]={};
        weapons[]={};
        requiredVersion=1.0;
        requiredAddons[]={
            "DZ_Data",
            "DZ_Scripts",
            "Demo ProjectClient",
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
			    "Demo ProjectClient",
			};
		};
	};
};

class CfgMods
{
	class Demo ProjectServer
	{
	    dir = "Demo ProjectServer";
        picture = "";
        action = "";
        hideName = 0;
		name = "Demo ProjectServer";
		credits = "TheBuster";
		versionPath = "Demo ProjectServer/scripts/Data/Version.hpp";
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
                    "Demo ProjectServer/scripts/3_Game"
                };
                obfuscated=1;
            };
            class worldScriptModule
            {
                value="";
                files[]=
                {
                    "Demo ProjectServer/scripts/4_World"
                };
                obfuscated=1;
            };
			class missionScriptModule
			{
				value = "";
				files[] = {
				        "Demo ProjectServer/scripts/5_Mission"
				};
				obfuscated=1;
			};
		};
	};
};
