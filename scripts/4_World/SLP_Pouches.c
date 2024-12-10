class SLP_Pouches_ColorBase extends Container_Base
{
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo(parent) ) {return false;}	
		//better use something like super.GetName()
		if ( parent && (parent.IsKindOf("SLP_Pouches_ColorBase")) )
		{
			return false;
		}
		
		return true;
	};

	override bool CanReceiveItemIntoCargo( EntityAI item )
	{
		if (!super.CanReceiveItemIntoCargo(item))
			return false;
		
		if (GetInventory().IsAttachment())
		{
			return !GetHierarchyParent().GetInventory().IsInCargo() && (!item.GetInventory().GetCargo() || (item.GetInventory().GetCargo().GetItemCount() == 0 || item.IsContainer()));
		}
		
		return !item.GetInventory().GetCargo() || (item.GetInventory().GetCargo().GetItemCount() == 0 || item.IsContainer());
	}

	override bool CanLoadItemIntoCargo( EntityAI item )
	{
		if (!super.CanLoadItemIntoCargo(item))
			return false;
		
		return !item.GetInventory().GetCargo() || (item.GetInventory().GetCargo().GetItemCount() == 0 || item.IsContainer());
	}
};


class SLP_Pouches_Medical : SLP_Pouches_ColorBase
{
};
class SLP_Pouches_Nomad : SLP_Pouches_ColorBase
{
};
class SLP_Pouches_Military : SLP_Pouches_ColorBase
{
};
class SLP_Pouches_Fishing : SLP_Pouches_ColorBase
{
};