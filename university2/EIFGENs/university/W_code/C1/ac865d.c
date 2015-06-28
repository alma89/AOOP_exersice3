/*
 * Class ACCOUNT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_865 [] = {238,864,0xFFFF};
static EIF_TYPE_INDEX gen_type1_865 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_865 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_865 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_865 [] = {245,860,0xFFFF};
static EIF_TYPE_INDEX gen_type5_865 [] = {245,860,0xFFFF};


static struct desc_info desc_865[] = {
	{(BODY_INDEX) 12621, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 220, NULL},
	{1, (BODY_INDEX)-1, 238, gen_type0_865},
	{2, (BODY_INDEX)-1, 191, NULL},
	{3, (BODY_INDEX)-1, 191, NULL},
	{4, (BODY_INDEX)-1, 191, NULL},
	{5, (BODY_INDEX)-1, 191, NULL},
	{6, (BODY_INDEX)-1, 191, NULL},
	{7, (BODY_INDEX)-1, 191, NULL},
	{8, (BODY_INDEX)-1, 191, NULL},
	{9, (BODY_INDEX)-1, 191, NULL},
	{10, (BODY_INDEX)-1, 864, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_865},
	{14, (BODY_INDEX)-1, 0, gen_type2_865},
	{15, (BODY_INDEX)-1, 864, NULL},
	{16, (BODY_INDEX)-1, 864, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_865},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, NULL},
	{12620, (BODY_INDEX)-1, 220, NULL},
	{22, (BODY_INDEX)-1, 220, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 864, NULL},
	{29, (BODY_INDEX)-1, 215, NULL},
	{30, (BODY_INDEX)-1, 864, NULL},
	{12607, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12608, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12609, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12610, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12611, 0, 861, NULL},
	{12612, 24, 194, NULL},
	{12613, 8, 245, gen_type4_865},
	{12614, 16, 245, gen_type5_865},
	{12615, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12616, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12617, (BODY_INDEX)-1, 194, NULL},
	{12618, (BODY_INDEX)-1, 194, NULL},
	{12619, (BODY_INDEX)-1, 194, NULL},
};

extern void Init865(void);
void Init865(void)
{
	IDSC(desc_865, 0, 864);
	IDSC(desc_865 + 1, 1, 864);
	IDSC(desc_865 + 32, 349, 864);
}


#ifdef __cplusplus
}
#endif
