#ifndef flightControlSystem_private_h_
#define flightControlSystem_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "flightControlSystem.h"
#include "flightControlSystem_types.h"
#include "rtw_modelmap_simtarget.h"
#include "simtarget/slMdlrefSimTargetCoreHeaders.h"
#include "simtarget/slMdlrefSimTargetInstrumentationHeaders.h"
#include "messages/slMessagesSfcnBridge.h"
#include "sl_fileio_rtw.h"
extern const char_T * rt_GetMatSignalLoggingFileName ( void ) ; extern const
char_T * rt_GetMatSigLogSelectorFileName ( void ) ; extern void *
rt_GetOSigstreamManager ( void ) ; extern void * *
rt_GetOSigstreamManagerAddr ( void ) ; extern void * rt_slioCatalogue ( void
) ; extern void * * rt_slioCatalogueAddr ( void ) ; extern void
rt_ssSet_slErrMsg ( void * S , void * diag ) ; extern void
rt_ssReportDiagnosticAsWarning ( void * S , void * diag ) ; extern void
rt_ssReportDiagnosticAsInfo ( void * S , void * diag ) ; extern const char_T
* rt_CreateFullPathToTop ( const char_T * toppath , const char_T * subpath )
; extern boolean_T slIsRapidAcceleratorSimulating ( void ) ; extern void
rt_RAccelReplaceFromFilename ( const char_T * blockpath , char_T * fileNam )
; extern void rt_RAccelReplaceToFilename ( const char_T * blockpath , char_T
* fileNam ) ; extern void slsaCacheDWorkPointerForSimTargetOP ( void * ss ,
void * * ptr ) ; extern void slsaCacheDWorkDataForSimTargetOP ( void * ss ,
void * ptr , unsigned int sizeInBytes ) ; extern void
slsaSaveRawMemoryForSimTargetOP ( void * ss , const char_T * key , void * *
ptr , unsigned int sizeInBytes , void * ( * customOPSaveFcn ) ( void *
dworkPtr , unsigned int * sizeInBytes ) , void ( * customOPRestoreFcn ) (
void * dworkPtr , const void * data , unsigned int sizeInBytes ) ) ; extern
void * gblLoggingInterval ;
#ifndef rtmCancelTimerToRaiseEvent
#define rtmCancelTimerToRaiseEvent(rtm, timerIndex) simTgtCancelTimerToRaiseEvent(_ssGetRootSS((rtm)->_mdlRefSfcnS), [timerIndex])
#endif
#ifndef rtmDisableTaskUsingRateIndex
#define rtmDisableTaskUsingRateIndex(rtm, sti) simTgtDisableTaskUsingRateIndex(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti])
#endif
#ifndef rtmEnableTaskUsingRateIndex
#define rtmEnableTaskUsingRateIndex(rtm, sti) simTgtEnableTaskUsingRateIndex(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti])
#endif
#ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm) ssIsFirstInitCond((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm) ssIsMajorTimeStep((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm) ssIsMinorTimeStep((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmRaiseEvent
#define rtmRaiseEvent(rtm, runtimeEventIndex) simTgtRaiseEvent(_ssGetRootSS((rtm)->_mdlRefSfcnS), [runtimeEventIndex])
#endif
#ifndef rtmRaiseEventWithEnqueue
#define rtmRaiseEventWithEnqueue(rtm, runtimeEventIndex) simTgtRaiseEventWithEnqueue(_ssGetRootSS((rtm)->_mdlRefSfcnS), [runtimeEventIndex])
#endif
#ifndef rtmRaiseWhenTimerExpiresAfter
#define rtmRaiseWhenTimerExpiresAfter(rtm, timerIndex, isRecurring, afterDur, runtimeEventIndex) simTgtRaiseWhenTimerExpiresAfter(_ssGetRootSS((rtm)->_mdlRefSfcnS), [timerIndex], isRecurring, afterDur, [runtimeEventIndex])
#endif
#ifndef rtmRaiseWhenTimerExpiresAt
#define rtmRaiseWhenTimerExpiresAt(rtm, timerIndex, atT, runtimeEventIndex) simTgtRaiseWhenTimerExpiresAt(_ssGetRootSS((rtm)->_mdlRefSfcnS), [timerIndex], atT, [runtimeEventIndex])
#endif
#ifndef rtmIsSpecialSampleHit
#define rtmIsSpecialSampleHit(rtm, sti, prom_sti, tid) ssIsSpecialSampleHit( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti], nmtwkzsqud[prom_sti], tid)
#endif
typedef struct { int8_T fau3qf03xm ; } hrtts4l5bc ; typedef struct { real32_T
j3s0wrmgla [ 2 ] ; } orji2pbk05 ; typedef struct { int8_T mkkaskumzr ;
boolean_T jhr0womnye ; } imbf3wrgri ; typedef struct { real32_T alkayrprb0 [
2 ] ; } dyc32xehtl ; typedef struct { int8_T ley0an2uip ; boolean_T
njk4w5jozv ; } gabr0rnvjj ; typedef struct { real32_T gide2x45b3_mbvzarwird [
16 ] ; real32_T de1pkcjbg1_cl54gopm0x [ 12 ] ; real32_T ohqb1xhwub_kkiq3xxxve
[ 9 ] ; real_T mlxcplakjs [ 2 ] ; real_T cm5z5guoim ; real_T pp14lkc5ds [ 3 ]
; real_T litan2havi [ 2 ] ; real_T f2aifs3w2z [ 2 ] ; real_T m33qvduepv [ 2 ]
; real_T gv14ypdkhh [ 4 ] ; real_T dwtigeetho_cxarnvbvui [ 4 ] ; real_T
i1vq3tu1gj_bhxxfovxdy [ 3 ] ; real_T ohqb1xhwub_pbm3vprmfu [ 3 ] ; real32_T
cidhom5352_m3yhjduhi1 [ 4 ] ; real32_T eyy0jqowtu_cv5hdgrwft [ 4 ] ; real32_T
fv [ 4 ] ; real32_T moyrp1tjer_fqdqrf4qbc [ 4 ] ; real_T pxw0oa3g5v [ 2 ] ;
real_T lioxwl1iar [ 2 ] ; real_T i5xc4ys2pt [ 2 ] ; real_T dv [ 2 ] ; real_T
cnypqeocoh_g2mlkqadfk [ 2 ] ; real32_T fagex23bbr_g1smspu5ke [ 3 ] ; real32_T
bb0joiz0r4_merlcviukg [ 3 ] ; real_T lieouyr513 ; real_T affqggdog2 ; real_T
c2fzqyltnh ; real_T nzr5yspjzx ; real_T pjwac0m43u_nz4o0shxby ; real_T
psyg3horlh_ppxrqq0gsf ; real_T unnamed_idx_2 ; real_T
unnamed_idx_2_llw0u2ae0v ; real_T ptk50tju32_idx_0 ; real_T ptk50tju32_idx_1
; real_T unnamed_idx_1_tmp ; real32_T dzdbq3k05m_jwzvbuczlb [ 2 ] ; real32_T
nydgppj0cy_dhmrxtyqop [ 2 ] ; real32_T pz2kukgvwy_guugdwf2m3 [ 2 ] ; real32_T
o3o03d4pvs_ldqodwenvz [ 2 ] ; real32_T ftax22owdm_dhamdvybc1 [ 2 ] ; real32_T
htuxom3ehb_dypejvacrn [ 2 ] ; real32_T ju1kqwcl4i_lxo5edjg3c [ 2 ] ; real32_T
pt5cj4vjtd_owjr1h1vqy [ 2 ] ; real32_T hsuvkbjt5s_bjbgfqrolh [ 2 ] ; real32_T
gi2zucrzpq ; real32_T e1lqlcmnjc ; real32_T mfnej0zskt ; real32_T jirymx3bmz
; real32_T l2xyktl14b [ 2 ] ; real32_T gazlhffgqp [ 2 ] ; real32_T fn3xejgdnz
[ 4 ] ; real32_T d2rwb413j0 ; real32_T fzoyetmmsh [ 2 ] ; real32_T lfb13k2lpd
[ 2 ] ; real32_T bmlfyp0nve [ 2 ] ; real32_T i1pkfeiqf3 ; real32_T nasakeuczj
[ 4 ] ; real32_T lpptmd10kb [ 2 ] ; real32_T nhynb4rzef [ 2 ] ; real32_T
conyevx543 [ 2 ] ; real32_T eixqpjyie2 [ 4 ] ; real32_T mvsfnj1n2e [ 3 ] ;
real32_T nseoymslxl [ 16 ] ; real32_T daepskgkuu [ 2 ] ; real32_T mouuzp511w
[ 2 ] ; real32_T dozrtxyuv3 [ 4 ] ; real32_T kd1mn2gm1l [ 2 ] ; real32_T
duljov25of [ 2 ] ; real32_T os2mdc4s5m [ 2 ] ; real32_T i0dflyubrv [ 4 ] ;
real32_T f3n0hqhcti [ 2 ] ; real32_T easxykepcj [ 8 ] ; real32_T ejwij1u00i [
8 ] ; real32_T mpjpr4511f [ 16 ] ; real32_T hh02nqa2sk [ 4 ] ; real32_T
ogmg0lyqxp [ 4 ] ; real32_T duo1hld4hb [ 4 ] ; real32_T bipj5wkt3o ; real32_T
pcgqi2scre ; real32_T acc1 ; real32_T mvpuhqqzt1_nuebgmauvi ; real32_T
pr3cy3ex2z_bsqwvugooi ; real32_T ppg2d1lxzx_lnjdk5wtww ; real32_T
oo5ahigr24_hv2ho1zopz ; real32_T adra3iiima_bnlywzniup ; real32_T
oo5vwsdpyd_dapv3jlyq5 ; real32_T ce0g14gyt3_ezqlmfzvpq ; real32_T
ega4wlcvvl_tmp ; real32_T ega4wlcvvl_tmp_bjvjhhzy4i ; real32_T
pz2kukgvwy_jzx3amusab ; real32_T bljivds5ih_idx_2 ; real32_T ii0wg3e1gg_idx_0
; real32_T ii0wg3e1gg_idx_1 ; real32_T ii0wg3e1gg_idx_2 ; real32_T
hkyrkaw0eb_idx_2 ; real32_T bljivds5ih_idx_0 ; real32_T bljivds5ih_idx_1 ;
real32_T fa3deew24c_idx_0 ; real32_T g45qmwbnlv_idx_1 ; real32_T
g45qmwbnlv_idx_2 ; real32_T moqiy0ilxa_idx_0 ; real32_T dr05xp1kkz_idx_0 ;
real32_T dr05xp1kkz_idx_1 ; real32_T ohqb1xhwub_tmp ; real32_T
ohqb1xhwub_tmp_fdinthrxmb ; real32_T ohqb1xhwub_tmp_al00mdgrv4 ; real32_T
ohqb1xhwub_tmp_ju13rw2h0m ; real32_T ohqb1xhwub_tmp_jz50ptvnrg ; real32_T
ohqb1xhwub_tmp_o4f35lbcvx ; real32_T djurzzuybk_nyxm0bsxsn ; real32_T
iytlbzpr4u_icdfyazkhu ; real32_T pgkgjde0do_oyypvi4boh ; real32_T
pxki2vskaa_nvsvtgkap4 ; int32_T cff ; int32_T memOffset ; int32_T i ;
uint32_T kx1jqnqnu4 ; uint32_T kzbgwxxiio ; uint32_T neuaowcb40 ; real32_T
ci4d4u2maw [ 6 ] ; real32_T lye2s42l5j ; uint32_T aetaq30u4b_czkfpwuzm5 ;
uint32_T manl0faxjy_mdoasc5av4 ; uint32_T ixkdpmf1nu_m3ybdk4ikc ; uint32_T
op0crisgge_jacdjrqyev ; uint32_T jigrtjgnmk_h522xzlxvt ; uint32_T
fsdppj0z1z_c0dok3111h ; uint16_T nbs40rrljt ; int16_T nvseztmzon ; uint16_T
fkisksvvjz_ctvw0tpkon ; uint16_T kzrsacq44p_pxqvlbal2i ; int8_T i_p5h3gwuwqg
; int8_T i1 ; uint8_T i45gejc5xa ; boolean_T jxjxbnzfyd ; boolean_T
lelq0j53uf ; boolean_T bjts4jm0kx ; boolean_T gdt0sjgot2 ; boolean_T
gosyl3wdxv_afnsueciae ; boolean_T k30khq2sgq_evg4t2fsev ; boolean_T
n0yx221con_ax3wx1gs5w ; boolean_T m43kwna0ox_as0qznsxlv ; boolean_T
ot24enspej_ifotjnizh4 ; boolean_T o4wox0ml4a_ltu3syw14q ; boolean_T
cprshk45pp_ojunzewo4f ; boolean_T o1rhslqnpv_o2tow3gxzm ; boolean_T
n4u2urwllf_ipgns4eet5 ; boolean_T g5w5u4dlya_fkr0r45bcn ; boolean_T
aj5zpa3lu0_izlwqhinl5 ; boolean_T d5aim33122_fft32lqtda ; dyc32xehtl
ipbtas1tys ; orji2pbk05 bm3dpymkhz ; dyc32xehtl ifzbhw4mrws ; orji2pbk05
phrpuocqmvu ; } eo4bbte2ey ; typedef struct { real_T mi4mocbazh ; real_T
mtonzezz2z [ 2 ] ; real_T ddv3ztj2wp [ 3 ] ; real_T bw2ribqmwm ; real_T
f2ynnmexgv ; real_T b2z5wyyedu ; real_T ibeh2pu5t0 ; struct { void *
AQHandles ; } puq03cpvbg ; real32_T b3fmbw5stg [ 2 ] ; real32_T aq2aymvaio [
3 ] ; real32_T dzwopklw3c ; real32_T d4fp3a2mpz [ 15 ] ; real32_T fl0vv44tbs
[ 2 ] ; real32_T as5a0ikbk1 [ 2 ] ; real32_T ncgo1wegzg ; real32_T mirtkskmtr
; real32_T jduomia1pb [ 5 ] ; real32_T od5c00niot [ 4 ] ; real32_T dqfv1m130o
[ 10 ] ; real32_T meognsjf1t [ 2 ] ; real32_T gcgpru4rcb [ 2 ] ; real32_T
peklmaellz [ 2 ] ; real32_T bsetqjfri4 ; real32_T dsjbzv2lh4 [ 2 ] ; real32_T
gixvkpnpus [ 2 ] ; real32_T ow5xb5ovt0 [ 2 ] ; real32_T krs1cvkxzk [ 2 ] ;
real32_T c4kiksmhh2 ; int32_T bbkjtf4kuy ; uint32_T l3lcputuyl ; uint32_T
pjgu33zeph ; uint32_T dxm3w2i52x ; real32_T orkq4iljgu ; real32_T p02f2gdequ
[ 30 ] ; real32_T mahjyhyq0q [ 6 ] ; real32_T b1nmhkw4zo ; real32_T
n0mydijbcx ; real32_T iwg03owvar ; real32_T mf2pp40f5v [ 2 ] ; real32_T
pwlp5beuqs [ 2 ] ; uint16_T gaxgdudnvc ; uint16_T fa1jgcut3x ; int8_T
dq5lalhp1e ; int8_T fpr1qi0oiw ; int8_T klyrn0mwhb ; int8_T mfifybuxty ;
int8_T a1oodzfxvv ; int8_T mgysgsd2g4 ; int8_T idn2v5d33m ; uint8_T
e3uw2ubplh ; uint8_T bjkftgumd3 ; boolean_T de4yc1bkky ; boolean_T jd3dqtmo2p
; boolean_T f1jy25gy04 ; boolean_T gdn4qfzvsk ; boolean_T cqi2pi21ow ;
boolean_T kh1khihcrt ; boolean_T iftedegxuv ; boolean_T g4zcogq4xi ;
gabr0rnvjj ipbtas1tys ; imbf3wrgri bm3dpymkhz ; gabr0rnvjj ifzbhw4mrws ;
imbf3wrgri phrpuocqmvu ; hrtts4l5bc ciy1c2o0rv ; hrtts4l5bc jvbbqhrajh ;
hrtts4l5bc clwiujjdqo ; hrtts4l5bc acfz1zxm4t ; hrtts4l5bc ghadbep3bbv ; }
dmp1xsadgu ; typedef struct { real_T b3ouxrig41 ; } k5baggiqtb ; typedef
struct { ZCSigState b1rw3rggh2 ; } ph1mky0ofs ; typedef struct { real_T
jyqjln1vli ; } izqi5nimcm ; typedef struct { boolean_T ijh0tyl5we_mbvzarwird
[ 1782 ] ; boolean_T f4ss5rtui2_cl54gopm0x [ 1749 ] ; boolean_T
gm44eoz0in_kkiq3xxxve [ 54 ] ; boolean_T bn5tq1jyxz_cxarnvbvui [ 53 ] ;
real_T gr00icyda5_bhxxfovxdy ; real_T mrhmv5vqk4_pbm3vprmfu ; real_T
bx0igf42xo_cv5hdgrwft ; real_T fgoorolbvp_fqdqrf4qbc ; real_T
n4jtkmq5sv_g2mlkqadfk ; real_T ail53ug1xu_g1smspu5ke ; real_T
d1yu0gfrce_merlcviukg ; real_T l3pijhfz4i_nz4o0shxby ; real_T
nsf10nbxwc_ppxrqq0gsf ; izqi5nimcm lg2dk4su2p ; izqi5nimcm o05ckp3wtd ;
izqi5nimcm guuqgriiic ; izqi5nimcm pkkonheww3 ; izqi5nimcm iopxkn4ii5 ;
izqi5nimcm oiwlpyyc3d ; izqi5nimcm k12xe5lsgy ; eo4bbte2ey otjykwnhb3s ; }
ircitwx3zdm ; typedef struct { real_T h0he12zmo4 [ 2 ] ; real_T oq44mkeutp [
2 ] ; real_T il2faoanlq [ 2 ] ; real_T naa4ayikn5 [ 2 ] ; real_T b1b5mp0pkt [
2 ] ; real_T kks4yi0jko [ 2 ] ; real_T izahidgm1z [ 2 ] ; real_T ipcjwvn31g [
2 ] ; real_T o500imgphq [ 2 ] ; bjqsgn0csy l152eirbdu ; int8_T gi5bdjcokf ;
int8_T fb0f52aifb ; int8_T nkpo31rxx0 ; int8_T hhjrbx5czh ; int8_T cgj3sq3fee
; int8_T ds3lkztnj2 ; int8_T hvrivdkew0 ; int8_T curdnu3seh ; int8_T
adixdqzc1c ; boolean_T jjrfotind4 ; dmp1xsadgu otjykwnhb3s ; } nllkaxiwhzw ;
typedef struct { k5baggiqtb otjykwnhb3s ; } h5liyesltnn ; typedef struct {
ph1mky0ofs otjykwnhb3s ; } cspyln32yuv ; struct bpvdgm2xq5_ { uint8_T P_0 ; }
; struct je33m1dqwd_ { real32_T P_0 ; } ; struct fpqg1jdlo0_ { real32_T P_0 ;
} ; struct nu4qaxumex_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real32_T P_6 [ 2 ] ; real32_T P_7 [ 2 ] ; real32_T
P_8 ; real32_T P_9 ; real32_T P_10 ; real32_T P_11 ; real32_T P_12 ; real32_T
P_13 ; real32_T P_14 ; real32_T P_15 ; real32_T P_16 [ 2 ] ; real32_T P_17 ;
real32_T P_18 ; real32_T P_19 ; real32_T P_20 [ 2 ] ; real32_T P_21 ;
real32_T P_22 ; real32_T P_23 ; real32_T P_24 ; real32_T P_25 ; real32_T P_26
; real32_T P_27 ; real32_T P_28 ; real32_T P_29 ; real32_T P_30 ; real32_T
P_31 ; real32_T P_32 ; real32_T P_33 ; real32_T P_34 ; real32_T P_35 ;
real32_T P_36 ; real32_T P_37 ; real32_T P_38 ; real32_T P_39 ; real32_T P_40
; real32_T P_41 ; real32_T P_42 ; real32_T P_43 ; real32_T P_44 ; real32_T
P_45 ; uint32_T P_46 ; uint32_T P_47 ; uint32_T P_48 ; uint32_T P_49 ;
uint32_T P_50 ; uint16_T P_51 ; uint16_T P_52 ; real_T P_53 ; real_T P_54 ;
real_T P_55 ; real_T P_56 ; real_T P_57 [ 4 ] ; real_T P_58 [ 4 ] ; real_T
P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ;
real_T P_65 [ 4 ] ; real_T P_66 [ 2 ] ; real_T P_67 [ 2 ] ; real_T P_68 [ 4 ]
; real_T P_69 [ 2 ] ; real_T P_70 [ 2 ] ; real_T P_71 ; real_T P_72 [ 4 ] ;
real_T P_73 [ 2 ] ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ;
real_T P_78 [ 2 ] ; real_T P_79 [ 3 ] ; real_T P_80 [ 4 ] ; real_T P_81 [ 2 ]
; real_T P_82 [ 2 ] ; real_T P_83 [ 4 ] ; real_T P_84 [ 2 ] ; real_T P_85 [ 2
] ; real_T P_86 ; real_T P_87 [ 3 ] ; real_T P_88 [ 16 ] ; real_T P_89 [ 8 ]
; real_T P_90 [ 8 ] ; real32_T P_91 ; real32_T P_92 ; real32_T P_93 ;
real32_T P_94 [ 2 ] ; real32_T P_95 ; real32_T P_96 ; real32_T P_97 ;
real32_T P_98 ; real32_T P_99 ; real32_T P_100 ; real32_T P_101 ; real32_T
P_102 ; real32_T P_103 ; real32_T P_104 ; real32_T P_105 [ 4 ] ; real32_T
P_106 [ 4 ] ; real32_T P_107 ; real32_T P_108 ; real32_T P_109 ; real32_T
P_110 [ 6 ] ; real32_T P_111 [ 6 ] ; real32_T P_112 ; real32_T P_113 [ 6 ] ;
real32_T P_114 ; real32_T P_115 [ 2 ] ; real32_T P_116 [ 2 ] ; real32_T P_117
; real32_T P_118 [ 2 ] ; real32_T P_119 [ 2 ] ; real32_T P_120 ; real32_T
P_121 [ 6 ] ; real32_T P_122 [ 6 ] ; real32_T P_123 ; real32_T P_124 ;
real32_T P_125 [ 6 ] ; real32_T P_126 [ 6 ] ; real32_T P_127 ; real32_T P_128
; real32_T P_129 ; real32_T P_130 ; real32_T P_131 ; real32_T P_132 ;
real32_T P_133 ; real32_T P_134 ; real32_T P_135 ; real32_T P_136 ; real32_T
P_137 ; real32_T P_138 ; real32_T P_139 ; real32_T P_140 [ 2 ] ; real32_T
P_141 [ 2 ] ; real32_T P_142 ; real32_T P_143 ; real32_T P_144 ; real32_T
P_145 ; real32_T P_146 ; real32_T P_147 ; real32_T P_148 ; real32_T P_149 ;
real32_T P_150 ; real32_T P_151 ; real32_T P_152 ; real32_T P_153 ; real32_T
P_154 ; real32_T P_155 [ 4 ] ; real32_T P_156 ; real32_T P_157 ; real32_T
P_158 ; real32_T P_159 ; real32_T P_160 [ 16 ] ; real32_T P_161 ; real32_T
P_162 ; real32_T P_163 ; real32_T P_164 [ 4 ] ; real32_T P_165 [ 2 ] ;
real32_T P_166 [ 2 ] ; real32_T P_167 ; real32_T P_168 [ 4 ] ; real32_T P_169
[ 4 ] ; real32_T P_170 [ 2 ] ; real32_T P_171 [ 2 ] ; real32_T P_172 [ 4 ] ;
real32_T P_173 ; real32_T P_174 [ 2 ] ; real32_T P_175 [ 4 ] ; real32_T P_176
[ 2 ] ; real32_T P_177 [ 2 ] ; real32_T P_178 ; real32_T P_179 [ 4 ] ;
real32_T P_180 [ 4 ] ; real32_T P_181 [ 2 ] ; real32_T P_182 [ 2 ] ; real32_T
P_183 [ 4 ] ; real32_T P_184 ; real32_T P_185 [ 2 ] ; real32_T P_186 ;
real32_T P_187 ; real32_T P_188 [ 16 ] ; real32_T P_189 [ 8 ] ; real32_T
P_190 [ 8 ] ; real32_T P_191 [ 4 ] ; real32_T P_192 [ 16 ] ; real32_T P_193 [
16 ] ; real32_T P_194 [ 8 ] ; real32_T P_195 [ 8 ] ; real32_T P_196 [ 16 ] ;
real32_T P_197 [ 4 ] ; real32_T P_198 [ 4 ] ; uint32_T P_199 ; uint32_T P_200
; uint32_T P_201 ; uint32_T P_202 ; uint32_T P_203 ; uint32_T P_204 ;
uint32_T P_205 ; uint32_T P_206 ; uint32_T P_207 ; uint16_T P_208 ; uint16_T
P_209 ; uint16_T P_210 ; boolean_T P_211 ; boolean_T P_212 ; boolean_T P_213
; boolean_T P_214 ; boolean_T P_215 ; int8_T P_216 ; int8_T P_217 ; int8_T
P_218 ; int8_T P_219 ; int8_T P_220 ; int8_T P_221 ; int8_T P_222 ; int8_T
P_223 ; uint8_T P_224 ; uint8_T P_225 ; fpqg1jdlo0 ipbtas1tys ; je33m1dqwd
bm3dpymkhz ; fpqg1jdlo0 ifzbhw4mrws ; je33m1dqwd phrpuocqmvu ; bpvdgm2xq5
ciy1c2o0rv ; bpvdgm2xq5 jvbbqhrajh ; bpvdgm2xq5 clwiujjdqo ; bpvdgm2xq5
acfz1zxm4t ; bpvdgm2xq5 ghadbep3bbv ; } ; struct ileg2v2ld1r_ { real_T P_1 ;
real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ;
real_T P_8 ; real_T P_9 ; uint16_T P_10 ; uint16_T P_11 ; uint16_T P_12 ;
uint16_T P_13 ; uint16_T P_14 ; uint16_T P_15 ; uint16_T P_16 ; uint16_T P_17
; uint16_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T P_22 ;
real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T
P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T P_33 ;
real_T P_34 ; real_T P_35 ; real_T P_36 ; nu4qaxumex otjykwnhb3s ; } ; struct
diqjpw4041 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 29 ] ; int32_T * vardimsAddress [
29 ] ; RTWLoggingFcnPtr loggingPtrs [ 29 ] ; sysRanDType * systemRan [ 40 ] ;
int_T systemTid [ 40 ] ; } DataMapInfo ; } ;
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) ((rtm)->DataMapInfo)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) ((rtm)->DataMapInfo = (val))
#endif
#ifndef rtmGetClockTick0
#define rtmGetClockTick0(rtm) ssGetClockTick( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[0])
#endif
#ifndef rtmGetClockTick1
#define rtmGetClockTick1(rtm) ssGetClockTick( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[1])
#endif
#ifndef rtmGetClockTick2
#define rtmGetClockTick2(rtm) ssGetClockTick( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[2])
#endif
#ifndef rtmGetClockTickH0
#define rtmGetClockTickH0(rtm) ssGetClockTickH( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[0])
#endif
#ifndef rtmGetClockTickH1
#define rtmGetClockTickH1(rtm) ssGetClockTickH( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[1])
#endif
#ifndef rtmGetClockTickH2
#define rtmGetClockTickH2(rtm) ssGetClockTickH( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[2])
#endif
#ifndef rtmGetLogOutput
#define rtmGetLogOutput(rtm) ssGetLogOutput((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmSetSampleHit
#define rtmSetSampleHit(rtm, sti, tid, val) _ssSetSampleHit(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti], val)
#endif
#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid) ssIsSampleHit( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti], tid)
#endif
#ifndef rtmGetT
#define rtmGetT(rtm) (ssGetT((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm) (ssGetTFinal((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTNextWasAdjusted
#define rtmGetTNextWasAdjusted(rtm, sti) (ssGetTNextWasAdjusted((rtm)->_mdlRefSfcnS,  nmtwkzsqud[sti]))
#endif
#ifndef rtmGetTStart
#define rtmGetTStart(rtm) (ssGetTStart((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti) ssGetTaskTime( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti])
#endif
#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val) _ssSetTaskTime(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti], val)
#endif
#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm) (ssGetTimeOfLastOutput((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetVarNextHitTime
#define rtmGetVarNextHitTime(rtm, sti) (_ssGetVarNextHitTime((rtm)->_mdlRefSfcnS,  (int)(ssGetOffsetTime(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti+2]))))
#endif
#ifndef rtmSetVarNextHitTime
#define rtmSetVarNextHitTime(rtm, sti, val) ssSetTimeOfNextVarHit((rtm)->_mdlRefSfcnS,  nmtwkzsqud[sti], val)
#endif
typedef struct { ipf5ube4r0 rtm ; } lhjbdsj2rjg ; extern int_T nmtwkzsqud [ 3
] ; extern void ghadbep3bb ( uint8_T * hfpztkhwej , bpvdgm2xq5 * localP ) ;
extern void jfkq2sjtgw ( const real32_T duqg5o24fi [ 4 ] , boolean_T
pfxu5bb25d ) ; extern void gcledvfwzt ( orji2pbk05 * localB , je33m1dqwd *
localP ) ; extern void alfdzl2fz1 ( orji2pbk05 * localB , imbf3wrgri *
localDW , je33m1dqwd * localP ) ; extern void phrpuocqmv ( ipf5ube4r0 * const
accn4cnket , boolean_T hjrswm4ob0 , const real32_T ndqlqfbq0n [ 2 ] ,
real32_T pp4ryk1bnn , const real32_T crftt4mdlv [ 2 ] , const real32_T
pc1pu0u41d [ 2 ] , real32_T kemszrfmdj , real32_T k3tun14l4o , orji2pbk05 *
localB , imbf3wrgri * localDW , je33m1dqwd * localP ) ; extern void
e0j2slboh1 ( dyc32xehtl * localB , fpqg1jdlo0 * localP ) ; extern void
ng2z3yysbc ( dyc32xehtl * localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP
) ; extern void ifzbhw4mrw ( ipf5ube4r0 * const accn4cnket , boolean_T
ny1m4yhfkt , const real32_T izmwj1ddpc [ 2 ] , const real32_T fppyei0jac [ 2
] , real32_T fjag4trd4p , const real32_T fn1cyjs1o0 [ 2 ] , dyc32xehtl *
localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP ) ; extern void
mr51bswvyz ( ipf5ube4r0 * const accn4cnket , dmp1xsadgu * localDW ) ; extern
void ic5jb3movn ( eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex *
localP ) ; extern void bxsrqc204k ( eo4bbte2ey * localB , dmp1xsadgu *
localDW , nu4qaxumex * localP ) ; extern void eyt3piuhqz ( ipf5ube4r0 * const
accn4cnket , dmp1xsadgu * localDW ) ; extern void kegjp2lgms ( eo4bbte2ey *
localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern void
lsjhvu4egy ( eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP
) ; extern void otjykwnhb3 ( ipf5ube4r0 * const accn4cnket , const SensorsBus
* fp0u5nlpgw , real_T bazpfm3cug , real_T a2hdrwexj5 , real_T dlkfhokrcc ,
real_T b5r3ujlawi , real_T nuo5swpl2q , real_T mtniurs2n4 , real_T boqyrw4ssh
, real_T bsz25imoeb , real_T nvm2ratax4 , eo4bbte2ey * localB , dmp1xsadgu *
localDW , nu4qaxumex * localP , ph1mky0ofs * localZCE ) ; extern void
otjykwnhb3TID2 ( eo4bbte2ey * localB , nu4qaxumex * localP ) ; extern void
fqy4gw0ae5 ( boolean_T pt42dvw1sk , izqi5nimcm * localB ) ; extern
ileg2v2ld1r b1hr2q0zjh ; extern lhjbdsj2rjg lhjbdsj2rj ; extern ircitwx3zdm
ksm0js2nhsy ; extern nllkaxiwhzw dqykr4eggmg ; extern cspyln32yuv f51itwtzkqf
;
#endif
