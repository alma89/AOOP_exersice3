/*
 * Code for class ACCOUNT_PROFESSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F866_7053(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F866_7054(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F866_7055(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7056(EIF_REFERENCE);
extern void EIF_Minit866(void);

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

/* {ACCOUNT_PROFESSOR}.make */
void F866_7053 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 865, Current, 0, 1, 12622);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(865, Current, 12622);
	if (arg1) {
		RTCC(arg1, 865, l_feature_name, 1, 863);
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

/* {ACCOUNT_PROFESSOR}.set_owner */
void F866_7054 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 865, Current, 0, 1, 12623);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(865, Current, 12623);
	if (arg1) {
		RTCC(arg1, 865, l_feature_name, 1, 863);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4935, 0xF800035F, 0); /* owner */
	
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

/* {ACCOUNT_PROFESSOR}.owner */
EIF_TYPED_VALUE F866_7055 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4935,Dtype(Current)));
	return r;
}


/* {ACCOUNT_PROFESSOR}.max_semester_ects */
RTOID (F866_7056)
EIF_TYPED_VALUE F866_7056 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "max_semester_ects";
	RTEX;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOTDB(EIF_REAL_64, F866_7056);

	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 865, Current, 0, 0, 12625);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(865, Current, 12625);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 60L));
	
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

void EIF_Minit866 (void)
{
	GTCX
	RTOTS (7056,F866_7056)
}


#ifdef __cplusplus
}
#endif
