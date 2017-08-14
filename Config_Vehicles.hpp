class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } },
            { "C_Offroad_02_unarmed_F", { "", "", -1 } }
        };
    };

     class bountyhunter { 
     side = "civ"; 
     vehicles[] = { 
                
                 { "C_SUV_01_F",             { "", "", -1 } }, // SUV 
                 { "C_Hatchback_01_F",       { "", "", -1 } }, // Regular Hatchback 
                 { "C_Offroad_01_F",         { "", "", -1 } }, // Offroad 
                 { "C_Offroad_02_unarmed_F", { "", "", -1 } }, // MB 4WD 
                 { "C_Hatchback_01_sport_F", { "", "", -1 } }, // Hatchback Sport 
				 { "O_LSV_02_unarmed_ghex_F", { "", "", -1 } },
				 { "B_T_LSV_01_unarmed_black_F", { "", "", -1 } }
				 
				 
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } },
			{ "O_Truck_03_ammo_F", { "", "", -1 } },
			{ "B_Truck_01_ammo_F", { "", "", -1 } },
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
            { "B_Truck_01_fuel_F", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
			{ "I_Heli_light_03_unarmed_F", { "", "", -1 } },
			{ "I_Heli_Transport_02_F", { "", "", -1 } },
			{ "B_Heli_Transport_03_unarmed_green_F", { "", "", -1 } },
            { "I_Plane_Fighter_03_CAS_F", { "", "", -1 } },
            { "B_Plane_CAS_01_F", { "", "", -1 } },	
            { "I_Plane_Fighter_03_AA_F", { "", "", -1 } },
            { "O_Plane_CAS_02_F", { "", "", -1 } },			
            { "C_Plane_Civil_01_F", { "", "", -1 } },
            { "I_Plane_Fighter_04_F", { "", "", -1 } },
            { "B_Plane_Fighter_01_Stealth_F", { "", "", -1 } },
            { "O_Plane_Fighter_02_Stealth_F", { "", "", -1 } },			
            { "C_Plane_Civil_01_racing_F", { "", "", -1 } }			
			
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } },
            { "C_Boat_Transport_02_F", { "", "", -1 } },
            { "C_Scooter_Transport_01_F", { "", "", -1 } }
        };
    };

    // class reb_car {
        // side = "rebel";
        // vehicles[] = {
            // { "B_Quadbike_01_F", { "", "", -1 } },
			// { "C_Hatchback_01_sport_F", { "", "", -1 } },
			// { "O_MRAP_02_F", { "", "", -1 } },			
            // { "B_Truck_01_box_F", { "", "", -1 } },
			// { "O_Truck_03_device_F", { "", "", -1 } },
			// { "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            // { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            // { "O_LSV_02_unarmed_ghex_F", { "", "", -1 } }
        // };
    // };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
			{ "C_Van_01_box_F", { "", "", -1 } },
			{ "C_Hatchback_01_sport_F", { "", "", -1 } },
			{ "C_SUV_01_F", { "", "", -1 } },
			{ "B_Truck_01_mover_F", { "", "", -1 } },
			{ "C_Offroad_01_repair_F", { "", "", -1 } }
			// { "B_Truck_01_transport_F", { "", "", -1 } }
			
			
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_medevac_F", { "", "", -1 } }
			
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },  
	    	{ "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", "call life_coplevel >= 1" },
            { "B_MRAP_01_F", "call life_coplevel >= 2"  },
            { "I_MRAP_03_F", "call life_coplevel >= 2"  },			
            { "C_Offroad_02_unarmed_F", "call life_coplevel >= 3"  },
            { "B_T_LSV_01_unarmed_black_F", "call life_coplevel >= 2"  },		
			{ "B_MRAP_01_hmg_F", "call life_coplevel >= 6"  },
			{ "O_Truck_03_covered_F", { "", "", -1 } },
            { "O_G_Offroad_01_armed_F", "call life_coplevel >= 4"  }
        };
    }; 

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
			{ "B_T_VTOL_01_vehicle_blue_F", { "", "", -1 } },
			{ "I_Heli_light_03_unarmed_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_black_F", "call life_coplevel >= 4"  },
            { "B_Heli_Transport_01_F", "call life_coplevel >= 3"  }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3"  },
            { "B_SDV_01_F", { "", "", -1 } },
            { "B_G_Boat_Transport_02_F", { "", "", -1 } }
        };
    };
	
	class outlaw_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
			{ "I_C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "O_LSV_02_unarmed_black_F", { "", "", -1 } },
			{ "O_LSV_02_unarmed_arid_F", { "", "", -1 } },
			{ "O_T_LSV_02_unarmed_F", { "", "", -1 } },
			{ "O_T_LSV_02_unarmed_viper_F", { "", "", -1 } },
			{ "O_G_Offroad_01_armed_F", { "", "", -1 } }
			/*
			{ "B_T_LSV_01_unarmed_black_F", { "", "", -1 } },
			{ "B_T_LSV_01_unarmed_olive_F", { "", "", -1 } },
			{ "B_T_LSV_01_unarmed_sand_F", { "", "", -1 } } 
			*/
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
		conditions = "";
        price = 25000;
        textures[] = {};
    };
	
	class O_G_Offroad_01_armed_F {
        vItemSpace = 50;
        conditions = "";
        price = 450000;
        textures[] = {};
    };
	
    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 200;
        conditions = "license_civ_boat";
        price = 5000;
        textures[] = { };
    };

    	
	class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
        textures[] = {
			
			{ "Polis", "cop", {
                "textures\cop\vehicles\Polis_Ghosthawk_1.jpg",
				"textures\cop\vehicles\Polis_Ghosthawk_1.2.jpg"
            } }
			
		};
    };

    class C_boat_transport_02_f { //Ribbåt
        vItemSpace = 500;
        conditions = "license_civ_boat";
        price = 70000;
        textures[] = {};
    };

    class C_Scooter_Transport_01_F { //Vattenskoter
        vItemSpace = 30;
        conditions = "";
        price = 7000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {
             { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
			{ "Polis", "cop", {
                "textures\cop\vehicles\Polis_Hunter_0.jpg",
				"textures\cop\vehicles\Polis_Hunter_1.jpg",
				"textures\cop\vehicles\Polis_Hunter_2.jpg"
            } },		
			{ "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
            
			{ "Polis", "cop", {
                 "textures\cop\vehicles\Polis_Hunter_0.jpg",
				"textures\cop\vehicles\Polis_Hunter_1.jpg",
				"textures\cop\vehicles\Polis_Hunter_2.jpg"
  
            } },
			{ "M90", "cop", {
                 "textures\cop\vehicles\M90_Hunter_0.jpg",
				 "textures\cop\vehicles\M90_Hunter_1.jpg",
				 "textures\cop\vehicles\M90_Hunter_2.jpg"
			} }
			
        };
    };
	
	class B_Heli_Transport_03_unarmed_green_F {
        vItemSpace = 50;
        conditions = "license_civ_pilot";
        price = 5000000;
        textures[] = { 
			{ "Black", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
		};
    };
	
    
    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
         conditions = "license_civ_cg";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 450;
         conditions = "license_civ_boat";
        price = 3000;
        textures[] = { };
    };
 
    class O_Truck_03_transport_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking";
        price = 225000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 420;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 850000;
        textures[] = {
            	{ "Black", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
				"#(argb,8,8,3)color(0.05,0.05,0.05,1)",
				"#(argb,8,8,3)color(0.05,0.05,0.05,1)",
				"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }

		};
    };

    class B_T_LSV_01_unarmed_F { 
        vItemSpace = 60; 
       conditions = "";
        price = 150000; 
        textures[] = { }; 
    }; 

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

	 class I_C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        conditions = "";
        price = 40000;
        textures[] = { };
    };
	

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel";
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 450;
        conditions = "license_civ_boat";
        price = 22000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 450;
        conditions = "license_civ_cg";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 700;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = { 
			{ "Devil", "civ", {
                "textures\civ\vehicles\civ_hemtt_devil_0.jpg",
				"textures\civ\vehicles\civ_hemtt_devil_1.jpg"
        } },
		{ "kitty", "civ", {
                "textures\civ\vehicles\civ_hemtt_kitty_0.jpg",
				"textures\civ\vehicles\civ_hemtt_kitty_1.jpg"
		 } }
		 
		};
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 555000;
        textures[] = {
			{ "Devil", "civ", {
                "textures\civ\vehicles\civ_hemtt_devil_0.jpg",
				"textures\civ\vehicles\civ_hemtt_devil_1.jpg"
        } },
		
		{ "kitty", "civ", {
                "textures\civ\vehicles\civ_hemtt_kitty_0.jpg",
				"textures\civ\vehicles\civ_hemtt_kitty_1.jpg"
          } }
		
		};
    };
	

    class I_MRAP_03_F {
        vItemSpace = 60;
        conditions = "";
        price = 10000;
        textures[] = { 
		       { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
               } }
			   		 
        };
   };
    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 32500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Police", "cop", {
              "textures\cop\vehicles\police_offroad.jpg"			
            } },
			{ "Ambulans", "med", {
				"textures\medic\vehicles\med_offroad.jpg"
            } },

			//---------------------
			{ "camo", "civ", {
				"textures\civ\vehicles\civ_offroad_camo.jpg"
            } },
			{ "dodge", "civ", {
				"textures\civ\vehicles\civ_offroad_dodge.jpg"
            } },
			{ "rockstar", "civ", {
				"textures\civ\vehicles\civ_offroad_rockstargelb.jpg"
            } },
			{ "rockstarlila", "civ", {
				"textures\civ\vehicles\civ_offroad_rockstarlila.jpg"
            } },
			{ "taxi", "civ", {
				"textures\civ\vehicles\taxi_offroad_0.jpg"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

	class C_Hatchback_01_sport_F {
        vItemSpace = 45;
       //conditions = "license_civ_driver";
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Monster", "civ", {
                "textures\civ\vehicles\TRG_hobos_KB_hatch.jpg"
            } },
            { "Green", "cop", {
                /*"#(ai,64,64,1)Fresnel(1.3,7)"*/
				"textures\cop\vehicles\Polis_Hatchback_0.jpg"
            } },
			{ "Ambulans", "med", {
                /*"#(ai,64,64,1)Fresnel(1.3,7)"*/
				"textures\medic\vehicles\Medic_Sport.jpg"
            } },
			
			{ "KittyLila", "civ", {
				"textures\civ\vehicles\kitty1.jpg"
			} },
			{ "Graffiti", "civ", {
				"textures\civ\vehicles\done_grafii_right_one.jpg"
			} },
			{ "weed", "civ", {
				"textures\civ\vehicles\drugHatchback.jpg"
			} },
			{ "flame", "civ", {
				"textures\civ\vehicles\civ_flame.jpg"
			} },			
			{ "flame1", "civ", {
				"textures\civ\vehicles\CIV_Hatchback_body_flames.jpg"
			} },
			{ "taxi", "civ", {
                "textures\civ\vehicles\taxi_hatchback_0.jpg"
            } },
			{ "reddragon", "civ", {
                "textures\civ\vehicles\reddragon_hatchbacksport_0.jpg"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "";
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 280;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 140000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
			{ "Redbull", "civ", {
                "textures\civ\vehicles\civ_zamak_redbull_0.jpg"
            } },
			{ "Redbull2", "civ", {
                "textures\civ\vehicles\civ_zamak_redbull_1.jpg"
            } },
			{ "barbie1", "civ", {
                "textures\civ\vehicles\truck_02_kab_co.jpg",
				"textures\civ\vehicles\truck_02_kuz_co.jpg"
            } }
			
			
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 210;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 105000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "textures\nato\nato_tempest_0.jpg",
                "textures\nato\nato_tempest_1.jpg",
                "textures\nato\nato_tempest_2.jpg",
                "textures\nato\nato_tempest_3.jpg"				
            } }
        };
    };
	
	class B_Truck_01_mover_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 0;
        textures[] = {
            { "Towing", "med", {
                "textures\towing\vehicles\towing-0.paa",
                "textures\towing\vehicles\towing-1.paa",
                "textures\towing\vehicles\towing-2.paa"				
            } }
        };
    };
	
	class O_Truck_03_ammo_F {
        vItemSpace = 420;
        conditions = "license_civ_trucking";
        price = 275000;
        textures[] = {};
		
	 };
	
	class B_Truck_01_ammo_F {
        vItemSpace = 580;
        conditions = "license_civ_trucking";
        price = 412500;
        textures[] = {};
		
    };
	

    class O_Truck_03_covered_F {
        vItemSpace = 400;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 240000;
        textures[] = {
			{ "Black", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
				"#(argb,8,8,3)color(0.05,0.05,0.05,1)",
				"#(argb,8,8,3)color(0.05,0.05,0.05,1)",
				"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },		


		{ "brown", "cop", {
                "textures\cop\vehicles\Polis_Tempest_0.jpg",
				"textures\cop\vehicles\Polis_Tempest_1.jpg",
				"textures\cop\vehicles\Polis_Tempest_2.jpg",
				"textures\cop\vehicles\Polis_Tempest_3.jpg"
            } }

		};
		
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
       conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
			{ "taxi", "civ", {
               "textures\civ\vehicles\taxi_hatchback_0.jpg"
            } }
        };
    };

	class C_Offroad_01_repair_F {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {
            { "Towing", "med", {
                "textures\towing\vehicles\bergare.jpg"
            } }
			
        };
    };
	
	
	
    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 50000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Ferrari", "civ", {
                "textures\civ\vehicles\TRG_hobos_ferrari_SUV.jpg"
            } },
			{ "NATO", "cop", {
                "textures\cop\vehicles\polis_suv.jpg"
            } }, //Suv Svensk Polisbil
			
			{ "Ambulans", "med", {
                "textures\medic\vehicles\med_suv.jpg"
            } }, //Suv Svensk Polisbil
			//------------------------
			{ "Batman", "civ", {
                "textures\civ\vehicles\batman_suv.jpg"
            } },
			{ "Camo", "civ", {
                "textures\civ\vehicles\camo_suv.jpg"
            } },
			{ "Carbon", "civ", {
                "textures\civ\vehicles\carbon_suv.jpg"
          
            } },
			{ "kitty", "civ", {
                "textures\civ\vehicles\kitty.jpg"
            } },
			{ "monster", "civ", {
                "textures\civ\vehicles\civ_suv_monster.jpg"
            } },
			{ "skull", "civ", {
                "textures\civ\vehicles\civ_suv_skull.jpg"
            } },
			{ "sealdrop", "civ", {
                "textures\civ\vehicles\suv_sealdrop.jpg"
            } },
			{ "drug", "civ", {
                "textures\civ\vehicles\drugSUV.jpg"
            } },
			{ "Trump", "civ", {
                "textures\civ\vehicles\TrumpSUV.jpg"
            } },
			{ "angel", "civ", {
                "textures\civ\vehicles\angelSUV.jpg"
            } },
			{ "lavaDemonl", "civ", {
                "textures\civ\vehicles\lavaDemon.jpg"
            } },
			{ "taxi", "civ", {
                "textures\civ\vehicles\taxi_suv_0.jpg"				
            } },
			{ "reddragon", "civ", {
                "textures\civ\vehicles\reddragon_suv_0.jpg"
            } }			
        };
    };

    class C_Offroad_02_unarmed_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 35000;
        textures[] = {
            { "Zombie", "civ", {
                "textures\civ\vehicles\zombie.jpg"
            } },
            { "Graffiti", "civ", {
                "textures\civ\vehicles\graffiti.jpg"
            } },         
            { "Space", "civ", {
                "textures\civ\vehicles\space.jpg"
            } },
            { "Tan Med", "civ", {
                "textures\civ\vehicles\tanmed.jpg"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
			{ "Medic", "med", {
                "textures\medic\vehicles\box1.jpg",
				"textures\medic\vehicles\box2.jpg"
            } },
			{ "reddragon", "civ", {
                "textures\civ\vehicles\reddragon_truckboxer_0.jpg",
				"textures\civ\vehicles\reddragon_truckboxer_1.jpg"
            } }
			
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
           
			{ "M90", "cop", {
                 "textures\cop\vehicles\M90_Hunter_0.jpg",
				 "textures\cop\vehicles\M90_Hunter_1.jpg",
				 "textures\cop\vehicles\M90_Hunter_2.jpg"
			} },
			{ "Polis", "cop", {
                "textures\cop\vehicles\Polis_Hunter_0.jpg",
				"textures\cop\vehicles\Polis_Hunter_1.jpg"
			} }
        };
    };
		
	class	B_T_VTOL_01_vehicle_blue_F {
		vItemSpace = 450;
        conditions = "license_cop_cAir";
        price = 20000000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
				"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };		
	};
	
	class	O_Heli_Transport_04_black_F {
		vItemSpace = 50;
        conditions = "license_cop_cAir";
        price = 20000;
        textures[] = {
			{ "nato", "cop", {
                "textures\nato\nato_taru_0.jpg",
				"textures\nato\nato_taru_1.jpg"
				
	        } } 
		};		
	};	
	
     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 675000;
        textures[] = {};
    };
	
	
	
	
	class I_Heli_Transport_02_F {
        vItemSpace = 400;
        conditions = "license_civ_pilot || {license_med_mAir}";
        price = 7000000;
        textures[] = {
            { "Yellow", "med", {
                "#(argb,8,8,3)color(1,0.8,0,0.4)",
				"#(argb,8,8,3)color(1,0.8,0,0.4)",
				"#(argb,8,8,3)color(1,0.8,0,0.4)"
            } },
			{ "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };
	
	class O_Heli_Transport_04_medevac_F {
        vItemSpace = 120;
        conditions = "";
        price = 975000;
        textures[] = {
            { "Medic", "med", {
                "textures\medic\vehicles\medic_taru_0.jpg",
				"textures\medic\vehicles\medic_taru_1.jpg",
				"textures\medic\vehicles\medic_taru_2.jpg",
				"textures\medic\vehicles\medic_taru_3.jpg"
            } }
			
        };
    };
	
	class I_Heli_light_03_unarmed_F {
        vItemSpace = 120;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 1100000;
        textures[] = {
            { "black", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
             } },
			
			/*{ "black", "rebel", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },*/	
			
			{ "police", "cop", {
                "textures\cop\vehicles\Polis_Hellcat.jpg"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 54500;
        textures[] = {
             { "Black", "cop", {
                "textures\cop\vehicles\Polis_Hummingbird.jpg"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },/*
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "textures\medic\vehicles\med_hummingbird.jpg"
				} },*/
            { "Ambulans", "med", {
                "textures\medic\vehicles\med_hummingbird.jpg"
            } },
			{ "Towing", "med", {
                "textures\towing\vehicles\tow-copter.jpg"
            } },
			{ "Redbull", "civ", {
                "textures\civ\vehicles\civ_hummingbird_redbull.jpg"
            } },
			{ "kitty", "civ", {
                "textures\civ\vehicles\kitty_heli.jpg"
            } },
			{ "cookiei", "civ", {
                "textures\civ\vehicles\C_Heli_Light_01_civil_F~cookie.jpg"
            } },
			{ "stickerbomb", "civ", {
                "textures\civ\vehicles\C_Heli_Light_01_civil_F~stickerbomb.jpg"
            } },
			{ "swirl", "civ", {
                "textures\civ\vehicles\C_Heli_Light_01_civil_F~swirl.jpg"
            } },
			{ "Hawai", "civ", {
                "textures\civ\vehicles\C_Heli_Light_01_civil_F~Hawai.jpg"
            } }
			
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 45;
        price = 445000;
    };

    /*class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        licenses[] = { {"pilot" }, {"cAir"}, {"mAir"}, {""} };
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } },
			{ "Police", "cop", {
                "textures\cop\vehicles\pol_orca.jpg"
            } }
        };
    };*/

    class B_SDV_01_F {
        vItemSpace = 200;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking";
        price = 400000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 80000;
        conditions = "license_civ_trucking";
        price = 650000;
        textures[] = {};
    };
	
	//-------------------
	class O_LSV_02_unarmed_black_F {
        vItemSpace = 50;
        vFuelSpace = 80000;
        conditions = "";
        price = 200000;
        textures[] = {};
    };
	class O_LSV_02_unarmed_arid_F {
        vItemSpace = 50;
        vFuelSpace = 80000;
        conditions = "";
        price = 200000;
        textures[] = {};
    };
	class O_T_LSV_02_unarmed_F {
        vItemSpace = 50;
        vFuelSpace = 80000;
        conditions = "";
        price = 200000;
        textures[] = {};
    };
	class O_LSV_02_unarmed_ghex_F {
        vItemSpace = 50;
        vFuelSpace = 80000;
        conditions = "";
        price = 200000;
        textures[] = {

		};
    };
	
	class O_T_LSV_02_unarmed_viper_F {
        vItemSpace = 50;
        vFuelSpace = 80000;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class B_T_LSV_01_unarmed_black_F {
        vItemSpace = 50;
        vFuelSpace = 80000;
        conditions = "";
        price = 10000;
        textures[] = {
			{ "M90", "cop", {
			 "textures\cop\vehicles\M90_Prowler_0.jpg",
			  "textures\cop\vehicles\M90_Prowler_1.jpg",
			   "textures\cop\vehicles\M90_Prowler_2.jpg",
			    "textures\cop\vehicles\M90_Prowler_3.jpg"
				
			} }
			          
		};
    };
	
	class B_T_LSV_01_unarmed_olive_F {
        vItemSpace = 50;
        vFuelSpace = 80000;
        conditions = "";
        price = 2000000;
        textures[] = {};
    };
	
	class B_T_LSV_01_unarmed_sand_F {
        vItemSpace = 50;
        vFuelSpace = 80000;
        conditions = "";
        price = 2000000;
        textures[] = {};
    };
	
    class B_G_Boat_Transport_02_F {
        vItemSpace = 400;
        vFuelSpace = 80000;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class C_Plane_Civil_01_F {
        vItemSpace = 600;
        conditions = "";
        price = 700000;
        textures[] = {};
    };

    class I_Plane_Fighter_03_CAS_F {
        vItemSpace = 60;
        conditions = "";
        price = 4000000;
        textures[] = {};
    };

    class I_Plane_Fighter_03_AA_F {
        vItemSpace = 60;
        conditions = "";
        price = 4000000;
        textures[] = {};
    }; 
	
    class O_Plane_CAS_02_F {
        vItemSpace = 60;
        conditions = "";
        price = 8000000;
        textures[] = {};
    };	
		
    class C_Plane_Civil_01_racing_F {
        vItemSpace = 70;
        conditions = "";
        price = 440000;
        textures[] = {};
    };	
	
    class B_Plane_CAS_01_F {
        vItemSpace = 60;
        conditions = "";
        price = 6000000;
        textures[] = {};
    };	
	
    class I_Plane_Fighter_04_F {
        vItemSpace = 60;
        conditions = "";
        price = 8000000;
        textures[] = {};
    };	

    class B_Plane_Fighter_01_Stealth_F {
        vItemSpace = 60;
        conditions = "";
        price = 10000000;
        textures[] = {};
    };	

    class O_Plane_Fighter_02_Stealth_F {
        vItemSpace = 60;
        conditions = "";
        price = 15000000;
        textures[] = {};
    };		
	
};
