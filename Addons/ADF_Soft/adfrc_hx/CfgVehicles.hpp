class CfgVehicles {
    class Truck_F;
    class Truck_01_Base_F : Truck_F {
        class Wheels {
            class L1;
            class L2;
            class L3;
            class L4;
            class R1;
            class R2;
            class R3;
            class R4;
        };
    };

    class ADFRC_HX77_Base_F : Truck_01_Base_F {
		faction                    = "BLU_F";
        author                     = "ADF Re-Cut";
        crew                       = "B_Soldier_F";
        displayName                = "HX77";

        side                       = 1;

        hiddenSelections[]         = { };
        hiddenSelectionsTextures[] = { };
        typicalCargo[]             = { "B_Soldier_F" };

        class Wheels : Wheels {
            class L1 : L1 {
                maxCompression = 0.0625;
                maxDroop       = 0.0625;
                sprungMass     = 1553.45;
            };

            class L2 : L2 {
                maxCompression = 0.0625;
                maxDroop       = 0.0625;
                sprungMass     = 1553.45;
            };

            class L3 : L3 {
                maxCompression = 0.0625;
                maxDroop       = 0.0625;
                sprungMass     = 1553.45;
            };

            class L4 : L4 {
                maxCompression = 0.0625;
                maxDroop       = 0.0625;
                sprungMass     = 1553.45;
            };

            class R1 : R1 {
                maxCompression = 0.0625;
                maxDroop       = 0.0625;
                sprungMass     = 1553.45;
            };

            class R2 : R2 {
                maxCompression = 0.0625;
                maxDroop       = 0.0625;
                sprungMass     = 1553.45;
            };

            class R3 : R3 {
                maxCompression = 0.0625;
                maxDroop       = 0.0625;
                sprungMass     = 1553.45;
            };

            class R4 : R4 {
                maxCompression = 0.0625;
                maxDroop       = 0.0625;
                sprungMass     = 1553.45;
            };
        };

        class RenderTargets {
            class FrontMirror {
                renderTarget = "rendertarget1";

                class CameraView1 {
                    pointPosition    = "mirror_f_pos";
                    pointDirection   = "mirror_f_dir";

                    renderQuality    = 2;
                    renderVisionMode = 4;
                    fov              = 0.7;
                };
            };

            class RightMirror : FrontMirror {
                renderTarget = "rendertarget0";

                class CameraView1 : CameraView1 {
                    pointPosition  = "mirror_f_pos";
                    pointDirection = "mirror_f_dir";
                };
            };

            class RightTopMirror : FrontMirror {
                renderTarget = "rendertarget5";

                class CameraView1 : CameraView1 {
                    pointPosition  = "mirror_r_t_pos";
                    pointDirection = "mirror_r_t_dir";
                };
            };

            class LeftTopMirror : RightTopMirror {
                renderTarget = "rendertarget3";

                class CameraView1 : CameraView1 {
                    pointPosition  = "mirror_l_t_pos";
                    pointDirection = "mirror_l_t_dir";

                    fov            = 1.0;
                };
            };

            class RightBottomMirror : FrontMirror {
                renderTarget = "rendertarget4";

                class CameraView1 : CameraView1 {
                    pointPosition  = "mirror_r_b_pos";
                    pointDirection = "mirror_r_b_dir";
                };
            };

            class LeftBottomMirror : RightBottomMirror {
                renderTarget = "rendertarget2";

                class CameraView1 : CameraView1 {
                    pointPosition  = "mirror_l_b_pos";
                    pointDirection = "mirror_l_b_dir";
                };
            };
        };
    };

    class ADFRC_F_MD_HX77_F : ADFRC_HX77_Base_F {
		editorPreview = "\a3\EditorPreviews_F\Data\CfgVehicles\B_Truck_01_transport_F.jpg";
		icon          = "\a3\soft_f_beta\Truck_01\Data\UI\map_truck_01_CA.paa";
		picture       = "\a3\soft_f_beta\Truck_01\Data\UI\Truck_01_Base_CA.paa";
        model         = "\adf_soft\adfrc_hx\adfrc_hx77.p3d";

        scope         = 2;
        scopeCurator  = 2;
    };
};