#pragma once

//$50,$49,$48,$47,$46,$45,$44,$43,$42,$41,$40,$39,$38,$37,$36,$35,$34,$33,$32,$31,$30,$29,$28,$27,$26,$25,$24,$23,$22,$21,$20,$19,$18,$17,$16,$15,$14,$13,$12,$11,$10,$9,$8,$7,$6,$5,$4,$3,$2,$1,$0
// 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
//  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1

#define NMSCPP_AT_A(...)            __VA_ARGS__
#define NMSCPP_AT(id, ...)          NMSCPP_AT_A(NMSCPP_AT_##id(__VA_ARGS__))

#define NMSCPP_AT_0(_,...)          _
#define NMSCPP_AT_1(_,...)          NMSCPP_AT_0(__VA_ARGS__,_,_)
#define NMSCPP_AT_2(_,...)          NMSCPP_AT_1(__VA_ARGS__)
#define NMSCPP_AT_3(_,...)          NMSCPP_AT_2(__VA_ARGS__)
#define NMSCPP_AT_4(_,...)          NMSCPP_AT_3(__VA_ARGS__)
#define NMSCPP_AT_5(_,...)          NMSCPP_AT_4(__VA_ARGS__)
#define NMSCPP_AT_6(_,...)          NMSCPP_AT_5(__VA_ARGS__)
#define NMSCPP_AT_7(_,...)          NMSCPP_AT_6(__VA_ARGS__)
#define NMSCPP_AT_8(_,...)          NMSCPP_AT_7(__VA_ARGS__)
#define NMSCPP_AT_9(_,...)          NMSCPP_AT_8(__VA_ARGS__)
#define NMSCPP_AT_10(_,...)         NMSCPP_AT_9(__VA_ARGS__)
#define NMSCPP_AT_11(_,...)         NMSCPP_AT_10(__VA_ARGS__)
#define NMSCPP_AT_12(_,...)         NMSCPP_AT_11(__VA_ARGS__)
#define NMSCPP_AT_13(_,...)         NMSCPP_AT_12(__VA_ARGS__)
#define NMSCPP_AT_14(_,...)         NMSCPP_AT_13(__VA_ARGS__)
#define NMSCPP_AT_15(_,...)         NMSCPP_AT_14(__VA_ARGS__)
#define NMSCPP_AT_16(_,...)         NMSCPP_AT_15(__VA_ARGS__)
#define NMSCPP_AT_17(_,...)         NMSCPP_AT_16(__VA_ARGS__)
#define NMSCPP_AT_18(_,...)         NMSCPP_AT_17(__VA_ARGS__)
#define NMSCPP_AT_19(_,...)         NMSCPP_AT_18(__VA_ARGS__)
#define NMSCPP_AT_20(_,...)         NMSCPP_AT_19(__VA_ARGS__)
#define NMSCPP_AT_21(_,...)         NMSCPP_AT_20(__VA_ARGS__)
#define NMSCPP_AT_22(_,...)         NMSCPP_AT_21(__VA_ARGS__)
#define NMSCPP_AT_23(_,...)         NMSCPP_AT_22(__VA_ARGS__)
#define NMSCPP_AT_24(_,...)         NMSCPP_AT_23(__VA_ARGS__)
#define NMSCPP_AT_25(_,...)         NMSCPP_AT_24(__VA_ARGS__)
#define NMSCPP_AT_26(_,...)         NMSCPP_AT_25(__VA_ARGS__)
#define NMSCPP_AT_27(_,...)         NMSCPP_AT_26(__VA_ARGS__)
#define NMSCPP_AT_28(_,...)         NMSCPP_AT_27(__VA_ARGS__)
#define NMSCPP_AT_29(_,...)         NMSCPP_AT_28(__VA_ARGS__)
#define NMSCPP_AT_30(_,...)         NMSCPP_AT_29(__VA_ARGS__)
#define NMSCPP_AT_31(_,...)         NMSCPP_AT_30(__VA_ARGS__)
#define NMSCPP_AT_32(_,...)         NMSCPP_AT_31(__VA_ARGS__)
#define NMSCPP_AT_33(_,...)         NMSCPP_AT_32(__VA_ARGS__)
#define NMSCPP_AT_34(_,...)         NMSCPP_AT_33(__VA_ARGS__)
#define NMSCPP_AT_35(_,...)         NMSCPP_AT_34(__VA_ARGS__)
#define NMSCPP_AT_36(_,...)         NMSCPP_AT_35(__VA_ARGS__)
#define NMSCPP_AT_37(_,...)         NMSCPP_AT_36(__VA_ARGS__)
#define NMSCPP_AT_38(_,...)         NMSCPP_AT_37(__VA_ARGS__)
#define NMSCPP_AT_39(_,...)         NMSCPP_AT_38(__VA_ARGS__)
#define NMSCPP_AT_40(_,...)         NMSCPP_AT_39(__VA_ARGS__)
#define NMSCPP_AT_41(_,...)         NMSCPP_AT_40(__VA_ARGS__)
#define NMSCPP_AT_42(_,...)         NMSCPP_AT_41(__VA_ARGS__)
#define NMSCPP_AT_43(_,...)         NMSCPP_AT_42(__VA_ARGS__)
#define NMSCPP_AT_44(_,...)         NMSCPP_AT_43(__VA_ARGS__)
#define NMSCPP_AT_45(_,...)         NMSCPP_AT_44(__VA_ARGS__)
#define NMSCPP_AT_46(_,...)         NMSCPP_AT_45(__VA_ARGS__)
#define NMSCPP_AT_47(_,...)         NMSCPP_AT_46(__VA_ARGS__)
#define NMSCPP_AT_48(_,...)         NMSCPP_AT_47(__VA_ARGS__)
#define NMSCPP_AT_49(_,...)         NMSCPP_AT_48(__VA_ARGS__)
#define NMSCPP_AT_50(_,...)         NMSCPP_AT_49(__VA_ARGS__)

#define NMSCPP_COUNT(...)           NMSCPP_AT(50, ~, ##__VA_ARGS__, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0)

#define NMSCPP_DO_A(...)            __VA_ARGS__
#define NMSCPP_DO(f, ...)           NMSCPP_DO_A(f(__VA_ARGS__))

#define NMSCPP_FOR(f,...)           NMSCPP_FOR_A(f, __VA_ARGS__, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0)
#define NMSCPP_FOR_A(f, $50,$49,$48,$47,$46,$45,$44,$43,$42,$41,$40,$39,$38,$37,$36,$35,$34,$33,$32,$31,$30,$29,$28,$27,$26,$25,$24,$23,$22,$21,$20,$19,$18,$17,$16,$15,$14,$13,$12,$11,$10,$9,$8,$7,$6,$5,$4,$3,$2,$1,$0, ...) NMSCPP_FOR_##$0(f, $50,$49,$48,$47,$46,$45,$44,$43,$42,$41,$40,$39,$38,$37,$36,$35,$34,$33,$32,$31,$30,$29,$28,$27,$26,$25,$24,$23,$22,$21,$20,$19,$18,$17,$16,$15,$14,$13,$12,$11,$10,$9,$8,$7,$6,$5,$4,$3,$2,$1,$0)

#define NMSCPP_FOR_1(f, ...)        NMSCPP_DO(f,  0, NMSCPP_AT( 0,__VA_ARGS__))
#define NMSCPP_FOR_2(f, ...)        NMSCPP_FOR_1(f,  __VA_ARGS__) NMSCPP_DO(f,  1, NMSCPP_AT( 1,__VA_ARGS__))
#define NMSCPP_FOR_3(f, ...)        NMSCPP_FOR_2(f,  __VA_ARGS__) NMSCPP_DO(f,  2, NMSCPP_AT( 2,__VA_ARGS__))
#define NMSCPP_FOR_4(f, ...)        NMSCPP_FOR_3(f,  __VA_ARGS__) NMSCPP_DO(f,  3, NMSCPP_AT( 3,__VA_ARGS__))
#define NMSCPP_FOR_5(f, ...)        NMSCPP_FOR_4(f,  __VA_ARGS__) NMSCPP_DO(f,  4, NMSCPP_AT( 4,__VA_ARGS__))
#define NMSCPP_FOR_6(f, ...)        NMSCPP_FOR_5(f,  __VA_ARGS__) NMSCPP_DO(f,  5, NMSCPP_AT( 5,__VA_ARGS__))
#define NMSCPP_FOR_7(f, ...)        NMSCPP_FOR_6(f,  __VA_ARGS__) NMSCPP_DO(f,  6, NMSCPP_AT( 6,__VA_ARGS__))
#define NMSCPP_FOR_8(f, ...)        NMSCPP_FOR_7(f,  __VA_ARGS__) NMSCPP_DO(f,  7, NMSCPP_AT( 7,__VA_ARGS__))
#define NMSCPP_FOR_9(f, ...)        NMSCPP_FOR_8(f,  __VA_ARGS__) NMSCPP_DO(f,  8, NMSCPP_AT( 8,__VA_ARGS__))
#define NMSCPP_FOR_10(f, ...)       NMSCPP_FOR_9(f,  __VA_ARGS__) NMSCPP_DO(f,  9, NMSCPP_AT( 9,__VA_ARGS__))
#define NMSCPP_FOR_11(f, ...)       NMSCPP_FOR_10(f, __VA_ARGS__) NMSCPP_DO(f, 10, NMSCPP_AT(10,__VA_ARGS__))
#define NMSCPP_FOR_12(f, ...)       NMSCPP_FOR_11(f, __VA_ARGS__) NMSCPP_DO(f, 11, NMSCPP_AT(11,__VA_ARGS__))
#define NMSCPP_FOR_13(f, ...)       NMSCPP_FOR_12(f, __VA_ARGS__) NMSCPP_DO(f, 12, NMSCPP_AT(12,__VA_ARGS__))
#define NMSCPP_FOR_14(f, ...)       NMSCPP_FOR_13(f, __VA_ARGS__) NMSCPP_DO(f, 13, NMSCPP_AT(13,__VA_ARGS__))
#define NMSCPP_FOR_15(f, ...)       NMSCPP_FOR_14(f, __VA_ARGS__) NMSCPP_DO(f, 14, NMSCPP_AT(14,__VA_ARGS__))
#define NMSCPP_FOR_16(f, ...)       NMSCPP_FOR_15(f, __VA_ARGS__) NMSCPP_DO(f, 15, NMSCPP_AT(15,__VA_ARGS__))
#define NMSCPP_FOR_17(f, ...)       NMSCPP_FOR_16(f, __VA_ARGS__) NMSCPP_DO(f, 16, NMSCPP_AT(16,__VA_ARGS__))
#define NMSCPP_FOR_18(f, ...)       NMSCPP_FOR_17(f, __VA_ARGS__) NMSCPP_DO(f, 17, NMSCPP_AT(17,__VA_ARGS__))
#define NMSCPP_FOR_19(f, ...)       NMSCPP_FOR_18(f, __VA_ARGS__) NMSCPP_DO(f, 18, NMSCPP_AT(18,__VA_ARGS__))
#define NMSCPP_FOR_20(f, ...)       NMSCPP_FOR_19(f, __VA_ARGS__) NMSCPP_DO(f, 19, NMSCPP_AT(19,__VA_ARGS__))
#define NMSCPP_FOR_21(f, ...)       NMSCPP_FOR_20(f, __VA_ARGS__) NMSCPP_DO(f, 20, NMSCPP_AT(20,__VA_ARGS__))
#define NMSCPP_FOR_22(f, ...)       NMSCPP_FOR_21(f, __VA_ARGS__) NMSCPP_DO(f, 21, NMSCPP_AT(21,__VA_ARGS__))
#define NMSCPP_FOR_23(f, ...)       NMSCPP_FOR_22(f, __VA_ARGS__) NMSCPP_DO(f, 22, NMSCPP_AT(22,__VA_ARGS__))
#define NMSCPP_FOR_24(f, ...)       NMSCPP_FOR_23(f, __VA_ARGS__) NMSCPP_DO(f, 23, NMSCPP_AT(23,__VA_ARGS__))
#define NMSCPP_FOR_25(f, ...)       NMSCPP_FOR_24(f, __VA_ARGS__) NMSCPP_DO(f, 24, NMSCPP_AT(24,__VA_ARGS__))
#define NMSCPP_FOR_26(f, ...)       NMSCPP_FOR_25(f, __VA_ARGS__) NMSCPP_DO(f, 25, NMSCPP_AT(25,__VA_ARGS__))
#define NMSCPP_FOR_27(f, ...)       NMSCPP_FOR_26(f, __VA_ARGS__) NMSCPP_DO(f, 26, NMSCPP_AT(26,__VA_ARGS__))
#define NMSCPP_FOR_28(f, ...)       NMSCPP_FOR_27(f, __VA_ARGS__) NMSCPP_DO(f, 27, NMSCPP_AT(27,__VA_ARGS__))
#define NMSCPP_FOR_29(f, ...)       NMSCPP_FOR_28(f, __VA_ARGS__) NMSCPP_DO(f, 28, NMSCPP_AT(28,__VA_ARGS__))
#define NMSCPP_FOR_30(f, ...)       NMSCPP_FOR_29(f, __VA_ARGS__) NMSCPP_DO(f, 29, NMSCPP_AT(29,__VA_ARGS__))
#define NMSCPP_FOR_31(f, ...)       NMSCPP_FOR_30(f, __VA_ARGS__) NMSCPP_DO(f, 30, NMSCPP_AT(30,__VA_ARGS__))
#define NMSCPP_FOR_32(f, ...)       NMSCPP_FOR_31(f, __VA_ARGS__) NMSCPP_DO(f, 31, NMSCPP_AT(31,__VA_ARGS__))
#define NMSCPP_FOR_33(f, ...)       NMSCPP_FOR_32(f, __VA_ARGS__) NMSCPP_DO(f, 32, NMSCPP_AT(32,__VA_ARGS__))
#define NMSCPP_FOR_34(f, ...)       NMSCPP_FOR_33(f, __VA_ARGS__) NMSCPP_DO(f, 33, NMSCPP_AT(33,__VA_ARGS__))
#define NMSCPP_FOR_35(f, ...)       NMSCPP_FOR_34(f, __VA_ARGS__) NMSCPP_DO(f, 34, NMSCPP_AT(34,__VA_ARGS__))
#define NMSCPP_FOR_36(f, ...)       NMSCPP_FOR_35(f, __VA_ARGS__) NMSCPP_DO(f, 35, NMSCPP_AT(35,__VA_ARGS__))
#define NMSCPP_FOR_37(f, ...)       NMSCPP_FOR_36(f, __VA_ARGS__) NMSCPP_DO(f, 36, NMSCPP_AT(36,__VA_ARGS__))
#define NMSCPP_FOR_38(f, ...)       NMSCPP_FOR_37(f, __VA_ARGS__) NMSCPP_DO(f, 37, NMSCPP_AT(37,__VA_ARGS__))
#define NMSCPP_FOR_39(f, ...)       NMSCPP_FOR_38(f, __VA_ARGS__) NMSCPP_DO(f, 38, NMSCPP_AT(38,__VA_ARGS__))
#define NMSCPP_FOR_40(f, ...)       NMSCPP_FOR_39(f, __VA_ARGS__) NMSCPP_DO(f, 39, NMSCPP_AT(39,__VA_ARGS__))
#define NMSCPP_FOR_41(f, ...)       NMSCPP_FOR_40(f, __VA_ARGS__) NMSCPP_DO(f, 40, NMSCPP_AT(40,__VA_ARGS__))
#define NMSCPP_FOR_42(f, ...)       NMSCPP_FOR_41(f, __VA_ARGS__) NMSCPP_DO(f, 41, NMSCPP_AT(41,__VA_ARGS__))
#define NMSCPP_FOR_43(f, ...)       NMSCPP_FOR_42(f, __VA_ARGS__) NMSCPP_DO(f, 42, NMSCPP_AT(42,__VA_ARGS__))
#define NMSCPP_FOR_44(f, ...)       NMSCPP_FOR_43(f, __VA_ARGS__) NMSCPP_DO(f, 43, NMSCPP_AT(43,__VA_ARGS__))
#define NMSCPP_FOR_45(f, ...)       NMSCPP_FOR_44(f, __VA_ARGS__) NMSCPP_DO(f, 44, NMSCPP_AT(44,__VA_ARGS__))
#define NMSCPP_FOR_46(f, ...)       NMSCPP_FOR_45(f, __VA_ARGS__) NMSCPP_DO(f, 45, NMSCPP_AT(45,__VA_ARGS__))
#define NMSCPP_FOR_47(f, ...)       NMSCPP_FOR_46(f, __VA_ARGS__) NMSCPP_DO(f, 46, NMSCPP_AT(46,__VA_ARGS__))
#define NMSCPP_FOR_48(f, ...)       NMSCPP_FOR_47(f, __VA_ARGS__) NMSCPP_DO(f, 47, NMSCPP_AT(47,__VA_ARGS__))
#define NMSCPP_FOR_49(f, ...)       NMSCPP_FOR_48(f, __VA_ARGS__) NMSCPP_DO(f, 48, NMSCPP_AT(48,__VA_ARGS__))
