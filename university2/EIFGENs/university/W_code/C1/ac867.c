/*
 * Code for class ACCOUNT_STUDENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F867_7057(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F867_7058(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F867_7059(EIF_REFERENCE);
extern EIF_TYPED_VALUE F867_7060(EIF_REFERENCE);
extern void EIF_Minit867(void);

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

/* {ACCOUNT_STUDENT}.make */
void F867_7057 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 866, Current, 0, 1, 12626);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(866, Current, 12626);
	if (arg1) {
		RTCC(arg1, 866, l_feature_name, 1, 862);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4931, Dtype(Current)))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {ACCOUNT_STUDENT}.set_owner */
void F867_7058 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_owner";
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
	
	RTEAA(l_feature_name, 866, Current, 0, 1, 12627);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(866, Current, 12627);
	if (arg1) {
		RTCC(arg1, 866, l_feature_name, 1, 862);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4935, 0xF800035E, 0); /* owner */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(4935, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {ACCOUNT_STUDENT}.owner */
EIF_TYPED_VALUE F867_7059 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4935,Dtype(Current)));
	return r;
}


/* {ACCOUNT_STUDENT}.min_subject_ects */
RTOID (F867_7060)
EIF_TYPED_VALUE F867_7060 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "min_subject_ects";
	RTEX;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOTDB(EIF_REAL_64, F867_7060);

	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 866, Current, 0, 0, 12629);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(866, Current, 12629);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 4L));
	
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef Result
}

void EIF_Minit867 (void)
{
	GTCX
	RTOTS (7060,F867_7060)
}


#ifdef __cplusplus
}
#endif
