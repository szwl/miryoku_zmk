// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
// https://github.com/manna-harbour/miryoku/tree/master/docs/reference

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_COLEMAKDH
#define MIRYOKU_CLIPBOARD_DEFAULT
#define MIRYOKU_LAYERS_DEFAULT
// #define MIRYOKU_MAPPING_EXTENDED_THUMBS

#define XXX &none

#define I3_MW(x) &kp LA(LS(x))
#define I3_CW(x) &kp LA(x) 
#define I3L &mo U_I3WM
#define CMD &console


#define MIRYOKU_LAYER_I3WM \
&kp X,		I3_CW(NUM_7),	I3_CW(NUM_8),	I3_CW(NUM_9),	&kp X,		&kp X,		&kp X,		&kp X,		&kp X,		&kp X,	\
&kp X,		I3_CW(NUM_4),	I3_CW(NUM_5),	I3_CW(NUM_6),	&kp X,		&kp X,		&kp LSHFT,	&kp LCTRL,	&kp LALT,	&kp LGUI,	     \
&kp X,		I3_CW(NUM_1),	I3_CW(NUM_2),	I3_CW(NUM_3),	&kp X,		&kp X,		I3_MW(LEFT),I3_MW(DOWN),I3_MW(UP),	I3_MW(RIGHT),	     \
&kp X,		&kp X,		&kp X,		I3_CW(0),	&kp X,		&kp X,		&kp X,		&kp X,		&kp X,		&kp X 				




#define MIRYOKU_LAYOUTMAPPING_KYRIA(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39  \
)\
XXX  K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  XXX  \
XXX  K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  XXX  \
XXX  K20  K21  K22  K23  K24  XXX  XXX       XXX  XXX  K25  K26  K27  K28  K29  XXX  \
          &kp RALT  CMD  K32  K33  K34       K35  K36  K37  CMD  &kp RALT


#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(I3WM,   "I3wm") 

#define MIRYOKU_LAYERMAPPING_I3WM MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_I3WM   10