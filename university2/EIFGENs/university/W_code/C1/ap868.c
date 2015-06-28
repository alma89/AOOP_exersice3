/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F868_7061(EIF_REFERENCE);
extern void EIF_Minit868(void);

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

/* {APPLICATION}.make */
void F868_7061 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(16);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,loc4);
	RTLR(7,loc9);
	RTLR(8,loc10);
	RTLR(9,loc11);
	RTLR(10,loc12);
	RTLR(11,loc13);
	RTLR(12,loc5);
	RTLR(13,loc6);
	RTLR(14,loc7);
	RTLR(15,loc8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	
	RTEAA(l_feature_name, 867, Current, 14, 0, 12630);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(867, Current, 12630);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("\012\012******************      UNIVERSITY APPLICATION      ******************\012",73,1795681290);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800035D, 0, 0); /* loc1 */
	
	tr1 = RTLN(861);
	tr2 = RTMS_EX_H("Philipp Skala",13,971712609);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4926, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0xF800035E, 0, 0); /* loc2 */
	
	tr1 = RTLN(862);
	tr2 = RTMS_EX_H("Thomas Muller",13,718551410);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4926, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("075431",6,987407665);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4927, "set_matriculation_number", loc2))(loc2, ur1x);
	
	RTHOOK(5);
	RTDBGAL(Current, 4, 0xF800035F, 0, 0); /* loc4 */
	
	tr1 = RTLN(863);
	tr2 = RTMS_EX_H("Max Seebacher",13,768751986);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4926, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(5,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTMS_EX_H("0847568",7,1573647160);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4929, "set_employee_number", loc4))(loc4, ur1x);
	
	RTHOOK(7);
	RTDBGAL(Current, 9, 0xF800035C, 0, 0); /* loc9 */
	
	tr1 = RTLN(860);
	tr2 = RTMS_EX_H("Advanced Object Orineted Programming",36,1488464231);
	ur1 = tr2;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 10L));
	
	ur8_1 = tr8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4920, Dtype(tr1)))(tr1, ur1x, ur8_1x);
	
	RTNHOOK(7,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	RTDBGAL(Current, 10, 0xF800035C, 0, 0); /* loc10 */
	
	tr1 = RTLN(860);
	tr2 = RTMS_EX_H("Advanced Software Engineering",29,713030759);
	ur1 = tr2;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 11L));
	
	ur8_1 = tr8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4920, Dtype(tr1)))(tr1, ur1x, ur8_1x);
	
	RTNHOOK(8,1);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAL(Current, 11, 0xF800035C, 0, 0); /* loc11 */
	
	tr1 = RTLN(860);
	tr2 = RTMS_EX_H("Statistics",10,2114837363);
	ur1 = tr2;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 13L));
	
	ur8_1 = tr8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4920, Dtype(tr1)))(tr1, ur1x, ur8_1x);
	
	RTNHOOK(9,1);
	loc11 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAL(Current, 12, 0xF800035C, 0, 0); /* loc12 */
	
	tr1 = RTLN(860);
	tr2 = RTMS_EX_H("Discrete Mathematics",20,1706676851);
	ur1 = tr2;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 17L));
	
	ur8_1 = tr8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4920, Dtype(tr1)))(tr1, ur1x, ur8_1x);
	
	RTNHOOK(10,1);
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(11);
	RTDBGAL(Current, 13, 0xF800035C, 0, 0); /* loc13 */
	
	tr1 = RTLN(860);
	tr2 = RTMS_EX_H("Adanced Internet Computing",26,1120036455);
	ur1 = tr2;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 4L));
	
	ur8_1 = tr8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4920, Dtype(tr1)))(tr1, ur1x, ur8_1x);
	
	RTNHOOK(11,1);
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	RTDBGAL(Current, 13, 0xF800035C, 0, 0); /* loc13 */
	
	tr1 = RTLN(860);
	tr2 = RTMS_EX_H("Formal Methods",14,226691443);
	ur1 = tr2;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 18L));
	
	ur8_1 = tr8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4920, Dtype(tr1)))(tr1, ur1x, ur8_1x);
	
	RTNHOOK(12,1);
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(13);
	RTDBGAL(Current, 5, 0xF8000360, 0, 0); /* loc5 */
	
	tr1 = RTLN(864);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4931, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(13,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	ur1 = RTCCL(loc9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4934, "add_subject", loc5))(loc5, ur1x);
	
	RTHOOK(15);
	ur1 = RTCCL(loc10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4934, "add_subject", loc5))(loc5, ur1x);
	
	RTHOOK(16);
	ur1 = RTCCL(loc11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4934, "add_subject", loc5))(loc5, ur1x);
	
	RTHOOK(17);
	ur1 = RTCCL(loc9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4939, "unsubscribesubject", loc5))(loc5, ur1x);
	
	RTHOOK(18);
	RTDBGAL(Current, 6, 0xF8000362, 0, 0); /* loc6 */
	
	tr1 = RTLN(866);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4945, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(18,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(19);
	ur1 = RTCCL(loc10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4940, "subscribesubject", loc6))(loc6, ur1x);
	
	RTHOOK(20);
	ur1 = RTCCL(loc11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4940, "subscribesubject", loc6))(loc6, ur1x);
	
	RTHOOK(21);
	ur1 = RTCCL(loc12);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4940, "subscribesubject", loc6))(loc6, ur1x);
	
	RTHOOK(22);
	RTDBGAL(Current, 7, 0xF8000361, 0, 0); /* loc7 */
	
	tr1 = RTLN(865);
	ur1 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4944, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(22,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(23);
	ur1 = RTCCL(loc9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4940, "subscribesubject", loc7))(loc7, ur1x);
	
	RTHOOK(24);
	ur1 = RTCCL(loc10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4940, "subscribesubject", loc7))(loc7, ur1x);
	
	RTHOOK(25);
	ur1 = RTCCL(loc11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4940, "subscribesubject", loc7))(loc7, ur1x);
	
	RTHOOK(26);
	ur1 = RTCCL(loc13);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4940, "subscribesubject", loc7))(loc7, ur1x);
	
	RTHOOK(27);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(28);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(29);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(30);
	tr1 = RTMS_EX_H("\012\012\012Cat Call Exception: \012---------------------------------------------------------\012",82,1347821066);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(31);
	RTDBGAL(Current, 8, 0xF8000360, 0, 0); /* loc8 */
	
	loc8 = (EIF_REFERENCE) RTCCL(loc7);
	RTHOOK(32);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4932, "set_owner", loc8))(loc8, ur1x);
	
	RTHOOK(33);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
}

void EIF_Minit868 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
