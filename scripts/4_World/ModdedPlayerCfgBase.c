modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded(pType, pBehavior);// call all other registrations for one handed
        pType.AddItemInHandsProfileIK("SLP_Pouches_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi",  pBehavior, "dz/anims/anm/player/ik/clothing/belts/nylon_KnifeSheath.anm");
    }; 
}; 
