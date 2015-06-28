/*
 * Code for class STUDENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F863_7035(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F863_7036(EIF_REFERENCE);
extern void EIF_Minit863(void);

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

/* {STUDENT}.set_matriculation_number */
void F863_7035 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_matriculation_number";
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
	
	RTEAA(l_feature_name, 862, Current, 0, 1, 12603);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(862, Current, 12603);
	if (arg1) {
		RTCC(arg1, 862, l_feature_name, 1, 220);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4928, 0xF80000DC, 0); /* matriculation_number */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(4928, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {STUDENT}.matriculation_number */
EIF_TYPED_VALUE F863_7036 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4928,Dtype(Current)));
	return r;
}


void EIF_Minit863 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
