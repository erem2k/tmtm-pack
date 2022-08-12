class CfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class Item_Base_F;
	
	//////////////////////////////////////////////////////////////////////////
	class tmtm_u_maskhalat_base: Uniform_Base
	{
		scope=0;
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = { "Camo1", "Camo2", "clan", "insignia" };
	};

	class tmtm_u_acu_base: ItemCore
	{
		scope=0;
		allowedSlots[] = {BACKPACK_SLOT};
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"Camo1", "Camo2","camo3"};
	};

	class tmtm_u_acu_plain_base: tmtm_u_acu_base
	{
		scope=0;
		hiddenSelections[] = {"Camo1", "Camo2"};
	};

	//////////////////////////////////////////////////////////////////////////
	// Maskhalat (Berezka White)
	class tmtm_u_maskhalat_berezkaWhite: tmtm_u_maskhalat_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Maskhalat (Berezka White)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_berezkaWhite.paa";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWhite_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWhite_co.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass="tmtm_maskhalat_berezkaWhite";
			containerClass="Supply40";
			mass=20;
		};
	};
	// Maskhalat + Loose pants (Berezka White)
	class tmtm_u_maskhalat_berezkaWhite_loose: tmtm_u_maskhalat_base
	{
		author="erem2k";
		
		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Maskhalat (Berezka White/Loose)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_berezkaWhite.paa";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWhite_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWhite_co.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass="tmtm_maskhalat_berezkaWhite_loose";
			containerClass="Supply40";
			mass=20;
		};
	};
	// Maskhalat + Loose Pants (Berezka White/Hood)
	class tmtm_u_maskhalat_berezkaWhite_hood: tmtm_u_maskhalat_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Maskhalat (Berezka White/Hood)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_berezkaWhite.paa";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWhite_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWhite_co.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass="tmtm_maskhalat_berezkaWhite_hood";
			containerClass="Supply40";
			mass=20;
		};
	};
	// Maskhalat (Berezka Yellow)
	class tmtm_u_maskhalat_berezkaYellow: tmtm_u_maskhalat_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Maskhalat (Berezka Yellow)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_berezkaYellow.paa";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaYellow_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaYellow_co.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass="tmtm_maskhalat_berezkaYellow";
			containerClass="Supply40";
			mass=20;
		};
	};
	// Maskhalat + Loose Pants (Berezka Yellow)
	class tmtm_u_maskhalat_berezkaYellow_loose: tmtm_u_maskhalat_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Maskhalat (Berezka Yellow/Loose)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_berezkaYellow.paa";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaYellow_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaYellow_co.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass="tmtm_maskhalat_berezkaYellow_loose";
			containerClass="Supply40";
			mass=20;
		};
	};
	// Maskhalat + Loose Pants (Berezka Yellow/Hood)
	class tmtm_u_maskhalat_berezkaYellow_hood: tmtm_u_maskhalat_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Maskhalat (Berezka Yellow/Hood)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_berezkaYellow.paa";

		hiddenSelectionsTextures[] =
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaYellow_co.paa",
			"\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaYellow_co.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass="tmtm_maskhalat_berezkaYellow_hood";
			containerClass="Supply40";
			mass=20;
		};
	};

	// AFU ACU (MM14)
	class tmtm_u_acu_mm14: tmtm_u_acu_plain_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="AFU ACU (MM14)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_acu_mm14.paa";

		hiddenSelectionsTextures[] = 
		{
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_mm14_flag_co.paa", 
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_mm14_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tmtm_acu_mm14";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	// AFU ACU (Gloves/MM14)
	class tmtm_u_acu_gloves_mm14: tmtm_u_acu_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="AFU ACU (Gloves/MM14)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_acu_mm14.paa";

		hiddenSelections[] = {"Camo1", "Camo2","camo3"};
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_mm14_flag_co.paa", 
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_mm14_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_creme_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tmtm_acu_gloves_mm14";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	// AFU ACU (Rolled/MM14)
	class tmtm_u_acu_rolled_mm14: tmtm_u_acu_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="AFU ACU (Rolled/MM14)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_acu_mm14.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_mm14_flag_co.paa", 
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_mm14_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_tan_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tmtm_acu_rolled_mm14";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	// AFU ACU (Rolled/Gloves/MM14)
	class tmtm_u_acu_rolled_gloves_mm14: tmtm_u_acu_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="AFU ACU (Rolled/Gloves/MM14)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_acu_mm14.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_mm14_flag_co.paa", 
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_mm14_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_tan_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tmtm_acu_rolled_gloves_mm14";
			containerClass = "Supply40";
			mass = 20;
		};
	};	
	// AFU National Guard ACU (Dark Olive)
	class tmtm_u_acu_darkolive: tmtm_u_acu_plain_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="AFU National Guard ACU (Dark Olive)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_acu_darkolive.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_flag_co.paa", 
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tmtm_acu_darkolive";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	// AFU National Guard ACU (Gloves/Dark Olive)
	class tmtm_u_acu_gloves_darkolive: tmtm_u_acu_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="AFU National Guard ACU (Gloves/Dark Olive)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_acu_darkolive.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_flag_co.paa", 
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_tan_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tmtm_acu_gloves_darkolive";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	// AFU National Guard ACU (Rolled/Dark Olive)
	class tmtm_u_acu_rolled_darkolive: tmtm_u_acu_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="AFU National Guard ACU (Rolled/Dark Olive)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_acu_darkolive.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_flag_co.paa", 
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tmtm_acu_rolled_darkolive";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	// AFU National Guard ACU (Rolled/Gloves/Dark Olive)
	class tmtm_u_acu_rolled_gloves_darkolive: tmtm_u_acu_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="AFU National Guard ACU (Rolled/Gloves/Dark Olive)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_acu_darkolive.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_flag_co.paa", 
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tmtm_acu_rolled_gloves_darkolive";
			containerClass = "Supply40";
			mass = 20;
		};
	};

	// Uniform ACU (Dark Olive)
	class tmtm_u_acu_noflag_darkolive: tmtm_u_acu_plain_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Uniform ACU (Dark Olive)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_acu_noflag_darkolive.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_co.paa", 
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tmtm_acu_noflag_darkolive";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	// Uniform ACU (Gloves/Dark Olive)
	class tmtm_u_acu_gloves_noflag_darkolive: tmtm_u_acu_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Uniform ACU (Gloves/Dark Olive)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_acu_noflag_darkolive.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_co.paa", 
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tmtm_acu_gloves_noflag_darkolive";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	// Uniform ACU (Rolled/Dark Olive)
	class tmtm_u_acu_rolled_noflag_darkolive: tmtm_u_acu_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Uniform ACU (Rolled/Dark Olive)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_acu_noflag_darkolive.paa";

		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_co.paa", 
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tmtm_acu_rolled_noflag_darkolive";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	// Uniform ACU (Rolled/Gloves/Dark Olive)
	class tmtm_u_acu_rolled_gloves_noflag_darkolive: tmtm_u_acu_base
	{
		author="erem2k";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Uniform ACU (Rolled/Gloves/Dark Olive)";
		picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_acu_noflag_darkolive.paa";
		
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_blouse_darkolive_co.paa", 
			"\tmtm\pack\cup_uniforms\Data\tmtm_acu_pants_darkolive_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tmtm_acu_rolled_gloves_noflag_darkolive";
			containerClass = "Supply40";
			mass = 20;
		};
	};

	// Nomex Flightsuit, Grey
	class tmtm_u_nomex_grey: tmtm_u_acu_base
	{
		author="trenchgun";

		scope=1;
		scopeArsenal=2;
		scopeCurator=0;

		displayName="Nomex Flightsuit (Grey)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_usmc_pilotoverall_ca.paa";
		
		hiddenSelectionsTextures[] = {
			"\tmtm\pack\cup_uniforms\Data\tmtm_nomex_grey_co.paa",
			"\cup\creatures\people\military\cup_creatures_people_military_usmc\data\gloves_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tmtm_nomex_grey";
			containerClass = "Supply40";
			mass = 20;
		};
	};
};