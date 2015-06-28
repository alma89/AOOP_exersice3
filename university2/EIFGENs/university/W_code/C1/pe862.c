/*
 * Code for class PERSON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F862_7033(EIF_REFERENCE);
extern void F862_7034(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit862(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PERSON}.name */
EIF_TYPED_VALUE F862_7033 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4925,Dtype(Current)));
	return r;
}


/* {PERSON}.make */
void F862_7034 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 1, 12602);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12602);
	if (arg1) {
		RTCC(arg1, 861, l_feature_name, 1, 220);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4925, 0xF80000DC, 0); /* name */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(4925, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit862 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
