/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/

// ███████████████████████████████████████████████████████████████████████
// █████████████████ DYNAMIC MARKET BASIC CONFIGURATION ██████████████████
// ███████████████████████████████████████████████████████████████████████

DYNMARKET_Serveruptime         = 06;   // Serveruptime after restart in hours
DYNMARKET_UseExternalDatabase  = false; // Should the script use the External Database?
DYNMARKET_PriceUpdateInterval  = 00.20;   // After how many minutes should the price be updated?
DYNMARKET_CreateBackups        = true; // Should the server save write the prices regulary into the Database? If false, it will save the prices before Server-restart?
DYNMARKET_CreateBackupInterval = 03;   // After how many updates (PriceUpdateIntervals) should the prices be saved into the Database?
DYNMARKET_UserNotification     = false; // Should the user be informed with a hint whenever the prices got updated?

// █████████████████ USER NOTIFICATION TEXTS  █████████████████

DYNMARKET_UserNotification_Text = 
[
	"Your prices have been updated!",
	"The new prices are being calculated by the server..."
];

// █████████████████ ITEM GROUP CONFIGURATION █████████████████

DYNMARKET_Items_Groups =
[
	["Legal",
		[
			["apple",-1,10,50],
			["banana",-1,10,50],
			["peach",-1,30,100],
			["coconut",-1,60,130],
			["sugar",-1,850,1250],
			["bottledBeer",-1,800,500],
			["bottledShine",-1,1000,650],
			["bottledWhiskey",-1,1200,800]
		],
		0.5
	],
	["Illegal", 
		[
			["heroin_processed",-1,2500,7000],
			["marijuana",-1,1500,5500],
			["cocaine_processed",-1,3500,9500],
			["turtle_raw",-1,3000,15000],
			["counterfitCash",-1,82500,12500],
			["tobacco_processed",-1,3000,4000],
			["uranium_refined",-1,3500,6000]
			
			
		],
		0.5
	],
	["AntiqueIllegal", 
		[
		    ["pearl",-1,5500,10000],
			["doubloon",-1,500,3200],
			["ruby",-1,3500,5500],
			["silverpiece",-1,250,2000],
			["lockpick",-1,1000,1500]
		],
		0.5
	],
	["minerals", 
		[
			["copper_refined",-1,1800,2200],
			["iron_refined",-1,2500,3300],
			["salt_refined",-1,1900,3800],
			["glass",-1,2550,4000],
			["cement",-1,1800,3000],
			["ruby_refined",-1,3500,4500],
			["oil_processed",-1,2800,4500],
			["diamond_cut",-1,2700,4900],
			["goldbar",-1,75000,150000]
		],
		0.5
	],
	["fish", 
		[
			["tuna_raw",-1,4900,7000],
			["ornate_raw",-1,200,590],
			["mackerel_raw",-1,800,1700],
			["mullet_raw",-1,1000,2500],
			["salema_raw",-1,200,650],
			["catshark_raw",-1,1500,6000]
		],
		0.5
	]
];

// █████████████████    ALL SELLABLE ITEMS    █████████████████

DYNMARKET_Items_ToTrack        = 
[

	["apple",25],
	["banana",25],
	["sugar",1000],
	["peach",70],
	["coconut",95],
	["rabbit_raw",250],
	["ornate_raw",290],
	["mackerel_raw",990],
	["salema_raw",290],
	["tuna_raw",6000],
	["mullet_raw",1290],
	["catshark_raw",1700],
	["turtle_soup",200],
	["hen_raw",200],
	["rooster_raw",210],
	["sheep_raw",210],
	["goat_raw",155],
	["bottledBeer",800],
	["bottledShine",1000],
	["bottledWhiskey",1200],

	
	["ruby",7500],
    ["pearl",8500],
	["doubloon",3500],
	["silverpiece",2950],

	["goldbar",95000],
	["ruby_refined",3500],
	["oil_processed",3400],
	["copper_refined",2000],
	["iron_refined",2650],
	["salt_refined",3200],
	["glass",3500],
	["diamond_cut",3530],
	["cement",2350],
	
	["lockpick",1500],
	
	
	
	["turtle_raw",9500],
	["heroin_processed",6500],
	["marijuana",4590],
	["tobacco_processed",3500],
	["cocaine_processed",8500],
	["counterfitCash",100000],
	["uranium_refined",3500]
	
];

//███████████████████████████████████████████████████████████████████████
//██████████████████ DO NOT MODIFY THE FOLLOWING CODE! ██████████████████
//███████████████████████████████████████████████████████████████████████

DYNMARKET_Items_CurrentPriceArr = [];
DYNMARKET_sellarraycopy = DYNMARKET_Items_ToTrack;
DYNMARKET_Serveruptime = (DYNMARKET_Serveruptime * 3600) - 300;
{
	_currentArray = _x;
	DYNMARKET_Items_CurrentPriceArr pushBack [_currentArray select 0,_currentArray select 1,0];
} forEach DYNMARKET_Items_ToTrack;
publicVariable "DYNMARKET_UserNotification";
publicVariable "DYNMARKET_UserNotification_Text";
if (DYNMARKET_UseExternalDatabase) then {[1] call TON_fnc_HandleDB;};
DYNMARKET_UpdateCount = 0;
if (DYNMARKET_UseExternalDatabase) then {
	[] spawn {
		sleep DYNMARKET_Serveruptime;
		diag_log "### DYNMARKET >> CURRENT PRICES ARE BEING WRITTEN TO THE DATABASE    ###";
		diag_log "### DYNMARKET >> AS PLANNED, AWAITING RESULT...                      ###";
		[0] call TON_fnc_HandleDB;
	};
};
sleep 5;
[] call TON_fnc_sleeper;
