#include "flightControlSystem.h"
#include "rtwtypes.h"
#include "flightControlSystem_private.h"
#include "flightControlSystem_types.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <xmmintrin.h>
#include <string.h>
#include "flightControlSystem_capi.h"
#include "zero_crossing_types.h"
#define cckrydbdlw ((uint8_T)17U)
#define cg5khurvvd ((uint8_T)14U)
#define chw5ba23di ((uint8_T)3U)
#define copkexkjy1 ((uint8_T)12U)
#define cq2i0th5e3 ((uint8_T)13U)
#define cw2tqpfw0t ((uint8_T)18U)
#define czeuhpilph ((uint8_T)7U)
#define dhxeqxuqqo ((uint8_T)6U)
#define fekfxxmyur ((uint8_T)1U)
#define fuxmrh514l ((uint8_T)8U)
#define fvy5irlnap ((uint8_T)0U)
#define gk0cmelazj ((uint8_T)15U)
#define hrn1xlx5ae ((uint8_T)5U)
#define jcoki3flgl ((uint8_T)4U)
#define jlhejdpkzp ((uint8_T)9U)
#define k1hbuaub1g ((uint8_T)10U)
#define kfvrpveo2x ((uint8_T)20U)
#define ky01uxw0lw ((uint8_T)11U)
#define kyx1s2doql ((uint8_T)21U)
#define l4newiasge ((uint8_T)2U)
#define nsrfej23yd ((uint8_T)19U)
#define peq1irly2m ((uint8_T)16U)
int_T nmtwkzsqud [ 3 ] ; static RegMdlInfo rtMdlInfo_flightControlSystem [
225 ] = { { "pj1nqwt2iq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "flightControlSystem" } , { "ik5ctjhsom" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bdiq3bjdmh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "o2xh33mtu3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "kzjbrhb12b" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ke4sum3fak" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "anwtwdjw2n" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bmp3an310u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "jeyq3zyxzx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "gktwwra5px" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ktrp2sgs1c" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "maqsps5gbt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "izqi5nimcm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "pjles00mjh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "hpijc0phcq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "e3kwjfmtyq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gnaa0kdq4f" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "clwgr5jdek" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "hb5mq1jp4d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ibbiqytpnr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "kgkmz2ehxp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lq5gtrqmfy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "i0nykibtoa" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "fpqg1jdlo0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "gabr0rnvjj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dyc32xehtl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gvrocgqiar" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "chqb5yk4na" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ohupmhckxo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "indibvooxj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lwnnlvnhdo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "hxh5tgi533" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "fj00x4sgwu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nqkihlj0vf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ckpmcwhwmu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "l5zi4xqiqo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "je33m1dqwd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "imbf3wrgri" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "orji2pbk05" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "abzv3zworu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "d2thaieuby" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nybory5x2z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "oby15q5y4g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dhaumv5oxy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nlzlprwh35" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ps2hd2ktn0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "jm1sywurry" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "grsgxiu05c" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "gux1we1f0x" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "cfn0s3jrfx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "f3ujivsrsw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "hw3h0zldnq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ezsua5bijx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "omkirkweac" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lrsxga1mux" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "edl35owv4q" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "jig1nknlld" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "npn1dfesfs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "iffergcei1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bsr3dujuk0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "crxyn1tssm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "lwj4qypsny" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bpvdgm2xq5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "hrtts4l5bc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "mqmoncitu3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "k5baggiqtb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ei3m5g1hta" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "hn4i3fu15a" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lbu5phzg3y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "mtaqz0ggi1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "mfdtth4fkl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cn2vepzj0w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dfqhc4tws4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ph1mky0ofs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "femqyyfyjs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nu4qaxumex" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dmp1xsadgu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "eo4bbte2ey" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lhjbdsj2rjg" , MDL_INFO_NAME_MDLREF_DWORK , 0 ,
- 1 , ( void * ) "flightControlSystem" } , { "lhjbdsj2rj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "h5liyesltnn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "k0lgy5kzmig" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "d2rcqsbpxyc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "kekotmnbk54" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "no25hyfktuo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "ht3wudfgy2u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "iesycof4wox" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "eev4eat4b5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "cspyln32yuv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dhuzh5wmni3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "b1hr2q0zjhm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "nllkaxiwhzw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ircitwx3zdm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "h5liyesltn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "k0lgy5kzmi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "d2rcqsbpxy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "kekotmnbk5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "no25hyfktu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ht3wudfgy2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "iesycof4wo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "cspyln32yu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dhuzh5wmni" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "b1hr2q0zjh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "nllkaxiwhz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ircitwx3zd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "b42rzqdx01" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "o2f5l50guo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "m0l5se3ogg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "bog0frvixl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "o5hyd2bjrc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "pyvd4pdf3i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "gwlyno50ln" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ha1ipjbq54" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "f4qzdbbxmw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "k3yxem35zg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dw0zngvhyq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "oeuvf0bmpi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "moftgpdz4d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "goroofzqmu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "d5oean0psr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "mryiknerdk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "jhkyr0ypcs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dnfogptvr5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "obhwn5agnu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "fqy4gw0ae5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "MATLAB Function" } , {
"o0d2t1xos2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "oplbkbi520" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "eyt3piuhqz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "kegjp2lgms" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nwvibpjmp0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "lsjhvu4egy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bxsrqc204k" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ic5jb3movn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "n4xf3lkvmk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cyp5v4ller" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "mr51bswvyz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "otjykwnhb3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Control System" } , {
"o3myonyzve" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cbxjbqi34b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "kwdvu5ctzj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ng2z3yysbc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "e0j2slboh1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "geavflab1i" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lc0erw2cz2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "flqbd5kc2h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ifzbhw4mrw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Enabled Subsystem" } ,
{ "o1pgdacg0u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cxgwlvxv4s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ofaogkyrt4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "alfdzl2fz1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "gcledvfwzt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "flsbajpzfi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "aummrq21x4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dq3x4qvypw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "phrpuocqmv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "MeasurementUpdate" } ,
{ "lfexhnspuh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nbew0lql35" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "o10422rka0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ns1oanlnmc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "i5cf5wjr13" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "pmrewofspm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gabbhpxdh0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cj0oeh3eko" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "jfkq2sjtgw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "SqrtUsedFcn" } , {
"itmfjpgv1o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dychmi5jvf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "okzguhbnst" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gjrgypdhn2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nsvs5ni5i5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "b5nnaqep53" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ghadbep3bb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"Geofencing error" } , { "flightControlSystem" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "d0ohl2eoh0m" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nmtwkzsqud" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "f51itwtzkqf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "dqykr4eggmg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ksm0js2nhsy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ileg2v2ld1r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "diqjpw4041" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ipf5ube4r0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "parrot_ImageProcess1" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_OSJpyIZcrpXqReVWwh9iuG" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_p3FXZIgqtjF2uqDpmYjb6C" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_OMRgDnJcZuQneKEj9vdTyD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_q6UUpnZ4gTjFvULFx6Rxa" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "struct_IZWOW0zYvpphl7qLgSfN7E" , MDL_INFO_ID_DATA_TYPE , 0
, - 1 , ( NULL ) } , { "struct_hxsmtt0xTZOLDNa2Rz7GAF" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_XRMsui9C07VjBvdq1msujB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_eAf0NJvzCY9HYTXF7bLNgB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "SensorsBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_acquisition_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_vbat_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_ultrasound_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_list_echo_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_echo_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_pressure_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_magn_mG_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_fifo_gyro_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_gyro_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_acc_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"extraSensorData_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"CommandBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_iVffV1TBXj5FV1arW9HEXD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_upN04LJx4fKLPytCMWCPsB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_8SSZ93PxvPkADZcA4gG8MD" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_eFnp8sKFNJLN84XLbLzaFF" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_FIfaVnupBjYAxo1EdNiDlF" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_eF5OUT33sX0T9pzS8027m" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) }
, { "struct_LZS2kzYWg8ZnmAKAaEUHJD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_hE1099BMemg5OfzqcWAA6G" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "mr_flightControlSystem_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "flightControlSystem" } , { "mr_flightControlSystem_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"bjqsgn0csy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "flightControlSystem.h" , MDL_INFO_MODEL_FILENAME
, 0 , - 1 , ( NULL ) } , { "flightControlSystem.c" , MDL_INFO_MODEL_FILENAME
, 0 , - 1 , ( void * ) "flightControlSystem" } } ; ileg2v2ld1r b1hr2q0zjh = {
25.0 , 25.0 , 25.0 , 25.0 , 25.0 , 25.0 , 25.0 , 25.0 , 25.0 , 20U , 20U ,
20U , 20U , 20U , 20U , 20U , 20U , 20U , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 ,
2.0 , 2.0 , 2.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , {
50.0 , - 1.0 , 0.8 , 0.4 , 0.1 , 0.0 , { 0.00012F , 9.72E-5F } , { 0.006F ,
0.00486F } , 0.1F , 0.0F , 0.0F , 0.0F , 0.0F , - 0.5F , - 0.34906584F , -
0.02F , { 70.0F , 70.0F } , 0.7F , 0.2F , 4.0F , { 0.003F , 0.00243F } , 0.5F
, 0.34906584F , 0.02F , 10.0F , 10.0F , 6.0F , 6.0F , 0.01F , 0.01F , 6.867F
, 12.753F , - 0.4F , 0.0F , 0.0F , 80.0F , 80.0F , 0.6F , 0.5F , 0.6F , 0.5F
, 7.0F , 7.0F , 5.0F , 5.0F , - 0.4F , 4294967295U , 4294967295U ,
4294967295U , 1U , 800U , 65535U , 100U , 0.0 , 0.0 , 0.0 , - INFINITY , {
3.7568380197512489E-6 , 1.1270514059253748E-5 , 1.1270514059253748E-5 ,
3.7568380197512489E-6 } , { 1.0 , - 2.9371707284498907 , 2.8762997234793319 ,
- 0.939098940325283 } , 0.0 , 0.0 , 1.0 , 0.0 , 0.5 , 600.0 , { 1.0 , 0.0 ,
0.005 , 1.0 } , { 0.0 , 0.005 } , { 1.0 , 0.0 } , { 0.0026241420641871377 ,
0.0069776736071492434 , 0.0069776736071492434 , 0.037607692935053866 } , {
0.026590304322228805 , 0.069776736071491319 } , { 0.02624142064187138 ,
0.069776736071492429 } , 0.0 , { 0.0026948589925820123 ,
0.0071657120718245267 , 0.0071657120718245267 , 0.038107692935053873 } , {
0.0 , 1.0 } , 0.0 , 0.0 , 0.0005 , 0.1 , { - 0.046 , 0.0 } , { 0.0 , 0.0 ,
9.81 } , { 1097.3834951566071 , - 30.388465402648372 , - 30.388465402648375 ,
7.2223686232287516 } , { 0.0011870943291822833 , - 3.2868164179504543E-5 } ,
{ 0.0011869299883613858 , - 3.2868164179504482E-5 } , { 1097.3834951566071 ,
- 30.388465402648372 , - 30.388465402648375 , 7.2223686232287516 } , {
0.0011870943291822833 , - 3.2868164179504543E-5 } , { 0.0011869299883613858 ,
- 3.2868164179504482E-5 } , 0.0 , { 0.0 , 0.0 , - 9.81 } , {
1.3281632400274295 , 0.0 , - 0.43210920795533914 , 0.0 , 0.0 ,
1.3281632400274295 , 0.0 , - 0.43210920795533914 , - 0.43210920795533914 ,
0.0 , 6.147349862376486 , 0.0 , 0.0 , - 0.43210920795533914 , 0.0 ,
6.147349862376486 } , { 0.066516189303360257 , 4.5053399924773407E-19 , -
0.021605460397767236 , 2.4451005888416897E-19 , - 1.4532182529622698E-18 ,
0.066516189303360257 , 4.1595130505436516E-18 , - 0.021605460397767229 } , {
0.066408162001371465 , 0.0 , - 0.021605460397766958 , 0.0 , 0.0 ,
0.066408162001371465 , 0.0 , - 0.021605460397766958 } , 0.45F , 0.8F , 0.5F ,
{ - 1.0F , 1.0F } , 0.00228F , 0.0F , 0.0F , 0.0F , - 1.0F , 1.15F , 0.005F ,
0.0F , - 1.0F , 0.0832137167F , { 3.75683794E-6F , 1.12705138E-5F ,
1.12705138E-5F , 3.75683794E-6F } , { 1.0F , - 2.93717074F , 2.87629962F , -
0.939098954F } , 0.0F , 0.005F , 0.0F , { 0.0F , 0.0F , 9.81F , 0.0F , 0.0F ,
0.0F } , { 0.994075298F , 0.996184587F , 1.00549F , 1.00139189F ,
0.993601203F , 1.00003F } , 0.0F , { 0.0264077242F , 0.140531361F ,
0.33306092F , 0.33306092F , 0.140531361F , 0.0264077242F } , 0.101936802F , {
1.0F , 1.0F } , { 2.5915494F , - 0.591549456F } , 0.0F , { 1.0F , 1.0F } , {
2.5915494F , - 0.591549456F } , 0.0F , { 0.282124132F , 1.27253926F ,
2.42084408F , 2.42084408F , 1.27253926F , 0.282124132F } , { 1.0F ,
2.22871494F , 2.52446198F , 1.57725322F , 0.54102242F , 0.0795623958F } ,
0.0F , - 1.0F , { 0.282124132F , 1.27253926F , 2.42084408F , 2.42084408F ,
1.27253926F , 0.282124132F } , { 1.0F , 2.22871494F , 2.52446198F ,
1.57725322F , 0.54102242F , 0.0795623958F } , 0.0F , 200.0F , 0.0F , 0.0F ,
0.005F , 0.0F , 2.0F , - 2.0F , 0.24F , - 0.61803F , 1.20204329F , -
1.20204329F , 0.005F , { 1.0F , 1.0F } , { 8.95774746F , - 6.95774698F } ,
0.0F , 0.005F , 0.005F , 0.52359879F , - 0.52359879F , 0.004F , 0.005F , 0.0F
, 0.0012F , 0.002F , - 1530.72681F , 500.0F , 10.0F , { 1.0F , - 1.0F , 1.0F
, - 1.0F } , 1.0F , 1.0F , 0.0F , 0.0F , { 0.25F , 0.25F , 0.25F , 0.25F ,
103.573624F , - 103.573624F , 103.573624F , - 103.573624F , - 5.66592F , -
5.66592F , 5.66592F , 5.66592F , - 5.66592F , 5.66592F , 5.66592F , -
5.66592F } , 0.0F , 0.0F , 0.0F , { 1.0F , 0.0F , - 0.005F , 1.0F } , {
0.005F , 0.0F } , { 1.0F , 0.0F } , 0.0F , { 1098.6875F , - 30.4245777F , -
30.4245777F , 7.22336864F } , { 1.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F }
, { 0.0F , 0.0F } , { 1.0F , 0.0F , 0.0F , 0.001F } , 924556.188F , { 0.0F ,
0.0F } , { 1.0F , 0.0F , - 0.005F , 1.0F } , { 0.005F , 0.0F } , { 1.0F ,
0.0F } , 0.0F , { 1098.6875F , - 30.4245777F , - 30.4245777F , 7.22336864F }
, { 1.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F } , { 0.0F , 0.0F } , { 1.0F
, 0.0F , 0.0F , 0.001F } , 924556.188F , { 0.0F , 0.0F } , 0.0F , 2.0F , {
1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F , 0.0F , 0.0F , - 0.005F , 0.0F ,
1.0F , 0.0F , 0.0F , - 0.005F , 0.0F , 1.0F } , { 0.005F , 0.0F , 0.0F , 0.0F
, 0.0F , 0.005F , 0.0F , 0.0F } , { 1.0F , 0.0F , 0.0F , 1.0F , 0.0F , 0.0F ,
0.0F , 0.0F } , { 0.0F , 0.0F , 0.0F , 0.0F } , { 1.42263806F , 0.0F , -
0.462845951F , 0.0F , 0.0F , 1.42263806F , 0.0F , - 0.462845951F , -
0.462845951F , 0.0F , 6.15735F , 0.0F , 0.0F , - 0.462845951F , 0.0F ,
6.15735F } , { 1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F } , { 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F } , { 0.09F , 0.0F , 0.0F , 0.0F , 0.0F , 0.09F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.01F , 0.0F , 0.0F , 0.0F , 0.0F , 0.01F } , { 20.0F ,
0.0F , 0.0F , 20.0F } , { 0.0F , 0.0F , 0.0F , 0.0F } , 0U , 0U , 0U , 1U ,
0U , 1U , 0U , 1U , 0U , 0U , 1U , 0U , false , false , false , false , true
, 1 , - 1 , 1 , - 1 , 1 , - 1 , 1 , - 1 , 1U , 0U , { 0.0F } , { 0.0F } , {
0.0F } , { 0.0F } , { 0U } , { 0U } , { 0U } , { 99U } , { 1U } } } ;
lhjbdsj2rjg lhjbdsj2rj ; ircitwx3zdm ksm0js2nhsy ; nllkaxiwhzw dqykr4eggmg ;
cspyln32yuv f51itwtzkqf ; static void cm4crsavt4 ( real_T bazpfm3cug , real_T
a2hdrwexj5 , real_T dlkfhokrcc , real_T b5r3ujlawi , real_T nuo5swpl2q ,
real_T mtniurs2n4 , dmp1xsadgu * localDW ) ; static void oq2lp35lkg ( real_T
bazpfm3cug , real_T a2hdrwexj5 , real_T dlkfhokrcc , real_T boqyrw4ssh ,
real_T bsz25imoeb , real_T nvm2ratax4 , dmp1xsadgu * localDW ) ; static
real_T cubgdxhir5 ( real_T a , real32_T rad ) ; static real_T fcbmqxomvt (
real_T a , real32_T rad ) ; void ghadbep3bb ( uint8_T * hfpztkhwej ,
bpvdgm2xq5 * localP ) { * hfpztkhwej = localP -> P_0 ; } void jfkq2sjtgw (
const real32_T duqg5o24fi [ 4 ] , boolean_T pfxu5bb25d ) { real32_T
jxk4pp3ocj [ 4 ] ; int32_T i ; real32_T jxk4pp3ocj_tmp ; if ( pfxu5bb25d ) {
for ( i = 0 ; i < 2 ; i ++ ) { jxk4pp3ocj_tmp = duqg5o24fi [ i + 2 ] ;
jxk4pp3ocj [ i ] = jxk4pp3ocj_tmp * duqg5o24fi [ 2 ] + duqg5o24fi [ i ] *
duqg5o24fi [ 0 ] ; jxk4pp3ocj [ i + 2 ] = jxk4pp3ocj_tmp * duqg5o24fi [ 3 ] +
duqg5o24fi [ i ] * duqg5o24fi [ 1 ] ; } } else { for ( i = 0 ; i < 2 ; i ++ )
{ jxk4pp3ocj [ i ] = duqg5o24fi [ i ] ; jxk4pp3ocj [ i + 2 ] = duqg5o24fi [ i
+ 2 ] ; } } } void gcledvfwzt ( orji2pbk05 * localB , je33m1dqwd * localP ) {
localB -> j3s0wrmgla [ 0 ] = localP -> P_0 ; localB -> j3s0wrmgla [ 1 ] =
localP -> P_0 ; } void alfdzl2fz1 ( orji2pbk05 * localB , imbf3wrgri *
localDW , je33m1dqwd * localP ) { localB -> j3s0wrmgla [ 0 ] = localP -> P_0
; localB -> j3s0wrmgla [ 1 ] = localP -> P_0 ; localDW -> jhr0womnye = false
; } void phrpuocqmv ( ipf5ube4r0 * const accn4cnket , boolean_T hjrswm4ob0 ,
const real32_T ndqlqfbq0n [ 2 ] , real32_T pp4ryk1bnn , const real32_T
crftt4mdlv [ 2 ] , const real32_T pc1pu0u41d [ 2 ] , real32_T kemszrfmdj ,
real32_T k3tun14l4o , orji2pbk05 * localB , imbf3wrgri * localDW , je33m1dqwd
* localP ) { real32_T aohxlltyk5 ; real32_T o3nbvws2wj_p ; if ( hjrswm4ob0 )
{ if ( ! localDW -> jhr0womnye ) { if ( rtmGetTaskTime ( accn4cnket , 0 ) !=
rtmGetTStart ( accn4cnket ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; } localDW -> jhr0womnye = true ; } aohxlltyk5
= crftt4mdlv [ 0 ] ; o3nbvws2wj_p = aohxlltyk5 * pc1pu0u41d [ 0 ] ;
aohxlltyk5 = crftt4mdlv [ 1 ] ; o3nbvws2wj_p += aohxlltyk5 * pc1pu0u41d [ 1 ]
; aohxlltyk5 = pp4ryk1bnn - ( kemszrfmdj * k3tun14l4o + o3nbvws2wj_p ) ;
localB -> j3s0wrmgla [ 0 ] = ndqlqfbq0n [ 0 ] * aohxlltyk5 ; localB ->
j3s0wrmgla [ 1 ] = ndqlqfbq0n [ 1 ] * aohxlltyk5 ; srUpdateBC ( localDW ->
mkkaskumzr ) ; } else if ( localDW -> jhr0womnye ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
alfdzl2fz1 ( localB , localDW , localP ) ; } } void e0j2slboh1 ( dyc32xehtl *
localB , fpqg1jdlo0 * localP ) { localB -> alkayrprb0 [ 0 ] = localP -> P_0 ;
localB -> alkayrprb0 [ 1 ] = localP -> P_0 ; } void ng2z3yysbc ( dyc32xehtl *
localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP ) { localB -> alkayrprb0
[ 0 ] = localP -> P_0 ; localB -> alkayrprb0 [ 1 ] = localP -> P_0 ; localDW
-> njk4w5jozv = false ; } void ifzbhw4mrw ( ipf5ube4r0 * const accn4cnket ,
boolean_T ny1m4yhfkt , const real32_T izmwj1ddpc [ 2 ] , const real32_T
fppyei0jac [ 2 ] , real32_T fjag4trd4p , const real32_T fn1cyjs1o0 [ 2 ] ,
dyc32xehtl * localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP ) { real32_T
mjzsyo5ls5 ; real32_T tmp ; if ( ny1m4yhfkt ) { if ( ! localDW -> njk4w5jozv
) { if ( rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> njk4w5jozv = true ; } tmp = fppyei0jac [ 0 ] ; mjzsyo5ls5 = tmp *
fn1cyjs1o0 [ 0 ] ; tmp = fppyei0jac [ 1 ] ; mjzsyo5ls5 += tmp * fn1cyjs1o0 [
1 ] ; mjzsyo5ls5 = fjag4trd4p - mjzsyo5ls5 ; tmp = izmwj1ddpc [ 0 ] *
mjzsyo5ls5 ; mjzsyo5ls5 *= izmwj1ddpc [ 1 ] ; localB -> alkayrprb0 [ 0 ] =
tmp ; localB -> alkayrprb0 [ 1 ] = mjzsyo5ls5 ; srUpdateBC ( localDW ->
ley0an2uip ) ; } else if ( localDW -> njk4w5jozv ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
ng2z3yysbc ( localB , localDW , localP ) ; } } static void cm4crsavt4 (
real_T bazpfm3cug , real_T a2hdrwexj5 , real_T dlkfhokrcc , real_T b5r3ujlawi
, real_T nuo5swpl2q , real_T mtniurs2n4 , dmp1xsadgu * localDW ) { if ( (
a2hdrwexj5 == 1.0 ) && ( nuo5swpl2q == 1.0 ) ) { localDW -> bjkftgumd3 =
hrn1xlx5ae ; } else if ( ( a2hdrwexj5 == 0.0 ) && ( localDW -> b2z5wyyedu ==
0.0 ) ) { localDW -> ibeh2pu5t0 = 0.0 ; localDW -> fa1jgcut3x = 0U ; localDW
-> bjkftgumd3 = peq1irly2m ; } else if ( ( dlkfhokrcc == 1.0 ) || (
mtniurs2n4 == 1.0 ) ) { localDW -> bjkftgumd3 = copkexkjy1 ; } else if ( ( (
bazpfm3cug == 1.0 ) || ( b5r3ujlawi == 1.0 ) ) && ( localDW -> b2z5wyyedu ==
1.0 ) ) { localDW -> bjkftgumd3 = fuxmrh514l ; } } static void oq2lp35lkg (
real_T bazpfm3cug , real_T a2hdrwexj5 , real_T dlkfhokrcc , real_T boqyrw4ssh
, real_T bsz25imoeb , real_T nvm2ratax4 , dmp1xsadgu * localDW ) { if ( ! ( (
( bazpfm3cug == dlkfhokrcc ) == boqyrw4ssh ) == nvm2ratax4 ) ) { localDW ->
bjkftgumd3 = czeuhpilph ; } else if ( ( bazpfm3cug == 1.0 ) && ( bsz25imoeb
== 1.0 ) && ( a2hdrwexj5 == 0.0 ) ) { localDW -> bjkftgumd3 = jlhejdpkzp ; }
else if ( ( dlkfhokrcc == 1.0 ) && ( bsz25imoeb == 1.0 ) && ( a2hdrwexj5 ==
0.0 ) ) { localDW -> bjkftgumd3 = cq2i0th5e3 ; } else if ( ( dlkfhokrcc ==
1.0 ) && ( nvm2ratax4 == 1.0 ) ) { localDW -> bjkftgumd3 = kyx1s2doql ; }
else if ( ( bazpfm3cug == 1.0 ) && ( boqyrw4ssh == 1.0 ) ) { localDW ->
bjkftgumd3 = kfvrpveo2x ; } } static real_T cubgdxhir5 ( real_T a , real32_T
rad ) { return ( real32_T ) a * muSingleScalarCos ( rad ) ; } static real_T
fcbmqxomvt ( real_T a , real32_T rad ) { return ( real32_T ) a *
muSingleScalarSin ( rad ) ; } void mr51bswvyz ( ipf5ube4r0 * const accn4cnket
, dmp1xsadgu * localDW ) { if ( ( ssGetSimMode ( accn4cnket -> _mdlRefSfcnS )
!= SS_SIMMODE_EXTERNAL ) && ( ( accn4cnket -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( accn4cnket ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( accn4cnket
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"State Estimator:1" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "State Estimator:1" ) ; sdiLabelU
blockPath = sdiGetLabelFromChars (
"flightControlSystem/Control System/To Workspace" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray
[ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars ( "State Estimator:1" ) ;
sdiAsyncQueueHandle hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_SINGLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 12 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( accn4cnket
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , accn4cnket ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; { sdiLabelU varName = sdiGetLabelFromChars (
"estimatedStates" ) ; sdiRegisterWksVariable ( hForEachParent , varName ,
"structwithtime" ) ; sdiFreeLabel ( varName ) ; }
sdiAsyncRepoSetBlockPathDomain ( hForEachParent ) ;
isStreamoutAlreadyRegistered = true ; } localDW -> puq03cpvbg . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , accn4cnket -> DataMapInfo .
mmi . InstanceMap . fullPath , "be0c5931-f9cb-4326-b1b0-11db9823fbe0" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> puq03cpvbg . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> puq03cpvbg . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> puq03cpvbg . AQHandles , "0.005" ,
0.005 , rtmGetTFinal ( accn4cnket ) ) ; sdiSetSignalRefRate ( localDW ->
puq03cpvbg . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> puq03cpvbg .
AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> puq03cpvbg . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> puq03cpvbg . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain (
localDW -> puq03cpvbg . AQHandles ) ; if ( forEachMdlRefDims . nDims > 0 ) {
sdiAttachForEachIterationToParent ( hForEachParent , localDW -> puq03cpvbg .
AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) { sdiFreeName
( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ;
sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ; sdiFreeLabel (
subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { { sdiLabelU varName =
sdiGetLabelFromChars ( "estimatedStates" ) ; sdiRegisterWksVariable ( localDW
-> puq03cpvbg . AQHandles , varName , "structwithtime" ) ; sdiFreeLabel (
varName ) ; } } } } } } void ic5jb3movn ( eo4bbte2ey * localB , dmp1xsadgu *
localDW , nu4qaxumex * localP ) { int32_T i ; localDW -> b3fmbw5stg [ 0 ] =
localP -> P_102 ; localDW -> b3fmbw5stg [ 1 ] = localP -> P_102 ; localDW ->
dq5lalhp1e = 2 ; localDW -> mi4mocbazh = localP -> P_55 ; localDW ->
de4yc1bkky = true ; localDW -> aq2aymvaio [ 0 ] = localP -> P_107 ; localDW
-> ddv3ztj2wp [ 0 ] = localP -> P_59 ; localDW -> aq2aymvaio [ 1 ] = localP
-> P_107 ; localDW -> ddv3ztj2wp [ 1 ] = localP -> P_59 ; localDW ->
aq2aymvaio [ 2 ] = localP -> P_107 ; localDW -> ddv3ztj2wp [ 2 ] = localP ->
P_59 ; localDW -> dzwopklw3c = localP -> P_109 ; localDW -> bbkjtf4kuy = 0 ;
for ( i = 0 ; i < 15 ; i ++ ) { localDW -> d4fp3a2mpz [ i ] = localP -> P_112
; } localDW -> jd3dqtmo2p = true ; localDW -> f1jy25gy04 = true ; localDW ->
l3lcputuyl = localP -> P_199 ; localDW -> ncgo1wegzg = localP -> P_117 ;
localDW -> mirtkskmtr = localP -> P_120 ; for ( i = 0 ; i < 5 ; i ++ ) {
localDW -> jduomia1pb [ i ] = localP -> P_123 ; } localDW -> pjgu33zeph =
localP -> P_200 ; localDW -> gdn4qfzvsk = true ; for ( i = 0 ; i < 10 ; i ++
) { localDW -> dqfv1m130o [ i ] = localP -> P_127 ; } localDW -> gaxgdudnvc =
localP -> P_208 ; localDW -> bsetqjfri4 = localP -> P_132 ; localDW ->
fpr1qi0oiw = 2 ; localDW -> meognsjf1t [ 0 ] = localP -> P_9 ; localDW ->
gcgpru4rcb [ 0 ] = localP -> P_129 ; localDW -> peklmaellz [ 0 ] = localP ->
P_130 ; localDW -> dsjbzv2lh4 [ 0 ] = localP -> P_11 ; localDW -> gixvkpnpus
[ 0 ] = localP -> P_142 ; localDW -> ow5xb5ovt0 [ 0 ] = localP -> P_12 ;
localDW -> krs1cvkxzk [ 0 ] = localP -> P_10 ; localDW -> meognsjf1t [ 1 ] =
localP -> P_9 ; localDW -> gcgpru4rcb [ 1 ] = localP -> P_129 ; localDW ->
peklmaellz [ 1 ] = localP -> P_130 ; localDW -> dsjbzv2lh4 [ 1 ] = localP ->
P_11 ; localDW -> gixvkpnpus [ 1 ] = localP -> P_142 ; localDW -> ow5xb5ovt0
[ 1 ] = localP -> P_12 ; localDW -> krs1cvkxzk [ 1 ] = localP -> P_10 ;
localDW -> c4kiksmhh2 = localP -> P_149 ; localDW -> dxm3w2i52x = localP ->
P_201 ; localDW -> bw2ribqmwm = localP -> P_60 ; localB -> i45gejc5xa =
localP -> P_225 ; localDW -> fa1jgcut3x = 0U ; localB -> affqggdog2 = 0.0 ;
localB -> c2fzqyltnh = 0.0 ; localB -> nzr5yspjzx = 0.0 ; localB ->
pcgqi2scre = 0.0F ; localDW -> b2z5wyyedu = 0.0 ; localDW -> ibeh2pu5t0 = 0.0
; localDW -> e3uw2ubplh = 0U ; localDW -> bjkftgumd3 = fvy5irlnap ; localB ->
i5xc4ys2pt [ 0 ] = localP -> P_53 ; localB -> lioxwl1iar [ 0 ] = localP ->
P_54 ; localB -> i5xc4ys2pt [ 1 ] = localP -> P_53 ; localB -> lioxwl1iar [ 1
] = localP -> P_54 ; gcledvfwzt ( & localB -> phrpuocqmvu , & localP ->
phrpuocqmvu ) ; e0j2slboh1 ( & localB -> ifzbhw4mrws , & localP ->
ifzbhw4mrws ) ; gcledvfwzt ( & localB -> bm3dpymkhz , & localP -> bm3dpymkhz
) ; e0j2slboh1 ( & localB -> ipbtas1tys , & localP -> ipbtas1tys ) ; localB
-> bipj5wkt3o = localP -> P_96 ; localB -> duo1hld4hb [ 0 ] = localP -> P_97
; localB -> ogmg0lyqxp [ 0 ] = localP -> P_98 ; localB -> duo1hld4hb [ 1 ] =
localP -> P_97 ; localB -> ogmg0lyqxp [ 1 ] = localP -> P_98 ; localB ->
duo1hld4hb [ 2 ] = localP -> P_97 ; localB -> ogmg0lyqxp [ 2 ] = localP ->
P_98 ; localB -> duo1hld4hb [ 3 ] = localP -> P_97 ; localB -> ogmg0lyqxp [ 3
] = localP -> P_98 ; } void bxsrqc204k ( eo4bbte2ey * localB , dmp1xsadgu *
localDW , nu4qaxumex * localP ) { int32_T i ; localDW -> b3fmbw5stg [ 0 ] =
localP -> P_102 ; localDW -> b3fmbw5stg [ 1 ] = localP -> P_102 ; localDW ->
dq5lalhp1e = 2 ; localDW -> mi4mocbazh = localP -> P_55 ; localDW ->
de4yc1bkky = true ; localDW -> aq2aymvaio [ 0 ] = localP -> P_107 ; localDW
-> ddv3ztj2wp [ 0 ] = localP -> P_59 ; localDW -> aq2aymvaio [ 1 ] = localP
-> P_107 ; localDW -> ddv3ztj2wp [ 1 ] = localP -> P_59 ; localDW ->
aq2aymvaio [ 2 ] = localP -> P_107 ; localDW -> ddv3ztj2wp [ 2 ] = localP ->
P_59 ; localDW -> dzwopklw3c = localP -> P_109 ; localDW -> bbkjtf4kuy = 0 ;
for ( i = 0 ; i < 15 ; i ++ ) { localDW -> d4fp3a2mpz [ i ] = localP -> P_112
; } localDW -> jd3dqtmo2p = true ; localDW -> f1jy25gy04 = true ; localDW ->
l3lcputuyl = localP -> P_199 ; localDW -> ncgo1wegzg = localP -> P_117 ;
localDW -> mirtkskmtr = localP -> P_120 ; for ( i = 0 ; i < 5 ; i ++ ) {
localDW -> jduomia1pb [ i ] = localP -> P_123 ; } localDW -> pjgu33zeph =
localP -> P_200 ; localDW -> gdn4qfzvsk = true ; for ( i = 0 ; i < 10 ; i ++
) { localDW -> dqfv1m130o [ i ] = localP -> P_127 ; } localDW -> gaxgdudnvc =
localP -> P_208 ; localDW -> bsetqjfri4 = localP -> P_132 ; localDW ->
fpr1qi0oiw = 2 ; localDW -> meognsjf1t [ 0 ] = localP -> P_9 ; localDW ->
gcgpru4rcb [ 0 ] = localP -> P_129 ; localDW -> peklmaellz [ 0 ] = localP ->
P_130 ; localDW -> dsjbzv2lh4 [ 0 ] = localP -> P_11 ; localDW -> gixvkpnpus
[ 0 ] = localP -> P_142 ; localDW -> ow5xb5ovt0 [ 0 ] = localP -> P_12 ;
localDW -> krs1cvkxzk [ 0 ] = localP -> P_10 ; localDW -> meognsjf1t [ 1 ] =
localP -> P_9 ; localDW -> gcgpru4rcb [ 1 ] = localP -> P_129 ; localDW ->
peklmaellz [ 1 ] = localP -> P_130 ; localDW -> dsjbzv2lh4 [ 1 ] = localP ->
P_11 ; localDW -> gixvkpnpus [ 1 ] = localP -> P_142 ; localDW -> ow5xb5ovt0
[ 1 ] = localP -> P_12 ; localDW -> krs1cvkxzk [ 1 ] = localP -> P_10 ;
localDW -> c4kiksmhh2 = localP -> P_149 ; localDW -> dxm3w2i52x = localP ->
P_201 ; localDW -> bw2ribqmwm = localP -> P_60 ; localDW -> fa1jgcut3x = 0U ;
localB -> affqggdog2 = 0.0 ; localB -> c2fzqyltnh = 0.0 ; localB ->
nzr5yspjzx = 0.0 ; localB -> pcgqi2scre = 0.0F ; localDW -> b2z5wyyedu = 0.0
; localDW -> ibeh2pu5t0 = 0.0 ; localDW -> e3uw2ubplh = 0U ; localDW ->
bjkftgumd3 = fvy5irlnap ; } void kegjp2lgms ( eo4bbte2ey * localB ,
dmp1xsadgu * localDW , nu4qaxumex * localP ) { if ( localDW -> g4zcogq4xi ) {
localB -> i5xc4ys2pt [ 0 ] = localP -> P_53 ; localB -> i5xc4ys2pt [ 1 ] =
localP -> P_53 ; localDW -> g4zcogq4xi = false ; } if ( localDW -> iftedegxuv
) { localB -> lioxwl1iar [ 0 ] = localP -> P_54 ; localB -> lioxwl1iar [ 1 ]
= localP -> P_54 ; localDW -> iftedegxuv = false ; } if ( localDW ->
kh1khihcrt ) { localB -> duo1hld4hb [ 0 ] = localP -> P_97 ; localB ->
duo1hld4hb [ 1 ] = localP -> P_97 ; localB -> duo1hld4hb [ 2 ] = localP ->
P_97 ; localB -> duo1hld4hb [ 3 ] = localP -> P_97 ; localDW -> kh1khihcrt =
false ; } if ( localDW -> cqi2pi21ow ) { localB -> ogmg0lyqxp [ 0 ] = localP
-> P_98 ; localB -> ogmg0lyqxp [ 1 ] = localP -> P_98 ; localB -> ogmg0lyqxp
[ 2 ] = localP -> P_98 ; localB -> ogmg0lyqxp [ 3 ] = localP -> P_98 ;
localDW -> cqi2pi21ow = false ; } if ( localDW -> ifzbhw4mrws . njk4w5jozv )
{ ng2z3yysbc ( & localB -> ifzbhw4mrws , & localDW -> ifzbhw4mrws , & localP
-> ifzbhw4mrws ) ; } if ( localDW -> ipbtas1tys . njk4w5jozv ) { ng2z3yysbc (
& localB -> ipbtas1tys , & localDW -> ipbtas1tys , & localP -> ipbtas1tys ) ;
} if ( localDW -> phrpuocqmvu . jhr0womnye ) { alfdzl2fz1 ( & localB ->
phrpuocqmvu , & localDW -> phrpuocqmvu , & localP -> phrpuocqmvu ) ; } if (
localDW -> bm3dpymkhz . jhr0womnye ) { alfdzl2fz1 ( & localB -> bm3dpymkhz ,
& localDW -> bm3dpymkhz , & localP -> bm3dpymkhz ) ; } } void otjykwnhb3 (
ipf5ube4r0 * const accn4cnket , const SensorsBus * fp0u5nlpgw , real_T
bazpfm3cug , real_T a2hdrwexj5 , real_T dlkfhokrcc , real_T b5r3ujlawi ,
real_T nuo5swpl2q , real_T mtniurs2n4 , real_T boqyrw4ssh , real_T bsz25imoeb
, real_T nvm2ratax4 , eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex
* localP , ph1mky0ofs * localZCE ) { int_T tid = 0 ; __m128 tmp ; __m128
tmp_e ; __m128 tmp_i ; __m128 tmp_p ; __m128d tmp_g ; __m128d tmp_j ; __m128d
tmp_m ; if ( localP -> P_215 && ( localDW -> dq5lalhp1e <= 0 ) ) { localDW ->
b3fmbw5stg [ 0 ] = localP -> P_102 ; localDW -> b3fmbw5stg [ 1 ] = localP ->
P_102 ; } localB -> dr05xp1kkz_idx_0 = localDW -> b3fmbw5stg [ 0 ] ; localB
-> dr05xp1kkz_idx_1 = localDW -> b3fmbw5stg [ 1 ] ; localB -> lieouyr513 = (
real_T ) localP -> P_103 * fp0u5nlpgw -> HALSensors . HAL_ultrasound_SI .
altitude ; localB -> pjwac0m43u_nz4o0shxby = localB -> lieouyr513 ; localB ->
jxjxbnzfyd = ( localDW -> mi4mocbazh > localP -> P_5 ) ; localDW ->
de4yc1bkky = ( localB -> jxjxbnzfyd || localDW -> de4yc1bkky ) ; if ( localDW
-> de4yc1bkky ) { localDW -> mtonzezz2z [ 0 ] = localB -> pxw0oa3g5v [ 0 ] ;
localDW -> mtonzezz2z [ 1 ] = localB -> pxw0oa3g5v [ 1 ] ; } localB ->
ptk50tju32_idx_0 = localDW -> mtonzezz2z [ 0 ] ; localB -> ptk50tju32_idx_1 =
localDW -> mtonzezz2z [ 1 ] ; localDW -> orkq4iljgu = ( ( ( ( fp0u5nlpgw ->
HALSensors . HAL_pressure_SI . pressure - fp0u5nlpgw -> SensorCalibration [ 6
] ) * localP -> P_104 - localDW -> aq2aymvaio [ 0 ] * localP -> P_106 [ 1 ] )
- localDW -> aq2aymvaio [ 1 ] * localP -> P_106 [ 2 ] ) - localDW ->
aq2aymvaio [ 2 ] * localP -> P_106 [ 3 ] ) / localP -> P_106 [ 0 ] ; localB
-> oo5vwsdpyd_dapv3jlyq5 = ( ( localP -> P_105 [ 0 ] * localDW -> orkq4iljgu
+ localDW -> aq2aymvaio [ 0 ] * localP -> P_105 [ 1 ] ) + localDW ->
aq2aymvaio [ 1 ] * localP -> P_105 [ 2 ] ) + localDW -> aq2aymvaio [ 2 ] *
localP -> P_105 [ 3 ] ; localDW -> f2ynnmexgv = ( ( ( localB -> lieouyr513 -
localDW -> ddv3ztj2wp [ 0 ] * localP -> P_58 [ 1 ] ) - localDW -> ddv3ztj2wp
[ 1 ] * localP -> P_58 [ 2 ] ) - localDW -> ddv3ztj2wp [ 2 ] * localP -> P_58
[ 3 ] ) / localP -> P_58 [ 0 ] ; if ( localB -> lieouyr513 > - rtP_Sensors .
altSensorMin ) { localB -> psyg3horlh_ppxrqq0gsf = - rtP_Sensors .
altSensorMin ; } else if ( localB -> lieouyr513 < localP -> P_56 ) { localB
-> psyg3horlh_ppxrqq0gsf = localP -> P_56 ; } else { localB ->
psyg3horlh_ppxrqq0gsf = localB -> lieouyr513 ; } localB -> lelq0j53uf = ( (
muDoubleScalarAbs ( localDW -> mi4mocbazh - localB -> psyg3horlh_ppxrqq0gsf )
<= localP -> P_4 ) && ( localB -> lieouyr513 < - rtP_Sensors . altSensorMin )
&& ( ( ! ( muDoubleScalarAbs ( localB -> oo5vwsdpyd_dapv3jlyq5 - localDW ->
mi4mocbazh ) >= localP -> P_2 ) ) || ( ! ( muDoubleScalarAbs ( ( ( ( localP
-> P_57 [ 0 ] * localDW -> f2ynnmexgv + localDW -> ddv3ztj2wp [ 0 ] * localP
-> P_57 [ 1 ] ) + localDW -> ddv3ztj2wp [ 1 ] * localP -> P_57 [ 2 ] ) +
localDW -> ddv3ztj2wp [ 2 ] * localP -> P_57 [ 3 ] ) - localDW -> mi4mocbazh
) >= localP -> P_3 ) ) ) ) ; localB -> gosyl3wdxv_afnsueciae = localB ->
lelq0j53uf ; localB -> ot24enspej_ifotjnizh4 = localB -> lelq0j53uf ; if (
localB -> ot24enspej_ifotjnizh4 ) { if ( ! localDW -> iftedegxuv ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> iftedegxuv = true ; } tmp_m = _mm_mul_pd ( _mm_loadu_pd ( & localB
-> m33qvduepv [ 0 ] ) , _mm_set1_pd ( localB -> pjwac0m43u_nz4o0shxby - (
localP -> P_67 [ 0 ] * localB -> ptk50tju32_idx_0 + localP -> P_67 [ 1 ] *
localB -> ptk50tju32_idx_1 ) ) ) ; _mm_storeu_pd ( & localB -> lioxwl1iar [ 0
] , tmp_m ) ; srUpdateBC ( localDW -> mgysgsd2g4 ) ; } else if ( localDW ->
iftedegxuv ) { ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket ->
_mdlRefSfcnS ) ; localB -> lioxwl1iar [ 0 ] = localP -> P_54 ; localB ->
lioxwl1iar [ 1 ] = localP -> P_54 ; localDW -> iftedegxuv = false ; } tmp_m =
_mm_add_pd ( _mm_loadu_pd ( & localB -> lioxwl1iar [ 0 ] ) , _mm_set_pd (
localB -> ptk50tju32_idx_1 , localB -> ptk50tju32_idx_0 ) ) ; _mm_storeu_pd (
& localB -> mlxcplakjs [ 0 ] , tmp_m ) ; localB -> ce0g14gyt3_ezqlmfzvpq = (
real32_T ) localB -> mlxcplakjs [ 0 ] ; localB -> mvpuhqqzt1_nuebgmauvi =
localDW -> dzwopklw3c ; for ( localB -> i = 0 ; localB -> i <= 0 ; localB ->
i += 4 ) { _mm_storeu_ps ( & localB -> ci4d4u2maw [ localB -> i ] ,
_mm_add_ps ( _mm_loadu_ps ( & fp0u5nlpgw -> SensorCalibration [ localB -> i ]
) , _mm_loadu_ps ( & localP -> P_110 [ localB -> i ] ) ) ) ; } for ( localB
-> i = 4 ; localB -> i < 6 ; localB -> i ++ ) { localB -> ci4d4u2maw [ localB
-> i ] = fp0u5nlpgw -> SensorCalibration [ localB -> i ] + localP -> P_110 [
localB -> i ] ; } localB -> ii0wg3e1gg_idx_2 = localB -> ci4d4u2maw [ 0 ] ;
localB -> pr3cy3ex2z_bsqwvugooi = localB -> ci4d4u2maw [ 1 ] ; localB ->
fa3deew24c_idx_0 = localB -> ci4d4u2maw [ 2 ] ; localB -> acc1 = localB ->
ci4d4u2maw [ 3 ] ; localB -> ppg2d1lxzx_lnjdk5wtww = localB -> ci4d4u2maw [ 4
] ; localB -> oo5ahigr24_hv2ho1zopz = localB -> ci4d4u2maw [ 5 ] ; localB ->
ci4d4u2maw [ 0 ] = fp0u5nlpgw -> HALSensors . HAL_acc_SI . x - localB ->
ii0wg3e1gg_idx_2 ; localB -> ci4d4u2maw [ 1 ] = fp0u5nlpgw -> HALSensors .
HAL_acc_SI . y - localB -> pr3cy3ex2z_bsqwvugooi ; localB -> ci4d4u2maw [ 2 ]
= fp0u5nlpgw -> HALSensors . HAL_acc_SI . z - localB -> fa3deew24c_idx_0 ;
localB -> ci4d4u2maw [ 3 ] = fp0u5nlpgw -> HALSensors . HAL_gyro_SI . x -
localB -> acc1 ; localB -> ci4d4u2maw [ 4 ] = fp0u5nlpgw -> HALSensors .
HAL_gyro_SI . y - localB -> ppg2d1lxzx_lnjdk5wtww ; localB -> ci4d4u2maw [ 5
] = fp0u5nlpgw -> HALSensors . HAL_gyro_SI . z - localB ->
oo5ahigr24_hv2ho1zopz ; for ( localB -> i = 0 ; localB -> i < 6 ; localB -> i
++ ) { localB -> ci4d4u2maw [ localB -> i ] *= localP -> P_111 [ localB -> i
] ; } localB -> acc1 = localB -> ci4d4u2maw [ 0 ] * localP -> P_113 [ 0 ] ;
localB -> cff = 1 ; localB -> i = localDW -> bbkjtf4kuy ; while ( localB -> i
< 5 ) { localB -> acc1 += localDW -> d4fp3a2mpz [ localB -> i ] * localP ->
P_113 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB -> i =
0 ; while ( localB -> i < localDW -> bbkjtf4kuy ) { localB -> acc1 += localDW
-> d4fp3a2mpz [ localB -> i ] * localP -> P_113 [ localB -> cff ] ; localB ->
cff ++ ; localB -> i ++ ; } localB -> fagex23bbr_g1smspu5ke [ 0 ] = localB ->
acc1 ; localB -> acc1 = localP -> P_113 [ 0 ] * localB -> ci4d4u2maw [ 1 ] ;
localB -> cff = 1 ; localB -> i = localDW -> bbkjtf4kuy ; while ( localB -> i
< 5 ) { localB -> acc1 += localDW -> d4fp3a2mpz [ localB -> i + 5 ] * localP
-> P_113 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB ->
i = 0 ; while ( localB -> i < localDW -> bbkjtf4kuy ) { localB -> acc1 +=
localDW -> d4fp3a2mpz [ localB -> i + 5 ] * localP -> P_113 [ localB -> cff ]
; localB -> cff ++ ; localB -> i ++ ; } localB -> fagex23bbr_g1smspu5ke [ 1 ]
= localB -> acc1 ; localB -> acc1 = localP -> P_113 [ 0 ] * localB ->
ci4d4u2maw [ 2 ] ; localB -> cff = 1 ; localB -> i = localDW -> bbkjtf4kuy ;
while ( localB -> i < 5 ) { localB -> acc1 += localDW -> d4fp3a2mpz [ localB
-> i + 10 ] * localP -> P_113 [ localB -> cff ] ; localB -> cff ++ ; localB
-> i ++ ; } localB -> i = 0 ; while ( localB -> i < localDW -> bbkjtf4kuy ) {
localB -> acc1 += localDW -> d4fp3a2mpz [ localB -> i + 10 ] * localP ->
P_113 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB ->
fagex23bbr_g1smspu5ke [ 2 ] = localB -> acc1 ; localB -> ii0wg3e1gg_idx_2 =
localP -> P_114 * localB -> fagex23bbr_g1smspu5ke [ 0 ] ; if ( localB ->
ii0wg3e1gg_idx_2 > 1.0F ) { localB -> ii0wg3e1gg_idx_2 = 1.0F ; } else if (
localB -> ii0wg3e1gg_idx_2 < - 1.0F ) { localB -> ii0wg3e1gg_idx_2 = - 1.0F ;
} localB -> lye2s42l5j = muSingleScalarAsin ( localB -> ii0wg3e1gg_idx_2 ) ;
localB -> djurzzuybk_nyxm0bsxsn = localB -> lye2s42l5j ; if ( localDW ->
jd3dqtmo2p ) { localDW -> fl0vv44tbs [ 0 ] = localB -> kd1mn2gm1l [ 0 ] ;
localDW -> fl0vv44tbs [ 1 ] = localB -> kd1mn2gm1l [ 1 ] ; } localB ->
o3o03d4pvs_ldqodwenvz [ 0 ] = localDW -> fl0vv44tbs [ 0 ] ; localB ->
o3o03d4pvs_ldqodwenvz [ 1 ] = localDW -> fl0vv44tbs [ 1 ] ; localB ->
ii0wg3e1gg_idx_2 = muSingleScalarFloor ( localP -> P_187 ) ; if ( ( localB ->
fagex23bbr_g1smspu5ke [ 0 ] < 0.0F ) && ( localP -> P_187 > localB ->
ii0wg3e1gg_idx_2 ) ) { localB -> pr3cy3ex2z_bsqwvugooi = -
muSingleScalarPower ( - localB -> fagex23bbr_g1smspu5ke [ 0 ] , localP ->
P_187 ) ; } else { localB -> pr3cy3ex2z_bsqwvugooi = muSingleScalarPower (
localB -> fagex23bbr_g1smspu5ke [ 0 ] , localP -> P_187 ) ; } if ( ( localB
-> fagex23bbr_g1smspu5ke [ 1 ] < 0.0F ) && ( localP -> P_187 > localB ->
ii0wg3e1gg_idx_2 ) ) { localB -> fa3deew24c_idx_0 = - muSingleScalarPower ( -
localB -> fagex23bbr_g1smspu5ke [ 1 ] , localP -> P_187 ) ; } else { localB
-> fa3deew24c_idx_0 = muSingleScalarPower ( localB -> fagex23bbr_g1smspu5ke [
1 ] , localP -> P_187 ) ; } if ( ( localB -> acc1 < 0.0F ) && ( localP ->
P_187 > localB -> ii0wg3e1gg_idx_2 ) ) { localB -> ii0wg3e1gg_idx_2 = -
muSingleScalarPower ( - localB -> acc1 , localP -> P_187 ) ; } else { localB
-> ii0wg3e1gg_idx_2 = muSingleScalarPower ( localB -> acc1 , localP -> P_187
) ; } localB -> pr3cy3ex2z_bsqwvugooi = muSingleScalarSqrt ( ( localB ->
pr3cy3ex2z_bsqwvugooi + localB -> fa3deew24c_idx_0 ) + localB ->
ii0wg3e1gg_idx_2 ) ; localB -> nvseztmzon = ( int16_T ) ( ( localB ->
pr3cy3ex2z_bsqwvugooi > localP -> P_30 ) && ( localB -> pr3cy3ex2z_bsqwvugooi
< localP -> P_31 ) ) ; localB -> k30khq2sgq_evg4t2fsev = ( localB ->
nvseztmzon != 0 ) ; localB -> o4wox0ml4a_ltu3syw14q = ( localB -> nvseztmzon
!= 0 ) ; ifzbhw4mrw ( accn4cnket , localB -> o4wox0ml4a_ltu3syw14q , localB
-> mouuzp511w , localP -> P_166 , localB -> djurzzuybk_nyxm0bsxsn , localB ->
o3o03d4pvs_ldqodwenvz , & localB -> ifzbhw4mrws , & localDW -> ifzbhw4mrws ,
& localP -> ifzbhw4mrws ) ; localB -> dzdbq3k05m_jwzvbuczlb [ 0 ] = localB ->
ifzbhw4mrws . alkayrprb0 [ 0 ] + localB -> o3o03d4pvs_ldqodwenvz [ 0 ] ;
localB -> dzdbq3k05m_jwzvbuczlb [ 1 ] = localB -> ifzbhw4mrws . alkayrprb0 [
1 ] + localB -> o3o03d4pvs_ldqodwenvz [ 1 ] ; localB -> gi2zucrzpq =
muSingleScalarAtan ( localB -> fagex23bbr_g1smspu5ke [ 1 ] / localB -> acc1 )
; localB -> iytlbzpr4u_icdfyazkhu = localB -> gi2zucrzpq ; if ( localDW ->
f1jy25gy04 ) { localDW -> as5a0ikbk1 [ 0 ] = localB -> f3n0hqhcti [ 0 ] ;
localDW -> as5a0ikbk1 [ 1 ] = localB -> f3n0hqhcti [ 1 ] ; } localB ->
ftax22owdm_dhamdvybc1 [ 0 ] = localDW -> as5a0ikbk1 [ 0 ] ; localB ->
ftax22owdm_dhamdvybc1 [ 1 ] = localDW -> as5a0ikbk1 [ 1 ] ; localB ->
n0yx221con_ax3wx1gs5w = ( localB -> nvseztmzon != 0 ) ; localB ->
cprshk45pp_ojunzewo4f = ( localB -> nvseztmzon != 0 ) ; ifzbhw4mrw (
accn4cnket , localB -> cprshk45pp_ojunzewo4f , localB -> os2mdc4s5m , localP
-> P_177 , localB -> iytlbzpr4u_icdfyazkhu , localB -> ftax22owdm_dhamdvybc1
, & localB -> ipbtas1tys , & localDW -> ipbtas1tys , & localP -> ipbtas1tys )
; localB -> pr3cy3ex2z_bsqwvugooi = localB -> dzdbq3k05m_jwzvbuczlb [ 0 ] ;
localB -> hkyrkaw0eb_idx_2 = localB -> ipbtas1tys . alkayrprb0 [ 0 ] + localB
-> ftax22owdm_dhamdvybc1 [ 0 ] ; localB -> ixkdpmf1nu_m3ybdk4ikc = localDW ->
l3lcputuyl ; if ( localB -> ixkdpmf1nu_m3ybdk4ikc < localP -> P_50 ) { localB
-> fa3deew24c_idx_0 = fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 0 ] ;
localB -> ppg2d1lxzx_lnjdk5wtww = fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 1 ] ; } else { localB -> ppg2d1lxzx_lnjdk5wtww = localP ->
P_99 * localB -> ce0g14gyt3_ezqlmfzvpq ; localB -> fa3deew24c_idx_0 =
fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 0 ] * localB ->
ppg2d1lxzx_lnjdk5wtww * localP -> P_100 ; localB -> ppg2d1lxzx_lnjdk5wtww =
fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 1 ] * localB ->
ppg2d1lxzx_lnjdk5wtww * localP -> P_100 ; } localB -> oo5ahigr24_hv2ho1zopz =
muSingleScalarAbs ( localB -> ce0g14gyt3_ezqlmfzvpq ) ; localDW -> b1nmhkw4zo
= ( localB -> ci4d4u2maw [ 3 ] - localP -> P_116 [ 1 ] * localDW ->
ncgo1wegzg ) / localP -> P_116 [ 0 ] ; localB -> e1lqlcmnjc = localP -> P_115
[ 0 ] * localDW -> b1nmhkw4zo + localP -> P_115 [ 1 ] * localDW -> ncgo1wegzg
; localDW -> n0mydijbcx = ( localB -> ci4d4u2maw [ 4 ] - localP -> P_119 [ 1
] * localDW -> mirtkskmtr ) / localP -> P_119 [ 0 ] ; localB -> mfnej0zskt =
localP -> P_118 [ 0 ] * localDW -> n0mydijbcx + localP -> P_118 [ 1 ] *
localDW -> mirtkskmtr ; localDW -> iwg03owvar = localB -> ci4d4u2maw [ 5 ] ;
for ( localB -> i = 0 ; localB -> i < 5 ; localB -> i ++ ) { localDW ->
iwg03owvar -= localP -> P_122 [ localB -> i + 1 ] * localDW -> jduomia1pb [
localB -> i ] ; } localDW -> iwg03owvar /= localP -> P_122 [ 0 ] ; localB ->
g45qmwbnlv_idx_1 = localP -> P_121 [ 0 ] * localDW -> iwg03owvar ; for (
localB -> i = 0 ; localB -> i < 5 ; localB -> i ++ ) { localB ->
g45qmwbnlv_idx_1 += localP -> P_121 [ localB -> i + 1 ] * localDW ->
jduomia1pb [ localB -> i ] ; } localB -> aetaq30u4b_czkfpwuzm5 = localDW ->
pjgu33zeph ; localB -> m43kwna0ox_as0qznsxlv = ( localB ->
aetaq30u4b_czkfpwuzm5 == localP -> P_49 ) ; if ( ( ( localZCE -> b1rw3rggh2
== POS_ZCSIG ) != ( int32_T ) localB -> m43kwna0ox_as0qznsxlv ) && ( localZCE
-> b1rw3rggh2 != UNINITIALIZED_ZCSIG ) ) { localB -> bipj5wkt3o = fp0u5nlpgw
-> HALSensors . HAL_gyro_SI . temperature ; localDW -> a1oodzfxvv = 4 ; }
localZCE -> b1rw3rggh2 = localB -> m43kwna0ox_as0qznsxlv ; if ( localP ->
P_224 == 1 ) { localB -> psyg3horlh_ppxrqq0gsf = ( fp0u5nlpgw -> HALSensors .
HAL_gyro_SI . temperature - localB -> bipj5wkt3o ) * localP -> P_95 ; } else
{ localB -> psyg3horlh_ppxrqq0gsf = localP -> P_86 ; } localB -> jirymx3bmz =
localB -> g45qmwbnlv_idx_1 - ( real32_T ) localB -> psyg3horlh_ppxrqq0gsf ;
localB -> bljivds5ih_idx_0 = localB -> e1lqlcmnjc - ( localB -> ipbtas1tys .
alkayrprb0 [ 1 ] + localB -> ftax22owdm_dhamdvybc1 [ 1 ] ) ; localB ->
bljivds5ih_idx_1 = localB -> mfnej0zskt - localB -> dzdbq3k05m_jwzvbuczlb [ 1
] ; localB -> bljivds5ih_idx_2 = localB -> jirymx3bmz - localP -> P_186 ;
localB -> l2xyktl14b [ 0 ] = localB -> oo5ahigr24_hv2ho1zopz * localB ->
bljivds5ih_idx_1 * localP -> P_124 + localB -> fa3deew24c_idx_0 ; localB ->
l2xyktl14b [ 1 ] = localB -> oo5ahigr24_hv2ho1zopz * localB ->
bljivds5ih_idx_0 + localB -> ppg2d1lxzx_lnjdk5wtww ; localB ->
dzdbq3k05m_jwzvbuczlb [ 0 ] = localB -> l2xyktl14b [ 0 ] ; localB ->
dzdbq3k05m_jwzvbuczlb [ 1 ] = localB -> l2xyktl14b [ 1 ] ; if ( localDW ->
gdn4qfzvsk ) { localDW -> od5c00niot [ 0 ] = localB -> hh02nqa2sk [ 0 ] ;
localDW -> od5c00niot [ 1 ] = localB -> hh02nqa2sk [ 1 ] ; localDW ->
od5c00niot [ 2 ] = localB -> hh02nqa2sk [ 2 ] ; localDW -> od5c00niot [ 3 ] =
localB -> hh02nqa2sk [ 3 ] ; } localB -> cidhom5352_m3yhjduhi1 [ 0 ] =
localDW -> od5c00niot [ 0 ] ; localB -> cidhom5352_m3yhjduhi1 [ 1 ] = localDW
-> od5c00niot [ 1 ] ; localB -> cidhom5352_m3yhjduhi1 [ 2 ] = localDW ->
od5c00niot [ 2 ] ; localB -> cidhom5352_m3yhjduhi1 [ 3 ] = localDW ->
od5c00niot [ 3 ] ; localB -> nydgppj0cy_dhmrxtyqop [ 0 ] = localB ->
e1lqlcmnjc ; localB -> nydgppj0cy_dhmrxtyqop [ 1 ] = localB -> mfnej0zskt ;
for ( localB -> cff = 0 ; localB -> cff < 2 ; localB -> cff ++ ) { localB ->
memOffset = localB -> cff * 5 ; localB -> ii0wg3e1gg_idx_2 = localB ->
nydgppj0cy_dhmrxtyqop [ localB -> cff ] ; for ( localB -> i = 0 ; localB -> i
< 5 ; localB -> i ++ ) { localB -> ii0wg3e1gg_idx_2 -= localP -> P_126 [
localB -> i + 1 ] * localDW -> dqfv1m130o [ localB -> memOffset + localB -> i
] ; } localB -> ii0wg3e1gg_idx_2 /= localP -> P_126 [ 0 ] ; localDW ->
mf2pp40f5v [ localB -> cff ] = localB -> ii0wg3e1gg_idx_2 ; localB ->
g45qmwbnlv_idx_1 = localP -> P_125 [ 0 ] * localB -> ii0wg3e1gg_idx_2 ; for (
localB -> i = 0 ; localB -> i < 5 ; localB -> i ++ ) { localB ->
g45qmwbnlv_idx_1 += localP -> P_125 [ localB -> i + 1 ] * localDW ->
dqfv1m130o [ localB -> memOffset + localB -> i ] ; } localB -> gazlhffgqp [
localB -> cff ] = localB -> g45qmwbnlv_idx_1 * localP -> P_128 ; } localB ->
hsuvkbjt5s_bjbgfqrolh [ 0 ] = localDW -> meognsjf1t [ 0 ] ; localB ->
hsuvkbjt5s_bjbgfqrolh [ 1 ] = localDW -> meognsjf1t [ 1 ] ; localB ->
pt5cj4vjtd_owjr1h1vqy [ 0 ] = localB -> gazlhffgqp [ 0 ] - localB ->
hsuvkbjt5s_bjbgfqrolh [ 0 ] ; localB -> pt5cj4vjtd_owjr1h1vqy [ 1 ] = localB
-> gazlhffgqp [ 1 ] - localB -> hsuvkbjt5s_bjbgfqrolh [ 1 ] ; localB ->
oo5ahigr24_hv2ho1zopz = muSingleScalarAbs ( localB -> e1lqlcmnjc ) ; localB
-> g45qmwbnlv_idx_1 = muSingleScalarAbs ( localB -> mfnej0zskt ) ; localB ->
bjts4jm0kx = ( ( ( ( muSingleScalarAbs ( localB -> pr3cy3ex2z_bsqwvugooi ) <=
localP -> P_37 ) && ( muSingleScalarAbs ( localB -> hkyrkaw0eb_idx_2 ) <=
localP -> P_39 ) && ( localB -> oo5ahigr24_hv2ho1zopz <= localP -> P_41 ) &&
( localB -> g45qmwbnlv_idx_1 <= localP -> P_42 ) && ( muSingleScalarAbs (
localB -> pt5cj4vjtd_owjr1h1vqy [ 0 ] ) <= localP -> P_35 ) && (
muSingleScalarAbs ( localB -> pt5cj4vjtd_owjr1h1vqy [ 1 ] ) <= localP -> P_36
) ) || ( ( localB -> oo5ahigr24_hv2ho1zopz <= localP -> P_38 ) && ( localB ->
g45qmwbnlv_idx_1 <= localP -> P_40 ) ) ) && ( muSingleScalarAbs ( localB ->
fa3deew24c_idx_0 - localDW -> gcgpru4rcb [ 0 ] ) <= localP -> P_43 ) && (
muSingleScalarAbs ( localB -> ppg2d1lxzx_lnjdk5wtww - localDW -> gcgpru4rcb [
1 ] ) <= localP -> P_44 ) && ( localB -> ce0g14gyt3_ezqlmfzvpq <= localP ->
P_45 ) ) ; localB -> m43kwna0ox_as0qznsxlv = localB -> bjts4jm0kx ; localB ->
o1rhslqnpv_o2tow3gxzm = localB -> bjts4jm0kx ; if ( localB ->
o1rhslqnpv_o2tow3gxzm ) { if ( ! localDW -> cqi2pi21ow ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> cqi2pi21ow = true ; } localB -> oo5ahigr24_hv2ho1zopz = localB ->
cidhom5352_m3yhjduhi1 [ 1 ] ; localB -> g45qmwbnlv_idx_1 = localB ->
cidhom5352_m3yhjduhi1 [ 0 ] ; localB -> g45qmwbnlv_idx_2 = localB ->
cidhom5352_m3yhjduhi1 [ 2 ] ; localB -> ii0wg3e1gg_idx_2 = localB ->
cidhom5352_m3yhjduhi1 [ 3 ] ; for ( localB -> i = 0 ; localB -> i < 2 ;
localB -> i ++ ) { localB -> pz2kukgvwy_guugdwf2m3 [ localB -> i ] = localB
-> dzdbq3k05m_jwzvbuczlb [ localB -> i ] - ( ( ( localP -> P_190 [ localB ->
i + 2 ] * localB -> oo5ahigr24_hv2ho1zopz + localP -> P_190 [ localB -> i ] *
localB -> g45qmwbnlv_idx_1 ) + localP -> P_190 [ localB -> i + 4 ] * localB
-> g45qmwbnlv_idx_2 ) + localP -> P_190 [ localB -> i + 6 ] * localB ->
ii0wg3e1gg_idx_2 ) ; } localB -> oo5ahigr24_hv2ho1zopz = localB ->
pz2kukgvwy_guugdwf2m3 [ 1 ] ; localB -> g45qmwbnlv_idx_1 = localB ->
pz2kukgvwy_guugdwf2m3 [ 0 ] ; for ( localB -> i = 0 ; localB -> i <= 0 ;
localB -> i += 4 ) { tmp_e = _mm_loadu_ps ( & localB -> ejwij1u00i [ localB
-> i + 4 ] ) ; tmp_i = _mm_loadu_ps ( & localB -> ejwij1u00i [ localB -> i ]
) ; _mm_storeu_ps ( & localB -> ogmg0lyqxp [ localB -> i ] , _mm_add_ps (
_mm_mul_ps ( tmp_e , _mm_set1_ps ( localB -> oo5ahigr24_hv2ho1zopz ) ) ,
_mm_mul_ps ( tmp_i , _mm_set1_ps ( localB -> g45qmwbnlv_idx_1 ) ) ) ) ; }
srUpdateBC ( localDW -> klyrn0mwhb ) ; } else if ( localDW -> cqi2pi21ow ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> ogmg0lyqxp [ 0 ] = localP -> P_98 ; localB -> ogmg0lyqxp [ 1 ] =
localP -> P_98 ; localB -> ogmg0lyqxp [ 2 ] = localP -> P_98 ; localB ->
ogmg0lyqxp [ 3 ] = localP -> P_98 ; localDW -> cqi2pi21ow = false ; } tmp_e =
_mm_add_ps ( _mm_loadu_ps ( & localB -> ogmg0lyqxp [ 0 ] ) , _mm_loadu_ps ( &
localB -> cidhom5352_m3yhjduhi1 [ 0 ] ) ) ; _mm_storeu_ps ( & localB ->
fn3xejgdnz [ 0 ] , tmp_e ) ; muSingleScalarSinCos ( localB ->
mvpuhqqzt1_nuebgmauvi , & localB -> ii0wg3e1gg_idx_0 , & localB ->
oo5ahigr24_hv2ho1zopz ) ; muSingleScalarSinCos ( localB ->
pr3cy3ex2z_bsqwvugooi , & localB -> ii0wg3e1gg_idx_1 , & localB ->
g45qmwbnlv_idx_1 ) ; muSingleScalarSinCos ( localB -> hkyrkaw0eb_idx_2 , &
localB -> ii0wg3e1gg_idx_2 , & localB -> g45qmwbnlv_idx_2 ) ; localB ->
ohqb1xhwub_tmp_al00mdgrv4 = localB -> oo5ahigr24_hv2ho1zopz * localB ->
g45qmwbnlv_idx_1 ; localB -> ohqb1xhwub_kkiq3xxxve [ 0 ] = localB ->
ohqb1xhwub_tmp_al00mdgrv4 ; localB -> ohqb1xhwub_tmp = localB ->
ii0wg3e1gg_idx_1 * localB -> ii0wg3e1gg_idx_2 ; localB ->
ohqb1xhwub_tmp_ju13rw2h0m = localB -> ohqb1xhwub_tmp * localB ->
oo5ahigr24_hv2ho1zopz - localB -> ii0wg3e1gg_idx_0 * localB ->
g45qmwbnlv_idx_2 ; localB -> ohqb1xhwub_kkiq3xxxve [ 1 ] = localB ->
ohqb1xhwub_tmp_ju13rw2h0m ; localB -> ohqb1xhwub_tmp_fdinthrxmb = localB ->
ii0wg3e1gg_idx_1 * localB -> g45qmwbnlv_idx_2 ; localB ->
ohqb1xhwub_tmp_jz50ptvnrg = localB -> ohqb1xhwub_tmp_fdinthrxmb * localB ->
oo5ahigr24_hv2ho1zopz + localB -> ii0wg3e1gg_idx_0 * localB ->
ii0wg3e1gg_idx_2 ; localB -> ohqb1xhwub_kkiq3xxxve [ 2 ] = localB ->
ohqb1xhwub_tmp_jz50ptvnrg ; localB -> ohqb1xhwub_tmp_o4f35lbcvx = localB ->
ii0wg3e1gg_idx_0 * localB -> g45qmwbnlv_idx_1 ; localB ->
ohqb1xhwub_kkiq3xxxve [ 3 ] = localB -> ohqb1xhwub_tmp_o4f35lbcvx ; localB ->
ohqb1xhwub_tmp = localB -> ohqb1xhwub_tmp * localB -> ii0wg3e1gg_idx_0 +
localB -> oo5ahigr24_hv2ho1zopz * localB -> g45qmwbnlv_idx_2 ; localB ->
ohqb1xhwub_kkiq3xxxve [ 4 ] = localB -> ohqb1xhwub_tmp ; localB ->
ohqb1xhwub_tmp_fdinthrxmb = localB -> ohqb1xhwub_tmp_fdinthrxmb * localB ->
ii0wg3e1gg_idx_0 - localB -> oo5ahigr24_hv2ho1zopz * localB ->
ii0wg3e1gg_idx_2 ; localB -> ohqb1xhwub_kkiq3xxxve [ 5 ] = localB ->
ohqb1xhwub_tmp_fdinthrxmb ; localB -> ohqb1xhwub_kkiq3xxxve [ 6 ] = - localB
-> ii0wg3e1gg_idx_1 ; localB -> oo5ahigr24_hv2ho1zopz = localB ->
g45qmwbnlv_idx_1 * localB -> ii0wg3e1gg_idx_2 ; localB ->
ohqb1xhwub_kkiq3xxxve [ 7 ] = localB -> oo5ahigr24_hv2ho1zopz ; localB ->
g45qmwbnlv_idx_2 *= localB -> g45qmwbnlv_idx_1 ; localB ->
ohqb1xhwub_kkiq3xxxve [ 8 ] = localB -> g45qmwbnlv_idx_2 ; localB ->
psyg3horlh_ppxrqq0gsf = localDW -> peklmaellz [ 0 ] ; localB ->
unnamed_idx_1_tmp = localDW -> peklmaellz [ 1 ] ; localB -> unnamed_idx_2 =
localB -> mlxcplakjs [ 1 ] ; localB -> unnamed_idx_2_llw0u2ae0v = localB ->
mlxcplakjs [ 1 ] ; for ( localB -> i = 0 ; localB -> i <= 0 ; localB -> i +=
2 ) { tmp_m = _mm_set_pd ( localB -> ohqb1xhwub_kkiq3xxxve [ localB -> i + 4
] , localB -> ohqb1xhwub_kkiq3xxxve [ localB -> i + 3 ] ) ; tmp_g =
_mm_set_pd ( localB -> ohqb1xhwub_kkiq3xxxve [ localB -> i + 1 ] , localB ->
ohqb1xhwub_kkiq3xxxve [ localB -> i ] ) ; tmp_j = _mm_set_pd ( localB ->
ohqb1xhwub_kkiq3xxxve [ localB -> i + 7 ] , localB -> ohqb1xhwub_kkiq3xxxve [
localB -> i + 6 ] ) ; tmp_m = _mm_add_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd (
localB -> unnamed_idx_1_tmp ) ) , _mm_mul_pd ( tmp_g , _mm_set1_pd ( localB
-> psyg3horlh_ppxrqq0gsf ) ) ) ; _mm_storeu_pd ( & localB ->
i1vq3tu1gj_bhxxfovxdy [ localB -> i ] , _mm_add_pd ( tmp_m , _mm_mul_pd (
tmp_j , _mm_set1_pd ( localB -> unnamed_idx_2 ) ) ) ) ; _mm_storeu_pd ( &
localB -> ohqb1xhwub_pbm3vprmfu [ localB -> i ] , _mm_add_pd ( tmp_m ,
_mm_mul_pd ( tmp_j , _mm_set1_pd ( localB -> unnamed_idx_2_llw0u2ae0v ) ) ) )
; } for ( localB -> i = 2 ; localB -> i < 3 ; localB -> i ++ ) {
_mm_storeu_pd ( & localB -> dv [ 0 ] , _mm_add_pd ( _mm_add_pd ( _mm_mul_pd (
_mm_set1_pd ( localB -> ohqb1xhwub_kkiq3xxxve [ localB -> i + 3 ] ) ,
_mm_set_pd ( localB -> unnamed_idx_1_tmp , localB -> unnamed_idx_1_tmp ) ) ,
_mm_mul_pd ( _mm_set1_pd ( localB -> ohqb1xhwub_kkiq3xxxve [ localB -> i ] )
, _mm_set_pd ( localB -> psyg3horlh_ppxrqq0gsf , localB ->
psyg3horlh_ppxrqq0gsf ) ) ) , _mm_mul_pd ( _mm_set1_pd ( localB ->
ohqb1xhwub_kkiq3xxxve [ localB -> i + 6 ] ) , _mm_set_pd ( localB ->
unnamed_idx_2_llw0u2ae0v , localB -> unnamed_idx_2 ) ) ) ) ; localB ->
i1vq3tu1gj_bhxxfovxdy [ localB -> i ] = localB -> dv [ 0 ] ; localB ->
ohqb1xhwub_pbm3vprmfu [ localB -> i ] = localB -> dv [ 1 ] ; } localB ->
g45qmwbnlv_idx_1 = ( real32_T ) localB -> ohqb1xhwub_pbm3vprmfu [ 2 ] ;
localB -> de1pkcjbg1_cl54gopm0x [ 0 ] = localB -> dr05xp1kkz_idx_0 ; localB
-> de1pkcjbg1_cl54gopm0x [ 1 ] = localB -> dr05xp1kkz_idx_1 ; localB ->
de1pkcjbg1_cl54gopm0x [ 2 ] = localB -> ce0g14gyt3_ezqlmfzvpq ; localB ->
de1pkcjbg1_cl54gopm0x [ 3 ] = localB -> mvpuhqqzt1_nuebgmauvi ; localB ->
de1pkcjbg1_cl54gopm0x [ 4 ] = localB -> pr3cy3ex2z_bsqwvugooi ; localB ->
de1pkcjbg1_cl54gopm0x [ 5 ] = localB -> hkyrkaw0eb_idx_2 ; localB ->
de1pkcjbg1_cl54gopm0x [ 6 ] = localB -> fn3xejgdnz [ 0 ] ; localB ->
de1pkcjbg1_cl54gopm0x [ 7 ] = localB -> fn3xejgdnz [ 1 ] ; localB ->
de1pkcjbg1_cl54gopm0x [ 8 ] = ( real32_T ) localB -> i1vq3tu1gj_bhxxfovxdy [
2 ] ; localB -> de1pkcjbg1_cl54gopm0x [ 9 ] = localB -> bljivds5ih_idx_0 ;
localB -> de1pkcjbg1_cl54gopm0x [ 10 ] = localB -> bljivds5ih_idx_1 ; localB
-> de1pkcjbg1_cl54gopm0x [ 11 ] = localB -> bljivds5ih_idx_2 ; { if ( tid ==
0 ) { if ( localDW -> puq03cpvbg . AQHandles && ssGetLogOutput ( accn4cnket
-> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> puq03cpvbg . AQHandles ,
rtmGetTaskTime ( accn4cnket , 0 ) , ( char * ) & localB ->
de1pkcjbg1_cl54gopm0x [ 0 ] + 0 ) ; } } } localB -> fkisksvvjz_ctvw0tpkon =
localDW -> gaxgdudnvc ; localB -> gdt0sjgot2 = ( localB ->
fkisksvvjz_ctvw0tpkon < localP -> P_52 ) ; localB -> kzrsacq44p_pxqvlbal2i =
( uint16_T ) ( localB -> fkisksvvjz_ctvw0tpkon + localP -> P_209 ) ; if (
localB -> kzrsacq44p_pxqvlbal2i > localP -> P_51 ) { localB -> nbs40rrljt =
localP -> P_210 ; } else { localB -> nbs40rrljt = localB ->
kzrsacq44p_pxqvlbal2i ; } if ( ( ! localB -> gdt0sjgot2 ) && ( localDW ->
fpr1qi0oiw == 1 ) ) { localDW -> bsetqjfri4 = localP -> P_132 ; } if (
localDW -> fa1jgcut3x < 1023U ) { localDW -> fa1jgcut3x ++ ; } if ( localDW
-> e3uw2ubplh == 0U ) { localDW -> e3uw2ubplh = 1U ; localDW -> bjkftgumd3 =
cw2tqpfw0t ; localB -> nzr5yspjzx = 0.0 ; localB -> c2fzqyltnh = 0.0 ; localB
-> affqggdog2 = 0.0 ; localB -> pcgqi2scre = 0.0F ; localDW -> b2z5wyyedu =
0.0 ; } else { switch ( localDW -> bjkftgumd3 ) { case fekfxxmyur : if ( (
a2hdrwexj5 == 0.0 ) && ( nuo5swpl2q == 0.0 ) ) { localDW -> fa1jgcut3x = 0U ;
localDW -> bjkftgumd3 = l4newiasge ; } else { localB -> c2fzqyltnh += 0.0005
; localB -> nzr5yspjzx = - 0.7 ; } break ; case l4newiasge : if ( ( ( localDW
-> fa1jgcut3x >= 610U ) && ( a2hdrwexj5 == 1.0 ) ) || ( nuo5swpl2q == 1.0 ) )
{ localDW -> bjkftgumd3 = k1hbuaub1g ; } else if ( ( localDW -> fa1jgcut3x >=
600U ) && ( a2hdrwexj5 == 0.0 ) && ( nuo5swpl2q == 0.0 ) ) { localDW ->
bjkftgumd3 = nsrfej23yd ; } else { localB -> c2fzqyltnh += 0.0005 ; } break ;
case chw5ba23di : break ; case jcoki3flgl : if ( localDW -> fa1jgcut3x >=
400U ) { localDW -> bjkftgumd3 = chw5ba23di ; } else { localB -> nzr5yspjzx =
- 0.001 ; } break ; case hrn1xlx5ae : if ( nuo5swpl2q == 0.0 ) { localDW ->
fa1jgcut3x = 0U ; localDW -> bjkftgumd3 = jcoki3flgl ; } else if ( a2hdrwexj5
== 0.0 ) { localDW -> bjkftgumd3 = czeuhpilph ; } else { localB -> affqggdog2
+= cubgdxhir5 ( 0.0005 , localB -> pcgqi2scre ) ; localB -> c2fzqyltnh +=
fcbmqxomvt ( 0.0005 , localB -> pcgqi2scre ) ; } break ; case dhxeqxuqqo : if
( dlkfhokrcc == 1.0 ) { localDW -> bjkftgumd3 = cg5khurvvd ; } else if ( (
a2hdrwexj5 == 0.0 ) && ( nuo5swpl2q == 0.0 ) ) { localDW -> fa1jgcut3x = 0U ;
localDW -> bjkftgumd3 = l4newiasge ; } else { localB -> affqggdog2 += 0.0005
; localB -> c2fzqyltnh = 0.0 ; localB -> nzr5yspjzx = - 0.5 ; } break ; case
czeuhpilph : cm4crsavt4 ( bazpfm3cug , a2hdrwexj5 , dlkfhokrcc , b5r3ujlawi ,
nuo5swpl2q , mtniurs2n4 , localDW ) ; break ; case fuxmrh514l : if ( (
a2hdrwexj5 == 1.0 ) && ( bazpfm3cug == 0.0 ) && ( nuo5swpl2q == 1.0 ) ) {
localDW -> bjkftgumd3 = czeuhpilph ; } else if ( nuo5swpl2q == 0.0 ) {
localDW -> fa1jgcut3x = 0U ; localDW -> bjkftgumd3 = jcoki3flgl ; } else {
localB -> pcgqi2scre -= 0.000628571433F ; localDW -> b2z5wyyedu = 0.0 ; }
break ; case jlhejdpkzp : if ( a2hdrwexj5 == 1.0 ) { localDW -> bjkftgumd3 =
cckrydbdlw ; } else { localB -> pcgqi2scre -= 0.00314285723F ; } break ; case
k1hbuaub1g : localB -> nzr5yspjzx = 0.7 ; break ; case ky01uxw0lw : if ( (
bsz25imoeb == 1.0 ) && ( nuo5swpl2q == 1.0 ) && ( a2hdrwexj5 == 1.0 ) && (
localDW -> ibeh2pu5t0 <= 0.0 ) ) { localDW -> bjkftgumd3 = czeuhpilph ; }
else { localB -> affqggdog2 += cubgdxhir5 ( - 0.0001 , localB -> pcgqi2scre )
; localB -> c2fzqyltnh += fcbmqxomvt ( - 0.0001 , localB -> pcgqi2scre ) ;
localDW -> ibeh2pu5t0 -- ; localDW -> b2z5wyyedu = 1.0 ; } break ; case
copkexkjy1 : if ( nuo5swpl2q == 0.0 ) { localDW -> fa1jgcut3x = 0U ; localDW
-> bjkftgumd3 = jcoki3flgl ; } else if ( ( a2hdrwexj5 == 1.0 ) && (
dlkfhokrcc == 0.0 ) && ( nuo5swpl2q == 1.0 ) ) { localDW -> bjkftgumd3 =
czeuhpilph ; } else { localB -> pcgqi2scre += 0.000628571433F ; localDW ->
b2z5wyyedu = 0.0 ; } break ; case cq2i0th5e3 : if ( a2hdrwexj5 == 1.0 ) {
localDW -> bjkftgumd3 = cckrydbdlw ; } else { localB -> pcgqi2scre +=
0.00314285723F ; } break ; case cg5khurvvd : if ( ( a2hdrwexj5 == 1.0 ) && (
dlkfhokrcc == 0.0 ) && ( mtniurs2n4 == 1.0 ) && ( nuo5swpl2q == 1.0 ) ) {
localDW -> bjkftgumd3 = fekfxxmyur ; } else { localB -> pcgqi2scre += 0.0005F
; } break ; case gk0cmelazj : if ( ( bazpfm3cug == 0.0 ) && ( dlkfhokrcc ==
0.0 ) && ( boqyrw4ssh == 0.0 ) && ( nvm2ratax4 == 0.0 ) && ( nuo5swpl2q ==
1.0 ) ) { localDW -> bjkftgumd3 = czeuhpilph ; } else { localB -> nzr5yspjzx
= - 0.5 ; } break ; case peq1irly2m : if ( ( a2hdrwexj5 == 1.0 ) && (
nuo5swpl2q == 0.0 ) ) { localDW -> fa1jgcut3x = 0U ; localDW -> bjkftgumd3 =
jcoki3flgl ; } else if ( ( ( a2hdrwexj5 == 0.0 ) && ( nuo5swpl2q == 0.0 ) &&
( bsz25imoeb == 1.0 ) ) || ( localDW -> fa1jgcut3x >= 1000U ) ) { localDW ->
bjkftgumd3 = ky01uxw0lw ; } else { localB -> affqggdog2 += cubgdxhir5 (
0.0001 , localB -> pcgqi2scre ) ; localB -> c2fzqyltnh += fcbmqxomvt ( 0.0001
, localB -> pcgqi2scre ) ; localDW -> ibeh2pu5t0 ++ ; } break ; case
cckrydbdlw : oq2lp35lkg ( bazpfm3cug , a2hdrwexj5 , dlkfhokrcc , boqyrw4ssh ,
bsz25imoeb , nvm2ratax4 , localDW ) ; break ; case cw2tqpfw0t : if ( (
bazpfm3cug == 1.0 ) && ( a2hdrwexj5 == 1.0 ) && ( dlkfhokrcc == 1.0 ) && (
b5r3ujlawi == 1.0 ) && ( nuo5swpl2q == 1.0 ) && ( mtniurs2n4 == 1.0 ) && (
boqyrw4ssh == 1.0 ) && ( bsz25imoeb == 1.0 ) && ( nvm2ratax4 == 1.0 ) ) {
localDW -> bjkftgumd3 = gk0cmelazj ; } break ; case nsrfej23yd : localB ->
nzr5yspjzx = 0.7 ; break ; case kfvrpveo2x : localDW -> bjkftgumd3 =
kfvrpveo2x ; break ; default : localDW -> bjkftgumd3 = kyx1s2doql ; break ; }
} localB -> adra3iiima_bnlywzniup = ( real32_T ) localB -> nzr5yspjzx -
localB -> ce0g14gyt3_ezqlmfzvpq ; localB -> d2rwb413j0 = localP -> P_135 *
localB -> adra3iiima_bnlywzniup ; localB -> ega4wlcvvl_tmp =
muSingleScalarSin ( localB -> mvpuhqqzt1_nuebgmauvi ) ; localB ->
ega4wlcvvl_tmp_bjvjhhzy4i = muSingleScalarCos ( localB ->
mvpuhqqzt1_nuebgmauvi ) ; localB -> ii0wg3e1gg_idx_0 = ( real32_T ) localB ->
affqggdog2 - localB -> dr05xp1kkz_idx_0 ; localB -> ii0wg3e1gg_idx_1 = (
real32_T ) localB -> c2fzqyltnh - localB -> dr05xp1kkz_idx_1 ; localDW ->
pwlp5beuqs [ 0U ] = 0.0F ; localB -> ii0wg3e1gg_idx_2 = ( localB ->
ega4wlcvvl_tmp_bjvjhhzy4i * localB -> ii0wg3e1gg_idx_0 + localB ->
ega4wlcvvl_tmp * localB -> ii0wg3e1gg_idx_1 ) * localP -> P_17 ; if ( localB
-> ii0wg3e1gg_idx_2 > localP -> P_21 ) { localB -> ii0wg3e1gg_idx_2 = localP
-> P_21 ; } else if ( localB -> ii0wg3e1gg_idx_2 < localP -> P_13 ) { localB
-> ii0wg3e1gg_idx_2 = localP -> P_13 ; } localB -> pz2kukgvwy_jzx3amusab =
localB -> ii0wg3e1gg_idx_2 - localB -> fn3xejgdnz [ 0 ] ; localB ->
pz2kukgvwy_guugdwf2m3 [ 0 ] = localB -> pz2kukgvwy_jzx3amusab ; localB ->
bmlfyp0nve [ 0 ] = localP -> P_18 * localB -> pz2kukgvwy_jzx3amusab + localDW
-> dsjbzv2lh4 [ 0 ] ; if ( localB -> bmlfyp0nve [ 0 ] > localP -> P_22 ) {
localB -> ii0wg3e1gg_idx_2 = localP -> P_22 ; } else if ( localB ->
bmlfyp0nve [ 0 ] < localP -> P_14 ) { localB -> ii0wg3e1gg_idx_2 = localP ->
P_14 ; } else { localB -> ii0wg3e1gg_idx_2 = localB -> bmlfyp0nve [ 0 ] ; }
localB -> ii0wg3e1gg_idx_2 = ( localB -> ii0wg3e1gg_idx_2 - localDW ->
gixvkpnpus [ 0 ] * localP -> P_141 [ 1 ] ) / localP -> P_141 [ 0 ] ; localDW
-> pwlp5beuqs [ 0 ] = localB -> ii0wg3e1gg_idx_2 ; localB -> moqiy0ilxa_idx_0
= localP -> P_140 [ 0 ] * localB -> ii0wg3e1gg_idx_2 + localDW -> gixvkpnpus
[ 0 ] * localP -> P_140 [ 1 ] ; localB -> ii0wg3e1gg_idx_2 = ( - localB ->
ega4wlcvvl_tmp * localB -> ii0wg3e1gg_idx_0 + localB ->
ega4wlcvvl_tmp_bjvjhhzy4i * localB -> ii0wg3e1gg_idx_1 ) * localP -> P_17 ;
if ( localB -> ii0wg3e1gg_idx_2 > localP -> P_21 ) { localB ->
ii0wg3e1gg_idx_2 = localP -> P_21 ; } else if ( localB -> ii0wg3e1gg_idx_2 <
localP -> P_13 ) { localB -> ii0wg3e1gg_idx_2 = localP -> P_13 ; } localB ->
pz2kukgvwy_jzx3amusab = localB -> ii0wg3e1gg_idx_2 - localB -> fn3xejgdnz [ 1
] ; localB -> bmlfyp0nve [ 1 ] = localP -> P_18 * localB ->
pz2kukgvwy_jzx3amusab + localDW -> dsjbzv2lh4 [ 1 ] ; if ( localB ->
bmlfyp0nve [ 1 ] > localP -> P_22 ) { localB -> ii0wg3e1gg_idx_2 = localP ->
P_22 ; } else if ( localB -> bmlfyp0nve [ 1 ] < localP -> P_14 ) { localB ->
ii0wg3e1gg_idx_2 = localP -> P_14 ; } else { localB -> ii0wg3e1gg_idx_2 =
localB -> bmlfyp0nve [ 1 ] ; } localB -> ii0wg3e1gg_idx_2 = ( localB ->
ii0wg3e1gg_idx_2 - localP -> P_141 [ 1 ] * localDW -> gixvkpnpus [ 1 ] ) /
localP -> P_141 [ 0 ] ; localDW -> pwlp5beuqs [ 1 ] = localB ->
ii0wg3e1gg_idx_2 ; if ( localP -> P_215 ) { localB -> moqiy0ilxa_idx_0 *=
localP -> P_94 [ 0 ] ; localB -> ii0wg3e1gg_idx_2 = ( localP -> P_140 [ 0 ] *
localB -> ii0wg3e1gg_idx_2 + localP -> P_140 [ 1 ] * localDW -> gixvkpnpus [
1 ] ) * localP -> P_94 [ 1 ] ; } else { localB -> moqiy0ilxa_idx_0 = 0.0F ;
localB -> ii0wg3e1gg_idx_2 = 0.0F ; } localB -> moqiy0ilxa_idx_0 = ( localB
-> moqiy0ilxa_idx_0 - localB -> pr3cy3ex2z_bsqwvugooi ) * localP -> P_19 ;
localB -> ii0wg3e1gg_idx_2 = ( localB -> ii0wg3e1gg_idx_2 - localB ->
hkyrkaw0eb_idx_2 ) * localP -> P_19 ; localB -> nydgppj0cy_dhmrxtyqop [ 0 ] =
localB -> moqiy0ilxa_idx_0 - localB -> bljivds5ih_idx_1 ; localB ->
nydgppj0cy_dhmrxtyqop [ 1 ] = localB -> ii0wg3e1gg_idx_2 - localB ->
bljivds5ih_idx_0 ; localB -> mvpuhqqzt1_nuebgmauvi = localB -> pcgqi2scre -
localB -> mvpuhqqzt1_nuebgmauvi ; if ( localB -> mvpuhqqzt1_nuebgmauvi >
localP -> P_145 ) { localB -> mvpuhqqzt1_nuebgmauvi = localP -> P_145 ; }
else if ( localB -> mvpuhqqzt1_nuebgmauvi < localP -> P_146 ) { localB ->
mvpuhqqzt1_nuebgmauvi = localP -> P_146 ; } localB -> i1pkfeiqf3 = localP ->
P_151 * localB -> mvpuhqqzt1_nuebgmauvi ; if ( localB -> gdt0sjgot2 ) {
localB -> ii0wg3e1gg_idx_2 = localP -> P_91 * localP -> P_136 ; } else {
localB -> ii0wg3e1gg_idx_2 = ( localP -> P_92 * localB ->
adra3iiima_bnlywzniup + localDW -> bsetqjfri4 ) - localP -> P_93 * ( real32_T
) localB -> i1vq3tu1gj_bhxxfovxdy [ 2 ] ; } localB -> ii0wg3e1gg_idx_2 +=
localP -> P_136 ; if ( localB -> ii0wg3e1gg_idx_2 > localP -> P_137 ) {
localB -> ii0wg3e1gg_idx_2 = localP -> P_137 ; } else if ( localB ->
ii0wg3e1gg_idx_2 < localP -> P_138 ) { localB -> ii0wg3e1gg_idx_2 = localP ->
P_138 ; } localB -> mvpuhqqzt1_nuebgmauvi = ( localP -> P_147 * localB ->
mvpuhqqzt1_nuebgmauvi + localDW -> c4kiksmhh2 ) - localP -> P_150 * localB ->
bljivds5ih_idx_2 ; localB -> bljivds5ih_idx_2 = ( localP -> P_6 [ 0 ] *
localB -> nydgppj0cy_dhmrxtyqop [ 0 ] - localDW -> krs1cvkxzk [ 0 ] ) *
localP -> P_16 [ 0 ] ; localB -> fzoyetmmsh [ 0 ] = localB ->
bljivds5ih_idx_2 ; localB -> bljivds5ih_idx_2 += localP -> P_20 [ 0 ] *
localB -> nydgppj0cy_dhmrxtyqop [ 0 ] + localDW -> ow5xb5ovt0 [ 0 ] ; if (
localB -> bljivds5ih_idx_2 > localP -> P_23 ) { localB -> bljivds5ih_idx_0 =
localB -> bljivds5ih_idx_2 - localP -> P_23 ; } else if ( localB ->
bljivds5ih_idx_2 >= localP -> P_15 ) { localB -> bljivds5ih_idx_0 = 0.0F ; }
else { localB -> bljivds5ih_idx_0 = localB -> bljivds5ih_idx_2 - localP ->
P_15 ; } localB -> bljivds5ih_idx_1 = localP -> P_7 [ 0 ] * localB ->
nydgppj0cy_dhmrxtyqop [ 0 ] ; if ( localB -> bljivds5ih_idx_0 > localP ->
P_158 ) { localB -> i_p5h3gwuwqg = localP -> P_216 ; } else { localB ->
i_p5h3gwuwqg = localP -> P_217 ; } if ( localB -> bljivds5ih_idx_1 > localP
-> P_158 ) { localB -> i1 = localP -> P_218 ; } else { localB -> i1 = localP
-> P_219 ; } if ( ( localP -> P_158 != localB -> bljivds5ih_idx_0 ) && (
localB -> i_p5h3gwuwqg == localB -> i1 ) ) { localB -> bljivds5ih_idx_0 =
localP -> P_159 ; } else { localB -> bljivds5ih_idx_0 = localB ->
bljivds5ih_idx_1 ; } localB -> lfb13k2lpd [ 0 ] = localB -> bljivds5ih_idx_0
; if ( localB -> bmlfyp0nve [ 0 ] > localP -> P_22 ) { localB ->
bljivds5ih_idx_0 = localB -> bmlfyp0nve [ 0 ] - localP -> P_22 ; } else if (
localB -> bmlfyp0nve [ 0 ] >= localP -> P_14 ) { localB -> bljivds5ih_idx_0 =
0.0F ; } else { localB -> bljivds5ih_idx_0 = localB -> bmlfyp0nve [ 0 ] -
localP -> P_14 ; } localB -> bljivds5ih_idx_1 = localP -> P_8 * localB ->
pz2kukgvwy_guugdwf2m3 [ 0 ] ; if ( localB -> bljivds5ih_idx_0 > localP ->
P_161 ) { localB -> i_p5h3gwuwqg = localP -> P_220 ; } else { localB ->
i_p5h3gwuwqg = localP -> P_221 ; } if ( localB -> bljivds5ih_idx_1 > localP
-> P_161 ) { localB -> i1 = localP -> P_222 ; } else { localB -> i1 = localP
-> P_223 ; } if ( ( localP -> P_161 != localB -> bljivds5ih_idx_0 ) && (
localB -> i_p5h3gwuwqg == localB -> i1 ) ) { localB -> bljivds5ih_idx_0 =
localP -> P_162 ; } else { localB -> bljivds5ih_idx_0 = localB ->
bljivds5ih_idx_1 ; } localB -> bmlfyp0nve [ 0 ] = localB -> bljivds5ih_idx_0
; if ( localB -> bljivds5ih_idx_2 > localP -> P_23 ) { localB ->
hkyrkaw0eb_idx_2 = localP -> P_23 ; } else if ( localB -> bljivds5ih_idx_2 <
localP -> P_15 ) { localB -> hkyrkaw0eb_idx_2 = localP -> P_15 ; } else {
localB -> hkyrkaw0eb_idx_2 = localB -> bljivds5ih_idx_2 ; } localB ->
bljivds5ih_idx_2 = ( localP -> P_6 [ 1 ] * localB -> nydgppj0cy_dhmrxtyqop [
1 ] - localDW -> krs1cvkxzk [ 1 ] ) * localP -> P_16 [ 1 ] ; localB ->
fzoyetmmsh [ 1 ] = localB -> bljivds5ih_idx_2 ; localB -> bljivds5ih_idx_2 +=
localP -> P_20 [ 1 ] * localB -> nydgppj0cy_dhmrxtyqop [ 1 ] + localDW ->
ow5xb5ovt0 [ 1 ] ; if ( localB -> bljivds5ih_idx_2 > localP -> P_23 ) {
localB -> bljivds5ih_idx_0 = localB -> bljivds5ih_idx_2 - localP -> P_23 ; }
else if ( localB -> bljivds5ih_idx_2 >= localP -> P_15 ) { localB ->
bljivds5ih_idx_0 = 0.0F ; } else { localB -> bljivds5ih_idx_0 = localB ->
bljivds5ih_idx_2 - localP -> P_15 ; } localB -> bljivds5ih_idx_1 = localP ->
P_7 [ 1 ] * localB -> nydgppj0cy_dhmrxtyqop [ 1 ] ; if ( localB ->
bljivds5ih_idx_0 > localP -> P_158 ) { localB -> i_p5h3gwuwqg = localP ->
P_216 ; } else { localB -> i_p5h3gwuwqg = localP -> P_217 ; } if ( localB ->
bljivds5ih_idx_1 > localP -> P_158 ) { localB -> i1 = localP -> P_218 ; }
else { localB -> i1 = localP -> P_219 ; } if ( ( localP -> P_158 != localB ->
bljivds5ih_idx_0 ) && ( localB -> i_p5h3gwuwqg == localB -> i1 ) ) { localB
-> bljivds5ih_idx_0 = localP -> P_159 ; } else { localB -> bljivds5ih_idx_0 =
localB -> bljivds5ih_idx_1 ; } localB -> lfb13k2lpd [ 1 ] = localB ->
bljivds5ih_idx_0 ; if ( localB -> bmlfyp0nve [ 1 ] > localP -> P_22 ) {
localB -> bljivds5ih_idx_0 = localB -> bmlfyp0nve [ 1 ] - localP -> P_22 ; }
else if ( localB -> bmlfyp0nve [ 1 ] >= localP -> P_14 ) { localB ->
bljivds5ih_idx_0 = 0.0F ; } else { localB -> bljivds5ih_idx_0 = localB ->
bmlfyp0nve [ 1 ] - localP -> P_14 ; } localB -> bljivds5ih_idx_1 = localP ->
P_8 * localB -> pz2kukgvwy_jzx3amusab ; if ( localB -> bljivds5ih_idx_0 >
localP -> P_161 ) { localB -> i_p5h3gwuwqg = localP -> P_220 ; } else {
localB -> i_p5h3gwuwqg = localP -> P_221 ; } if ( localB -> bljivds5ih_idx_1
> localP -> P_161 ) { localB -> i1 = localP -> P_222 ; } else { localB -> i1
= localP -> P_223 ; } if ( ( localP -> P_161 != localB -> bljivds5ih_idx_0 )
&& ( localB -> i_p5h3gwuwqg == localB -> i1 ) ) { localB -> bljivds5ih_idx_0
= localP -> P_162 ; } else { localB -> bljivds5ih_idx_0 = localB ->
bljivds5ih_idx_1 ; } localB -> bmlfyp0nve [ 1 ] = localB -> bljivds5ih_idx_0
; if ( localB -> bljivds5ih_idx_2 > localP -> P_23 ) { localB ->
bljivds5ih_idx_2 = localP -> P_23 ; } else if ( localB -> bljivds5ih_idx_2 <
localP -> P_15 ) { localB -> bljivds5ih_idx_2 = localP -> P_15 ; } for (
localB -> i = 0 ; localB -> i <= 0 ; localB -> i += 4 ) { tmp_e =
_mm_loadu_ps ( & localB -> nseoymslxl [ localB -> i + 4 ] ) ; tmp_i =
_mm_loadu_ps ( & localB -> nseoymslxl [ localB -> i ] ) ; tmp = _mm_loadu_ps
( & localB -> nseoymslxl [ localB -> i + 8 ] ) ; tmp_p = _mm_loadu_ps ( &
localB -> nseoymslxl [ localB -> i + 12 ] ) ; _mm_storeu_ps ( & localB ->
eyy0jqowtu_cv5hdgrwft [ localB -> i ] , _mm_add_ps ( _mm_add_ps ( _mm_add_ps
( _mm_mul_ps ( tmp_e , _mm_set1_ps ( localB -> mvpuhqqzt1_nuebgmauvi ) ) ,
_mm_mul_ps ( tmp_i , _mm_set1_ps ( localB -> ii0wg3e1gg_idx_2 ) ) ) ,
_mm_mul_ps ( tmp , _mm_set1_ps ( localB -> hkyrkaw0eb_idx_2 ) ) ) ,
_mm_mul_ps ( tmp_p , _mm_set1_ps ( localB -> bljivds5ih_idx_2 ) ) ) ) ; }
localB -> ii0wg3e1gg_idx_2 = localP -> P_152 * localB ->
eyy0jqowtu_cv5hdgrwft [ 0 ] ; if ( localB -> ii0wg3e1gg_idx_2 > localP ->
P_153 ) { localB -> ii0wg3e1gg_idx_2 = localP -> P_153 ; } else if ( localB
-> ii0wg3e1gg_idx_2 < localP -> P_154 ) { localB -> ii0wg3e1gg_idx_2 = localP
-> P_154 ; } localB -> nasakeuczj [ 0 ] = localP -> P_155 [ 0 ] * localB ->
ii0wg3e1gg_idx_2 ; localB -> ii0wg3e1gg_idx_2 = localP -> P_152 * localB ->
eyy0jqowtu_cv5hdgrwft [ 1 ] ; if ( localB -> ii0wg3e1gg_idx_2 > localP ->
P_153 ) { localB -> ii0wg3e1gg_idx_2 = localP -> P_153 ; } else if ( localB
-> ii0wg3e1gg_idx_2 < localP -> P_154 ) { localB -> ii0wg3e1gg_idx_2 = localP
-> P_154 ; } localB -> nasakeuczj [ 1 ] = localP -> P_155 [ 1 ] * localB ->
ii0wg3e1gg_idx_2 ; localB -> ii0wg3e1gg_idx_2 = localP -> P_152 * localB ->
eyy0jqowtu_cv5hdgrwft [ 2 ] ; if ( localB -> ii0wg3e1gg_idx_2 > localP ->
P_153 ) { localB -> ii0wg3e1gg_idx_2 = localP -> P_153 ; } else if ( localB
-> ii0wg3e1gg_idx_2 < localP -> P_154 ) { localB -> ii0wg3e1gg_idx_2 = localP
-> P_154 ; } localB -> nasakeuczj [ 2 ] = localP -> P_155 [ 2 ] * localB ->
ii0wg3e1gg_idx_2 ; localB -> ii0wg3e1gg_idx_2 = localP -> P_152 * localB ->
eyy0jqowtu_cv5hdgrwft [ 3 ] ; if ( localB -> ii0wg3e1gg_idx_2 > localP ->
P_153 ) { localB -> ii0wg3e1gg_idx_2 = localP -> P_153 ; } else if ( localB
-> ii0wg3e1gg_idx_2 < localP -> P_154 ) { localB -> ii0wg3e1gg_idx_2 = localP
-> P_154 ; } localB -> nasakeuczj [ 3 ] = localP -> P_155 [ 3 ] * localB ->
ii0wg3e1gg_idx_2 ; localB -> manl0faxjy_mdoasc5av4 = localDW -> dxm3w2i52x ;
if ( localB -> manl0faxjy_mdoasc5av4 > localP -> P_64 ) { localB ->
oo5vwsdpyd_dapv3jlyq5 = localB -> ce0g14gyt3_ezqlmfzvpq - localB ->
oo5vwsdpyd_dapv3jlyq5 ; localB -> psyg3horlh_ppxrqq0gsf = fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 2 ] ; localB -> unnamed_idx_1_tmp =
fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 2 ] ; } else { localB ->
oo5vwsdpyd_dapv3jlyq5 = localP -> P_163 ; localB -> psyg3horlh_ppxrqq0gsf =
localP -> P_62 ; localB -> unnamed_idx_1_tmp = localP -> P_62 ; } localB ->
cm5z5guoim = ( real_T ) ( localB -> unnamed_idx_1_tmp == localP -> P_1 ) *
localDW -> bw2ribqmwm + ( real_T ) ( localB -> psyg3horlh_ppxrqq0gsf ==
localP -> P_1 ) ; localB -> op0crisgge_jacdjrqyev = localB ->
manl0faxjy_mdoasc5av4 + localP -> P_202 ; if ( localB ->
op0crisgge_jacdjrqyev > localP -> P_46 ) { localB -> kx1jqnqnu4 = localP ->
P_203 ; } else { localB -> kx1jqnqnu4 = localB -> op0crisgge_jacdjrqyev ; }
if ( ( muSingleScalarAbs ( localB -> dr05xp1kkz_idx_0 ) > localP -> P_24 ) ||
( muSingleScalarAbs ( localB -> dr05xp1kkz_idx_1 ) > localP -> P_25 ) ) {
ghadbep3bb ( & localB -> i45gejc5xa , & localP -> ghadbep3bbv ) ; } else if (
( ( muSingleScalarAbs ( fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 0 ]
) > localP -> P_28 ) && ( muSingleScalarAbs ( localP -> P_156 * fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 0 ] - localB -> fn3xejgdnz [ 0 ] ) >
localP -> P_26 ) ) || ( ( muSingleScalarAbs ( localP -> P_157 * fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 1 ] - localB -> fn3xejgdnz [ 1 ] ) >
localP -> P_27 ) && ( muSingleScalarAbs ( fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 1 ] ) > localP -> P_29 ) ) ) { ghadbep3bb ( & localB ->
i45gejc5xa , & localP -> acfz1zxm4t ) ; } else if ( localB -> cm5z5guoim >
localP -> P_0 ) { ghadbep3bb ( & localB -> i45gejc5xa , & localP ->
clwiujjdqo ) ; } else if ( muSingleScalarAbs ( localB ->
oo5vwsdpyd_dapv3jlyq5 ) > localP -> P_63 ) { ghadbep3bb ( & localB ->
i45gejc5xa , & localP -> jvbbqhrajh ) ; } else { ghadbep3bb ( & localB ->
i45gejc5xa , & localP -> ciy1c2o0rv ) ; } if ( localP -> P_211 ) { for (
localB -> i = 0 ; localB -> i <= 0 ; localB -> i += 2 ) { tmp_m =
_mm_loadu_pd ( & localB -> gv14ypdkhh [ localB -> i + 2 ] ) ; tmp_g =
_mm_loadu_pd ( & localB -> gv14ypdkhh [ localB -> i ] ) ; _mm_storeu_pd ( &
localB -> dwtigeetho_cxarnvbvui [ localB -> i ] , _mm_add_pd ( _mm_mul_pd (
tmp_m , _mm_set1_pd ( localB -> gv14ypdkhh [ 2 ] ) ) , _mm_mul_pd ( tmp_g ,
_mm_set1_pd ( localB -> gv14ypdkhh [ 0 ] ) ) ) ) ; tmp_m = _mm_loadu_pd ( &
localB -> gv14ypdkhh [ localB -> i + 2 ] ) ; tmp_g = _mm_loadu_pd ( & localB
-> gv14ypdkhh [ localB -> i ] ) ; _mm_storeu_pd ( & localB ->
dwtigeetho_cxarnvbvui [ localB -> i + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp_m ,
_mm_set1_pd ( localB -> gv14ypdkhh [ 3 ] ) ) , _mm_mul_pd ( tmp_g ,
_mm_set1_pd ( localB -> gv14ypdkhh [ 1 ] ) ) ) ) ; } } else { for ( localB ->
i = 0 ; localB -> i < 2 ; localB -> i ++ ) { localB -> dwtigeetho_cxarnvbvui
[ localB -> i ] = localB -> gv14ypdkhh [ localB -> i ] ; localB ->
dwtigeetho_cxarnvbvui [ localB -> i + 2 ] = localB -> gv14ypdkhh [ localB ->
i + 2 ] ; } } localB -> cnypqeocoh_g2mlkqadfk [ 0 ] = localB ->
ptk50tju32_idx_0 ; localB -> cnypqeocoh_g2mlkqadfk [ 1 ] = localB ->
ptk50tju32_idx_1 ; _mm_storeu_pd ( & localB -> dv [ 0 ] , _mm_add_pd (
_mm_mul_pd ( _mm_set_pd ( localB -> cnypqeocoh_g2mlkqadfk [ 0 ] , localP ->
P_65 [ 0 ] ) , _mm_set_pd ( localP -> P_65 [ 1 ] , localB ->
cnypqeocoh_g2mlkqadfk [ 0 ] ) ) , _mm_mul_pd ( _mm_set1_pd ( localB ->
cnypqeocoh_g2mlkqadfk [ 1 ] ) , _mm_loadu_pd ( & localP -> P_65 [ 2 ] ) ) ) )
; localB -> ptk50tju32_idx_0 = localB -> dv [ 0 ] ; localB ->
ptk50tju32_idx_1 = localB -> dv [ 1 ] ; localB -> dr05xp1kkz_idx_0 = localB
-> fagex23bbr_g1smspu5ke [ 1 ] ; localB -> dr05xp1kkz_idx_1 = localB ->
fagex23bbr_g1smspu5ke [ 0 ] ; for ( localB -> i = 0 ; localB -> i < 3 ;
localB -> i ++ ) { localB -> pp14lkc5ds [ localB -> i ] = ( ( localB ->
ohqb1xhwub_kkiq3xxxve [ 3 * localB -> i + 1 ] * localB -> dr05xp1kkz_idx_0 +
localB -> ohqb1xhwub_kkiq3xxxve [ 3 * localB -> i ] * localB ->
dr05xp1kkz_idx_1 ) + localB -> ohqb1xhwub_kkiq3xxxve [ 3 * localB -> i + 2 ]
* localB -> acc1 ) + localP -> P_79 [ localB -> i ] ; } localB ->
psyg3horlh_ppxrqq0gsf = localB -> pp14lkc5ds [ 2 ] ; _mm_storeu_pd ( & localB
-> dv [ 0 ] , _mm_mul_pd ( _mm_loadu_pd ( & localP -> P_66 [ 0 ] ) ,
_mm_set1_pd ( localB -> pp14lkc5ds [ 2 ] ) ) ) ; localB ->
n4u2urwllf_ipgns4eet5 = localB -> gosyl3wdxv_afnsueciae ; if ( localB ->
n4u2urwllf_ipgns4eet5 ) { if ( ! localDW -> g4zcogq4xi ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> g4zcogq4xi = true ; } tmp_m = _mm_mul_pd ( _mm_loadu_pd ( & localB
-> f2aifs3w2z [ 0 ] ) , _mm_set1_pd ( localB -> pjwac0m43u_nz4o0shxby - ( (
localP -> P_67 [ 0 ] * localB -> cnypqeocoh_g2mlkqadfk [ 0 ] + localP -> P_67
[ 1 ] * localB -> cnypqeocoh_g2mlkqadfk [ 1 ] ) + localP -> P_71 * localB ->
psyg3horlh_ppxrqq0gsf ) ) ) ; _mm_storeu_pd ( & localB -> i5xc4ys2pt [ 0 ] ,
tmp_m ) ; srUpdateBC ( localDW -> idn2v5d33m ) ; } else if ( localDW ->
g4zcogq4xi ) { ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket ->
_mdlRefSfcnS ) ; localB -> i5xc4ys2pt [ 0 ] = localP -> P_53 ; localB ->
i5xc4ys2pt [ 1 ] = localP -> P_53 ; localDW -> g4zcogq4xi = false ; } tmp_m =
_mm_add_pd ( _mm_add_pd ( _mm_set_pd ( localB -> dv [ 1 ] , localB -> dv [ 0
] ) , _mm_set_pd ( localB -> ptk50tju32_idx_1 , localB -> ptk50tju32_idx_0 )
) , _mm_loadu_pd ( & localB -> i5xc4ys2pt [ 0 ] ) ) ; _mm_storeu_pd ( &
localB -> litan2havi [ 0 ] , tmp_m ) ; localB -> bb0joiz0r4_merlcviukg [ 0 ]
= localB -> e1lqlcmnjc ; localB -> bb0joiz0r4_merlcviukg [ 1 ] = localB ->
mfnej0zskt ; localB -> bb0joiz0r4_merlcviukg [ 2 ] = localB -> jirymx3bmz ;
jfkq2sjtgw ( localB -> dozrtxyuv3 , localP -> P_212 ) ; localB ->
htuxom3ehb_dypejvacrn [ 0 ] = localB -> o3o03d4pvs_ldqodwenvz [ 0 ] ; localB
-> htuxom3ehb_dypejvacrn [ 1 ] = localB -> o3o03d4pvs_ldqodwenvz [ 1 ] ;
localB -> dr05xp1kkz_idx_0 = localP -> P_164 [ 0 ] * localB ->
htuxom3ehb_dypejvacrn [ 0 ] + localB -> htuxom3ehb_dypejvacrn [ 1 ] * localP
-> P_164 [ 2 ] ; localB -> dr05xp1kkz_idx_1 = localB -> htuxom3ehb_dypejvacrn
[ 0 ] * localP -> P_164 [ 1 ] + localB -> htuxom3ehb_dypejvacrn [ 1 ] *
localP -> P_164 [ 3 ] ; localB -> pgkgjde0do_oyypvi4boh = localB ->
mfnej0zskt ; localB -> moqiy0ilxa_idx_0 = localP -> P_165 [ 0 ] * localB ->
pgkgjde0do_oyypvi4boh ; localB -> ii0wg3e1gg_idx_2 = localP -> P_165 [ 1 ] *
localB -> pgkgjde0do_oyypvi4boh ; localB -> g5w5u4dlya_fkr0r45bcn = localB ->
k30khq2sgq_evg4t2fsev ; phrpuocqmv ( accn4cnket , localB ->
g5w5u4dlya_fkr0r45bcn , localB -> daepskgkuu , localB ->
djurzzuybk_nyxm0bsxsn , localP -> P_166 , localB -> htuxom3ehb_dypejvacrn ,
localP -> P_167 , localB -> pgkgjde0do_oyypvi4boh , & localB -> phrpuocqmvu ,
& localDW -> phrpuocqmvu , & localP -> phrpuocqmvu ) ; localB -> lpptmd10kb [
0 ] = ( localB -> moqiy0ilxa_idx_0 + localB -> dr05xp1kkz_idx_0 ) + localB ->
phrpuocqmvu . j3s0wrmgla [ 0 ] ; localB -> lpptmd10kb [ 1 ] = ( localB ->
ii0wg3e1gg_idx_2 + localB -> dr05xp1kkz_idx_1 ) + localB -> phrpuocqmvu .
j3s0wrmgla [ 1 ] ; jfkq2sjtgw ( localB -> i0dflyubrv , localP -> P_213 ) ;
localB -> ju1kqwcl4i_lxo5edjg3c [ 0 ] = localB -> ftax22owdm_dhamdvybc1 [ 0 ]
; localB -> ju1kqwcl4i_lxo5edjg3c [ 1 ] = localB -> ftax22owdm_dhamdvybc1 [ 1
] ; localB -> dr05xp1kkz_idx_0 = localP -> P_175 [ 0 ] * localB ->
ju1kqwcl4i_lxo5edjg3c [ 0 ] + localB -> ju1kqwcl4i_lxo5edjg3c [ 1 ] * localP
-> P_175 [ 2 ] ; localB -> dr05xp1kkz_idx_1 = localB -> ju1kqwcl4i_lxo5edjg3c
[ 0 ] * localP -> P_175 [ 1 ] + localB -> ju1kqwcl4i_lxo5edjg3c [ 1 ] *
localP -> P_175 [ 3 ] ; localB -> pxki2vskaa_nvsvtgkap4 = localB ->
e1lqlcmnjc ; localB -> moqiy0ilxa_idx_0 = localP -> P_176 [ 0 ] * localB ->
pxki2vskaa_nvsvtgkap4 ; localB -> ii0wg3e1gg_idx_2 = localP -> P_176 [ 1 ] *
localB -> pxki2vskaa_nvsvtgkap4 ; localB -> aj5zpa3lu0_izlwqhinl5 = localB ->
n0yx221con_ax3wx1gs5w ; phrpuocqmv ( accn4cnket , localB ->
aj5zpa3lu0_izlwqhinl5 , localB -> duljov25of , localB ->
iytlbzpr4u_icdfyazkhu , localP -> P_177 , localB -> ju1kqwcl4i_lxo5edjg3c ,
localP -> P_178 , localB -> pxki2vskaa_nvsvtgkap4 , & localB -> bm3dpymkhz ,
& localDW -> bm3dpymkhz , & localP -> bm3dpymkhz ) ; localB -> nhynb4rzef [ 0
] = ( localB -> moqiy0ilxa_idx_0 + localB -> dr05xp1kkz_idx_0 ) + localB ->
bm3dpymkhz . j3s0wrmgla [ 0 ] ; localB -> nhynb4rzef [ 1 ] = ( localB ->
ii0wg3e1gg_idx_2 + localB -> dr05xp1kkz_idx_1 ) + localB -> bm3dpymkhz .
j3s0wrmgla [ 1 ] ; localB -> jigrtjgnmk_h522xzlxvt = localB ->
aetaq30u4b_czkfpwuzm5 + localP -> P_204 ; if ( localB ->
jigrtjgnmk_h522xzlxvt > localP -> P_47 ) { localB -> kzbgwxxiio = localP ->
P_205 ; } else { localB -> kzbgwxxiio = localB -> jigrtjgnmk_h522xzlxvt ; }
muSingleScalarSinCos ( localB -> pr3cy3ex2z_bsqwvugooi , & localB ->
dr05xp1kkz_idx_0 , & localB -> dr05xp1kkz_idx_1 ) ; localB ->
ohqb1xhwub_kkiq3xxxve [ 0 ] = localB -> ohqb1xhwub_tmp_al00mdgrv4 ; localB ->
ohqb1xhwub_kkiq3xxxve [ 1 ] = localB -> ohqb1xhwub_tmp_ju13rw2h0m ; localB ->
ohqb1xhwub_kkiq3xxxve [ 2 ] = localB -> ohqb1xhwub_tmp_jz50ptvnrg ; localB ->
ohqb1xhwub_kkiq3xxxve [ 3 ] = localB -> ohqb1xhwub_tmp_o4f35lbcvx ; localB ->
ohqb1xhwub_kkiq3xxxve [ 4 ] = localB -> ohqb1xhwub_tmp ; localB ->
ohqb1xhwub_kkiq3xxxve [ 5 ] = localB -> ohqb1xhwub_tmp_fdinthrxmb ; localB ->
ohqb1xhwub_kkiq3xxxve [ 6 ] = - localB -> dr05xp1kkz_idx_0 ; localB ->
ohqb1xhwub_kkiq3xxxve [ 7 ] = localB -> oo5ahigr24_hv2ho1zopz ; localB ->
ohqb1xhwub_kkiq3xxxve [ 8 ] = localB -> g45qmwbnlv_idx_2 ; localB ->
gosyl3wdxv_afnsueciae = ( localB -> ce0g14gyt3_ezqlmfzvpq <= localP -> P_32 )
; localB -> k30khq2sgq_evg4t2fsev = ( ( localB -> fa3deew24c_idx_0 != localP
-> P_33 ) || ( localB -> ppg2d1lxzx_lnjdk5wtww != localP -> P_34 ) ) ; localB
-> pjwac0m43u_nz4o0shxby = localP -> P_87 [ 1 ] ; localB -> ptk50tju32_idx_0
= localP -> P_87 [ 0 ] ; localB -> ptk50tju32_idx_1 = localP -> P_87 [ 2 ] ;
for ( localB -> i = 0 ; localB -> i <= 0 ; localB -> i += 2 ) { _mm_storeu_pd
( & localB -> i1vq3tu1gj_bhxxfovxdy [ localB -> i ] , _mm_sub_pd ( _mm_set_pd
( localB -> fagex23bbr_g1smspu5ke [ localB -> i + 1 ] , localB ->
fagex23bbr_g1smspu5ke [ localB -> i ] ) , _mm_add_pd ( _mm_add_pd (
_mm_mul_pd ( _mm_set_pd ( localB -> ohqb1xhwub_kkiq3xxxve [ localB -> i + 4 ]
, localB -> ohqb1xhwub_kkiq3xxxve [ localB -> i + 3 ] ) , _mm_set1_pd (
localB -> pjwac0m43u_nz4o0shxby ) ) , _mm_mul_pd ( _mm_set_pd ( localB ->
ohqb1xhwub_kkiq3xxxve [ localB -> i + 1 ] , localB -> ohqb1xhwub_kkiq3xxxve [
localB -> i ] ) , _mm_set1_pd ( localB -> ptk50tju32_idx_0 ) ) ) , _mm_mul_pd
( _mm_set_pd ( localB -> ohqb1xhwub_kkiq3xxxve [ localB -> i + 7 ] , localB
-> ohqb1xhwub_kkiq3xxxve [ localB -> i + 6 ] ) , _mm_set1_pd ( localB ->
ptk50tju32_idx_1 ) ) ) ) ) ; } for ( localB -> i = 2 ; localB -> i < 3 ;
localB -> i ++ ) { localB -> i1vq3tu1gj_bhxxfovxdy [ localB -> i ] = localB
-> fagex23bbr_g1smspu5ke [ localB -> i ] - ( ( localB ->
ohqb1xhwub_kkiq3xxxve [ localB -> i + 3 ] * localB -> pjwac0m43u_nz4o0shxby +
localB -> ohqb1xhwub_kkiq3xxxve [ localB -> i ] * localB -> ptk50tju32_idx_0
) + localB -> ohqb1xhwub_kkiq3xxxve [ localB -> i + 6 ] * localB ->
ptk50tju32_idx_1 ) ; } localB -> conyevx543 [ 0 ] = ( real32_T ) ( localP ->
P_61 * localB -> i1vq3tu1gj_bhxxfovxdy [ 0 ] ) * ( real32_T ) localB ->
k30khq2sgq_evg4t2fsev * ( real32_T ) localB -> gosyl3wdxv_afnsueciae ; localB
-> conyevx543 [ 1 ] = ( real32_T ) ( localP -> P_61 * localB ->
i1vq3tu1gj_bhxxfovxdy [ 1 ] ) * ( real32_T ) localB -> k30khq2sgq_evg4t2fsev
* ( real32_T ) localB -> gosyl3wdxv_afnsueciae ; if ( localP -> P_214 ) { for
( localB -> i = 0 ; localB -> i < 4 ; localB -> i ++ ) { for ( localB -> cff
= 0 ; localB -> cff <= 0 ; localB -> cff += 4 ) { tmp_e = _mm_add_ps (
_mm_add_ps ( _mm_add_ps ( _mm_mul_ps ( _mm_set1_ps ( localB -> mpjpr4511f [
localB -> i + 4 ] ) , _mm_loadu_ps ( & localB -> mpjpr4511f [ localB -> cff +
4 ] ) ) , _mm_mul_ps ( _mm_set1_ps ( localB -> mpjpr4511f [ localB -> i ] ) ,
_mm_loadu_ps ( & localB -> mpjpr4511f [ localB -> cff ] ) ) ) , _mm_mul_ps (
_mm_set1_ps ( localB -> mpjpr4511f [ localB -> i + 8 ] ) , _mm_loadu_ps ( &
localB -> mpjpr4511f [ localB -> cff + 8 ] ) ) ) , _mm_mul_ps ( _mm_set1_ps (
localB -> mpjpr4511f [ localB -> i + 12 ] ) , _mm_loadu_ps ( & localB ->
mpjpr4511f [ localB -> cff + 12 ] ) ) ) ; _mm_storeu_ps ( & localB -> fv [ 0
] , tmp_e ) ; localB -> gide2x45b3_mbvzarwird [ localB -> i + ( localB -> cff
<< 2 ) ] = localB -> fv [ 0 ] ; localB -> gide2x45b3_mbvzarwird [ localB -> i
+ ( ( localB -> cff + 1 ) << 2 ) ] = localB -> fv [ 1 ] ; localB ->
gide2x45b3_mbvzarwird [ localB -> i + ( ( localB -> cff + 2 ) << 2 ) ] =
localB -> fv [ 2 ] ; localB -> gide2x45b3_mbvzarwird [ localB -> i + ( (
localB -> cff + 3 ) << 2 ) ] = localB -> fv [ 3 ] ; } } } else { for ( localB
-> i = 0 ; localB -> i < 4 ; localB -> i ++ ) { for ( localB -> cff = 0 ;
localB -> cff < 4 ; localB -> cff ++ ) { localB -> memOffset = localB -> cff
<< 2 ; localB -> gide2x45b3_mbvzarwird [ localB -> i + localB -> memOffset ]
= localB -> mpjpr4511f [ localB -> memOffset + localB -> i ] ; } } } localB
-> moyrp1tjer_fqdqrf4qbc [ 0 ] = localB -> cidhom5352_m3yhjduhi1 [ 0 ] ;
localB -> moyrp1tjer_fqdqrf4qbc [ 1 ] = localB -> cidhom5352_m3yhjduhi1 [ 1 ]
; localB -> moyrp1tjer_fqdqrf4qbc [ 2 ] = localB -> cidhom5352_m3yhjduhi1 [ 2
] ; localB -> moyrp1tjer_fqdqrf4qbc [ 3 ] = localB -> cidhom5352_m3yhjduhi1 [
3 ] ; localB -> ce0g14gyt3_ezqlmfzvpq = localB -> moyrp1tjer_fqdqrf4qbc [ 1 ]
; localB -> mvpuhqqzt1_nuebgmauvi = localB -> moyrp1tjer_fqdqrf4qbc [ 0 ] ;
localB -> ii0wg3e1gg_idx_2 = localB -> moyrp1tjer_fqdqrf4qbc [ 2 ] ; localB
-> oo5vwsdpyd_dapv3jlyq5 = localB -> moyrp1tjer_fqdqrf4qbc [ 3 ] ; for (
localB -> i = 0 ; localB -> i <= 0 ; localB -> i += 4 ) { _mm_storeu_ps ( &
localB -> cidhom5352_m3yhjduhi1 [ localB -> i ] , _mm_add_ps ( _mm_add_ps (
_mm_add_ps ( _mm_mul_ps ( _mm_loadu_ps ( & localP -> P_188 [ localB -> i + 4
] ) , _mm_set1_ps ( localB -> ce0g14gyt3_ezqlmfzvpq ) ) , _mm_mul_ps (
_mm_loadu_ps ( & localP -> P_188 [ localB -> i ] ) , _mm_set1_ps ( localB ->
mvpuhqqzt1_nuebgmauvi ) ) ) , _mm_mul_ps ( _mm_loadu_ps ( & localP -> P_188 [
localB -> i + 8 ] ) , _mm_set1_ps ( localB -> ii0wg3e1gg_idx_2 ) ) ) ,
_mm_mul_ps ( _mm_loadu_ps ( & localP -> P_188 [ localB -> i + 12 ] ) ,
_mm_set1_ps ( localB -> oo5vwsdpyd_dapv3jlyq5 ) ) ) ) ; } localB ->
dr05xp1kkz_idx_0 = localB -> conyevx543 [ 0 ] ; localB -> dr05xp1kkz_idx_1 =
localB -> conyevx543 [ 1 ] ; localB -> ce0g14gyt3_ezqlmfzvpq = localB ->
conyevx543 [ 1 ] ; localB -> mvpuhqqzt1_nuebgmauvi = localB -> conyevx543 [ 0
] ; for ( localB -> i = 0 ; localB -> i <= 0 ; localB -> i += 4 ) {
_mm_storeu_ps ( & localB -> eyy0jqowtu_cv5hdgrwft [ localB -> i ] ,
_mm_add_ps ( _mm_mul_ps ( _mm_loadu_ps ( & localP -> P_189 [ localB -> i + 4
] ) , _mm_set1_ps ( localB -> ce0g14gyt3_ezqlmfzvpq ) ) , _mm_mul_ps (
_mm_loadu_ps ( & localP -> P_189 [ localB -> i ] ) , _mm_set1_ps ( localB ->
mvpuhqqzt1_nuebgmauvi ) ) ) ) ; } localB -> d5aim33122_fft32lqtda = localB ->
m43kwna0ox_as0qznsxlv ; if ( localB -> d5aim33122_fft32lqtda ) { if ( !
localDW -> kh1khihcrt ) { if ( rtmGetTaskTime ( accn4cnket , 0 ) !=
rtmGetTStart ( accn4cnket ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; } localDW -> kh1khihcrt = true ; } localB ->
ce0g14gyt3_ezqlmfzvpq = localB -> moyrp1tjer_fqdqrf4qbc [ 1 ] ; localB ->
mvpuhqqzt1_nuebgmauvi = localB -> moyrp1tjer_fqdqrf4qbc [ 0 ] ; localB ->
ii0wg3e1gg_idx_2 = localB -> moyrp1tjer_fqdqrf4qbc [ 2 ] ; localB ->
oo5vwsdpyd_dapv3jlyq5 = localB -> moyrp1tjer_fqdqrf4qbc [ 3 ] ; for ( localB
-> i = 0 ; localB -> i < 2 ; localB -> i ++ ) { localB ->
nydgppj0cy_dhmrxtyqop [ localB -> i ] = ( ( localP -> P_190 [ localB -> i + 2
] * localB -> ce0g14gyt3_ezqlmfzvpq + localP -> P_190 [ localB -> i ] *
localB -> mvpuhqqzt1_nuebgmauvi ) + localP -> P_190 [ localB -> i + 4 ] *
localB -> ii0wg3e1gg_idx_2 ) + localP -> P_190 [ localB -> i + 6 ] * localB
-> oo5vwsdpyd_dapv3jlyq5 ; } localB -> ce0g14gyt3_ezqlmfzvpq = localB ->
dzdbq3k05m_jwzvbuczlb [ 0 ] - ( ( localP -> P_191 [ 0 ] * localB ->
dr05xp1kkz_idx_0 + localP -> P_191 [ 2 ] * localB -> dr05xp1kkz_idx_1 ) +
localB -> nydgppj0cy_dhmrxtyqop [ 0 ] ) ; localB -> dr05xp1kkz_idx_0 = localB
-> dzdbq3k05m_jwzvbuczlb [ 1 ] - ( ( localP -> P_191 [ 1 ] * localB ->
dr05xp1kkz_idx_0 + localP -> P_191 [ 3 ] * localB -> dr05xp1kkz_idx_1 ) +
localB -> nydgppj0cy_dhmrxtyqop [ 1 ] ) ; for ( localB -> i = 0 ; localB -> i
<= 0 ; localB -> i += 4 ) { tmp_e = _mm_loadu_ps ( & localB -> easxykepcj [
localB -> i + 4 ] ) ; tmp_i = _mm_loadu_ps ( & localB -> easxykepcj [ localB
-> i ] ) ; _mm_storeu_ps ( & localB -> duo1hld4hb [ localB -> i ] ,
_mm_add_ps ( _mm_mul_ps ( tmp_e , _mm_set1_ps ( localB -> dr05xp1kkz_idx_0 )
) , _mm_mul_ps ( tmp_i , _mm_set1_ps ( localB -> ce0g14gyt3_ezqlmfzvpq ) ) )
) ; } srUpdateBC ( localDW -> mfifybuxty ) ; } else if ( localDW ->
kh1khihcrt ) { ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket ->
_mdlRefSfcnS ) ; localB -> duo1hld4hb [ 0 ] = localP -> P_97 ; localB ->
duo1hld4hb [ 1 ] = localP -> P_97 ; localB -> duo1hld4hb [ 2 ] = localP ->
P_97 ; localB -> duo1hld4hb [ 3 ] = localP -> P_97 ; localDW -> kh1khihcrt =
false ; } tmp_e = _mm_add_ps ( _mm_add_ps ( _mm_loadu_ps ( & localB ->
eyy0jqowtu_cv5hdgrwft [ 0 ] ) , _mm_loadu_ps ( & localB ->
cidhom5352_m3yhjduhi1 [ 0 ] ) ) , _mm_loadu_ps ( & localB -> duo1hld4hb [ 0 ]
) ) ; _mm_storeu_ps ( & localB -> eixqpjyie2 [ 0 ] , tmp_e ) ; localB ->
fsdppj0z1z_c0dok3111h = localB -> ixkdpmf1nu_m3ybdk4ikc + localP -> P_206 ;
if ( localB -> fsdppj0z1z_c0dok3111h > localP -> P_48 ) { localB ->
neuaowcb40 = localP -> P_207 ; } else { localB -> neuaowcb40 = localB ->
fsdppj0z1z_c0dok3111h ; } muSingleScalarSinCos ( localB ->
pr3cy3ex2z_bsqwvugooi , & localB -> dr05xp1kkz_idx_0 , & localB ->
dr05xp1kkz_idx_1 ) ; localB -> ohqb1xhwub_kkiq3xxxve [ 0 ] = localB ->
ohqb1xhwub_tmp_al00mdgrv4 ; localB -> ohqb1xhwub_kkiq3xxxve [ 1 ] = localB ->
ohqb1xhwub_tmp_ju13rw2h0m ; localB -> ohqb1xhwub_kkiq3xxxve [ 2 ] = localB ->
ohqb1xhwub_tmp_jz50ptvnrg ; localB -> ohqb1xhwub_kkiq3xxxve [ 3 ] = localB ->
ohqb1xhwub_tmp_o4f35lbcvx ; localB -> ohqb1xhwub_kkiq3xxxve [ 4 ] = localB ->
ohqb1xhwub_tmp ; localB -> ohqb1xhwub_kkiq3xxxve [ 5 ] = localB ->
ohqb1xhwub_tmp_fdinthrxmb ; localB -> ohqb1xhwub_kkiq3xxxve [ 6 ] = - localB
-> dr05xp1kkz_idx_0 ; localB -> ohqb1xhwub_kkiq3xxxve [ 7 ] = localB ->
oo5ahigr24_hv2ho1zopz ; localB -> ohqb1xhwub_kkiq3xxxve [ 8 ] = localB ->
g45qmwbnlv_idx_2 ; localB -> dr05xp1kkz_idx_0 = localB -> fn3xejgdnz [ 0 ] ;
localB -> mvpuhqqzt1_nuebgmauvi = localB -> fn3xejgdnz [ 1 ] ; for ( localB
-> i = 0 ; localB -> i < 3 ; localB -> i ++ ) { localB -> mvsfnj1n2e [ localB
-> i ] = ( localB -> ohqb1xhwub_kkiq3xxxve [ 3 * localB -> i + 1 ] * localB
-> mvpuhqqzt1_nuebgmauvi + localB -> ohqb1xhwub_kkiq3xxxve [ 3 * localB -> i
] * localB -> dr05xp1kkz_idx_0 ) + localB -> ohqb1xhwub_kkiq3xxxve [ 3 *
localB -> i + 2 ] * localB -> g45qmwbnlv_idx_1 ; } } void otjykwnhb3TID2 (
eo4bbte2ey * localB , nu4qaxumex * localP ) { int_T tid = 0 ; real_T
pxp0y55bm3 ; real32_T dbxcl2mz0n [ 4 ] ; real32_T lqjlqstyi1 ; real32_T
bkoyhqhfho ; real32_T agxgxchdo2 ; real32_T oylms1k5dp [ 16 ] ; int32_T i ;
memcpy ( & localB -> nseoymslxl [ 0 ] , & localP -> P_160 [ 0 ] , sizeof (
real32_T ) << 4U ) ; localB -> f2aifs3w2z [ 0 ] = localP -> P_69 [ 0 ] ;
localB -> f2aifs3w2z [ 1 ] = localP -> P_69 [ 1 ] ; localB -> m33qvduepv [ 0
] = localP -> P_70 [ 0 ] ; localB -> m33qvduepv [ 1 ] = localP -> P_70 [ 1 ]
; pxp0y55bm3 = 0.0 ; localB -> gv14ypdkhh [ 0 ] = localP -> P_68 [ 0 ] ;
localB -> gv14ypdkhh [ 1 ] = localP -> P_68 [ 1 ] ; localB -> gv14ypdkhh [ 2
] = localP -> P_68 [ 2 ] ; localB -> gv14ypdkhh [ 3 ] = localP -> P_68 [ 3 ]
; dbxcl2mz0n [ 0 ] = ( real32_T ) localP -> P_72 [ 0 ] ; dbxcl2mz0n [ 1 ] = (
real32_T ) localP -> P_72 [ 1 ] ; dbxcl2mz0n [ 2 ] = ( real32_T ) localP ->
P_72 [ 2 ] ; dbxcl2mz0n [ 3 ] = ( real32_T ) localP -> P_72 [ 3 ] ; localB ->
pxw0oa3g5v [ 0 ] = localP -> P_78 [ 0 ] ; localB -> pxw0oa3g5v [ 1 ] = localP
-> P_78 [ 1 ] ; localB -> daepskgkuu [ 0 ] = ( real32_T ) localP -> P_81 [ 0
] ; localB -> daepskgkuu [ 1 ] = ( real32_T ) localP -> P_81 [ 1 ] ; localB
-> mouuzp511w [ 0 ] = ( real32_T ) localP -> P_82 [ 0 ] ; localB ->
mouuzp511w [ 1 ] = ( real32_T ) localP -> P_82 [ 1 ] ; lqjlqstyi1 = 0.0F ;
localB -> dozrtxyuv3 [ 0 ] = ( real32_T ) localP -> P_80 [ 0 ] ; localB ->
dozrtxyuv3 [ 1 ] = ( real32_T ) localP -> P_80 [ 1 ] ; localB -> dozrtxyuv3 [
2 ] = ( real32_T ) localP -> P_80 [ 2 ] ; localB -> dozrtxyuv3 [ 3 ] = (
real32_T ) localP -> P_80 [ 3 ] ; localB -> kd1mn2gm1l [ 0 ] = localP ->
P_174 [ 0 ] ; localB -> kd1mn2gm1l [ 1 ] = localP -> P_174 [ 1 ] ; localB ->
duljov25of [ 0 ] = ( real32_T ) localP -> P_84 [ 0 ] ; localB -> duljov25of [
1 ] = ( real32_T ) localP -> P_84 [ 1 ] ; localB -> os2mdc4s5m [ 0 ] = (
real32_T ) localP -> P_85 [ 0 ] ; localB -> os2mdc4s5m [ 1 ] = ( real32_T )
localP -> P_85 [ 1 ] ; bkoyhqhfho = 0.0F ; localB -> i0dflyubrv [ 0 ] = (
real32_T ) localP -> P_83 [ 0 ] ; localB -> i0dflyubrv [ 1 ] = ( real32_T )
localP -> P_83 [ 1 ] ; localB -> i0dflyubrv [ 2 ] = ( real32_T ) localP ->
P_83 [ 2 ] ; localB -> i0dflyubrv [ 3 ] = ( real32_T ) localP -> P_83 [ 3 ] ;
localB -> f3n0hqhcti [ 0 ] = localP -> P_185 [ 0 ] ; localB -> f3n0hqhcti [ 1
] = localP -> P_185 [ 1 ] ; for ( i = 0 ; i < 8 ; i ++ ) { localB ->
easxykepcj [ i ] = ( real32_T ) localP -> P_89 [ i ] ; } for ( i = 0 ; i < 8
; i ++ ) { localB -> ejwij1u00i [ i ] = ( real32_T ) localP -> P_90 [ i ] ; }
agxgxchdo2 = 0.0F ; for ( i = 0 ; i < 16 ; i ++ ) { localB -> mpjpr4511f [ i
] = ( real32_T ) localP -> P_88 [ i ] ; } memcpy ( & oylms1k5dp [ 0 ] , &
localP -> P_192 [ 0 ] , sizeof ( real32_T ) << 4U ) ; localB -> hh02nqa2sk [
0 ] = localP -> P_198 [ 0 ] ; localB -> hh02nqa2sk [ 1 ] = localP -> P_198 [
1 ] ; localB -> hh02nqa2sk [ 2 ] = localP -> P_198 [ 2 ] ; localB ->
hh02nqa2sk [ 3 ] = localP -> P_198 [ 3 ] ; } void lsjhvu4egy ( eo4bbte2ey *
localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) { int32_T k ; int32_T
memOffset ; real32_T fn3xejgdnz_p ; localDW -> dq5lalhp1e = ( int8_T ) localP
-> P_215 ; localDW -> mi4mocbazh = localB -> mlxcplakjs [ 0 ] ; localDW ->
de4yc1bkky = false ; localDW -> b3fmbw5stg [ 0 ] += localP -> P_101 * localB
-> mvsfnj1n2e [ 0 ] ; localDW -> mtonzezz2z [ 0 ] = localB -> litan2havi [ 0
] ; localDW -> aq2aymvaio [ 2 ] = localDW -> aq2aymvaio [ 1 ] ; localDW ->
ddv3ztj2wp [ 2 ] = localDW -> ddv3ztj2wp [ 1 ] ; localDW -> b3fmbw5stg [ 1 ]
+= localP -> P_101 * localB -> mvsfnj1n2e [ 1 ] ; localDW -> mtonzezz2z [ 1 ]
= localB -> litan2havi [ 1 ] ; localDW -> aq2aymvaio [ 1 ] = localDW ->
aq2aymvaio [ 0 ] ; localDW -> ddv3ztj2wp [ 1 ] = localDW -> ddv3ztj2wp [ 0 ]
; localDW -> aq2aymvaio [ 0 ] = localDW -> orkq4iljgu ; localDW -> ddv3ztj2wp
[ 0 ] = localDW -> f2ynnmexgv ; localDW -> dzwopklw3c += localP -> P_108 *
localB -> jirymx3bmz ; localDW -> bbkjtf4kuy -- ; if ( localDW -> bbkjtf4kuy
< 0 ) { localDW -> bbkjtf4kuy = 4 ; } localDW -> d4fp3a2mpz [ localDW ->
bbkjtf4kuy ] = localB -> ci4d4u2maw [ 0 ] ; localDW -> d4fp3a2mpz [ localDW
-> bbkjtf4kuy + 5 ] = localB -> ci4d4u2maw [ 1 ] ; localDW -> d4fp3a2mpz [
localDW -> bbkjtf4kuy + 10 ] = localB -> ci4d4u2maw [ 2 ] ; localDW ->
jd3dqtmo2p = false ; localDW -> f1jy25gy04 = false ; localDW -> fl0vv44tbs [
0 ] = localB -> lpptmd10kb [ 0 ] ; localDW -> as5a0ikbk1 [ 0 ] = localB ->
nhynb4rzef [ 0 ] ; localDW -> fl0vv44tbs [ 1 ] = localB -> lpptmd10kb [ 1 ] ;
localDW -> as5a0ikbk1 [ 1 ] = localB -> nhynb4rzef [ 1 ] ; localDW ->
l3lcputuyl = localB -> neuaowcb40 ; localDW -> ncgo1wegzg = localDW ->
b1nmhkw4zo ; localDW -> mirtkskmtr = localDW -> n0mydijbcx ; localDW ->
pjgu33zeph = localB -> kzbgwxxiio ; localDW -> gdn4qfzvsk = false ; localDW
-> jduomia1pb [ 4 ] = localDW -> jduomia1pb [ 3 ] ; localDW -> od5c00niot [ 0
] = localB -> eixqpjyie2 [ 0 ] ; localDW -> jduomia1pb [ 3 ] = localDW ->
jduomia1pb [ 2 ] ; localDW -> od5c00niot [ 1 ] = localB -> eixqpjyie2 [ 1 ] ;
localDW -> jduomia1pb [ 2 ] = localDW -> jduomia1pb [ 1 ] ; localDW ->
od5c00niot [ 2 ] = localB -> eixqpjyie2 [ 2 ] ; localDW -> jduomia1pb [ 1 ] =
localDW -> jduomia1pb [ 0 ] ; localDW -> od5c00niot [ 3 ] = localB ->
eixqpjyie2 [ 3 ] ; localDW -> jduomia1pb [ 0 ] = localDW -> iwg03owvar ; for
( k = 0 ; k < 2 ; k ++ ) { memOffset = k * 5 ; localDW -> dqfv1m130o [
memOffset + 4 ] = localDW -> dqfv1m130o [ memOffset + 3 ] ; localDW ->
dqfv1m130o [ memOffset + 3 ] = localDW -> dqfv1m130o [ memOffset + 2 ] ;
localDW -> dqfv1m130o [ memOffset + 2 ] = localDW -> dqfv1m130o [ memOffset +
1 ] ; localDW -> dqfv1m130o [ memOffset + 1 ] = localDW -> dqfv1m130o [
memOffset ] ; localDW -> dqfv1m130o [ memOffset ] = localDW -> mf2pp40f5v [ k
] ; localDW -> meognsjf1t [ k ] = localB -> gazlhffgqp [ k ] ; fn3xejgdnz_p =
localB -> fn3xejgdnz [ k ] ; localDW -> gcgpru4rcb [ k ] = fn3xejgdnz_p ;
localDW -> peklmaellz [ k ] = fn3xejgdnz_p ; } localDW -> gaxgdudnvc = localB
-> nbs40rrljt ; localDW -> bsetqjfri4 += localP -> P_131 * localB ->
d2rwb413j0 ; if ( localDW -> bsetqjfri4 > localP -> P_133 ) { localDW ->
bsetqjfri4 = localP -> P_133 ; } else if ( localDW -> bsetqjfri4 < localP ->
P_134 ) { localDW -> bsetqjfri4 = localP -> P_134 ; } localDW -> fpr1qi0oiw =
( int8_T ) localB -> gdt0sjgot2 ; localDW -> dsjbzv2lh4 [ 0 ] += localP ->
P_139 * localB -> bmlfyp0nve [ 0 ] ; localDW -> gixvkpnpus [ 0 ] = localDW ->
pwlp5beuqs [ 0 ] ; localDW -> ow5xb5ovt0 [ 0 ] += localP -> P_143 * localB ->
lfb13k2lpd [ 0 ] ; localDW -> krs1cvkxzk [ 0 ] += localP -> P_144 * localB ->
fzoyetmmsh [ 0 ] ; localDW -> dsjbzv2lh4 [ 1 ] += localP -> P_139 * localB ->
bmlfyp0nve [ 1 ] ; localDW -> gixvkpnpus [ 1 ] = localDW -> pwlp5beuqs [ 1 ]
; localDW -> ow5xb5ovt0 [ 1 ] += localP -> P_143 * localB -> lfb13k2lpd [ 1 ]
; localDW -> krs1cvkxzk [ 1 ] += localP -> P_144 * localB -> fzoyetmmsh [ 1 ]
; localDW -> c4kiksmhh2 += localP -> P_148 * localB -> i1pkfeiqf3 ; localDW
-> dxm3w2i52x = localB -> kx1jqnqnu4 ; localDW -> bw2ribqmwm = localB ->
cm5z5guoim ; } void eyt3piuhqz ( ipf5ube4r0 * const accn4cnket , dmp1xsadgu *
localDW ) { if ( ( ssGetSimMode ( accn4cnket -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( accn4cnket -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
puq03cpvbg . AQHandles ) { sdiTerminateStreaming ( & localDW -> puq03cpvbg .
AQHandles ) ; } } } void fqy4gw0ae5 ( boolean_T pt42dvw1sk , izqi5nimcm *
localB ) { localB -> jyqjln1vli = ( ( int32_T ) pt42dvw1sk > 1 - pt42dvw1sk )
; } void dw0zngvhyq ( void ) { ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj
. rtm ) ; mr51bswvyz ( accn4cnket , & dqykr4eggmg . otjykwnhb3s ) ; } void
ha1ipjbq54 ( uint8_T * o3vpgniqky ) { dqykr4eggmg . h0he12zmo4 [ 0 ] =
b1hr2q0zjh . P_28 ; dqykr4eggmg . gi5bdjcokf = 0 ; dqykr4eggmg . oq44mkeutp [
0 ] = b1hr2q0zjh . P_29 ; dqykr4eggmg . fb0f52aifb = 0 ; dqykr4eggmg .
il2faoanlq [ 0 ] = b1hr2q0zjh . P_30 ; dqykr4eggmg . nkpo31rxx0 = 0 ;
dqykr4eggmg . naa4ayikn5 [ 0 ] = b1hr2q0zjh . P_31 ; dqykr4eggmg . hhjrbx5czh
= 0 ; dqykr4eggmg . b1b5mp0pkt [ 0 ] = b1hr2q0zjh . P_32 ; dqykr4eggmg .
cgj3sq3fee = 0 ; dqykr4eggmg . kks4yi0jko [ 0 ] = b1hr2q0zjh . P_33 ;
dqykr4eggmg . ds3lkztnj2 = 0 ; dqykr4eggmg . izahidgm1z [ 0 ] = b1hr2q0zjh .
P_34 ; dqykr4eggmg . hvrivdkew0 = 0 ; dqykr4eggmg . ipcjwvn31g [ 0 ] =
b1hr2q0zjh . P_35 ; dqykr4eggmg . curdnu3seh = 0 ; dqykr4eggmg . o500imgphq [
0 ] = b1hr2q0zjh . P_36 ; dqykr4eggmg . adixdqzc1c = 0 ; ic5jb3movn ( &
ksm0js2nhsy . otjykwnhb3s , & dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh .
otjykwnhb3s ) ; * o3vpgniqky = ksm0js2nhsy . otjykwnhb3s . i45gejc5xa ; }
void gwlyno50ln ( void ) { dqykr4eggmg . h0he12zmo4 [ 0 ] = b1hr2q0zjh . P_28
; dqykr4eggmg . gi5bdjcokf = 0 ; dqykr4eggmg . oq44mkeutp [ 0 ] = b1hr2q0zjh
. P_29 ; dqykr4eggmg . fb0f52aifb = 0 ; dqykr4eggmg . il2faoanlq [ 0 ] =
b1hr2q0zjh . P_30 ; dqykr4eggmg . nkpo31rxx0 = 0 ; dqykr4eggmg . naa4ayikn5 [
0 ] = b1hr2q0zjh . P_31 ; dqykr4eggmg . hhjrbx5czh = 0 ; dqykr4eggmg .
b1b5mp0pkt [ 0 ] = b1hr2q0zjh . P_32 ; dqykr4eggmg . cgj3sq3fee = 0 ;
dqykr4eggmg . kks4yi0jko [ 0 ] = b1hr2q0zjh . P_33 ; dqykr4eggmg . ds3lkztnj2
= 0 ; dqykr4eggmg . izahidgm1z [ 0 ] = b1hr2q0zjh . P_34 ; dqykr4eggmg .
hvrivdkew0 = 0 ; dqykr4eggmg . ipcjwvn31g [ 0 ] = b1hr2q0zjh . P_35 ;
dqykr4eggmg . curdnu3seh = 0 ; dqykr4eggmg . o500imgphq [ 0 ] = b1hr2q0zjh .
P_36 ; dqykr4eggmg . adixdqzc1c = 0 ; bxsrqc204k ( & ksm0js2nhsy .
otjykwnhb3s , & dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ; }
void bog0frvixl ( void ) { kegjp2lgms ( & ksm0js2nhsy . otjykwnhb3s , &
dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ; } void k3yxem35zg
( void ) { dqykr4eggmg . jjrfotind4 = true ; dqykr4eggmg . l152eirbdu .
isInitialized = 1 ; } void flightControlSystemTID0 ( const SensorsBus *
pxdb2gu5va , real32_T pikqq4svts [ 4 ] , uint8_T * o3vpgniqky ) { ipf5ube4r0
* const accn4cnket = & ( lhjbdsj2rj . rtm ) ; ksm0js2nhsy .
gr00icyda5_bhxxfovxdy = dqykr4eggmg . h0he12zmo4 [ dqykr4eggmg . gi5bdjcokf ]
; ksm0js2nhsy . mrhmv5vqk4_pbm3vprmfu = dqykr4eggmg . oq44mkeutp [
dqykr4eggmg . fb0f52aifb ] ; ksm0js2nhsy . bx0igf42xo_cv5hdgrwft =
dqykr4eggmg . il2faoanlq [ dqykr4eggmg . nkpo31rxx0 ] ; ksm0js2nhsy .
fgoorolbvp_fqdqrf4qbc = dqykr4eggmg . naa4ayikn5 [ dqykr4eggmg . hhjrbx5czh ]
; ksm0js2nhsy . n4jtkmq5sv_g2mlkqadfk = dqykr4eggmg . b1b5mp0pkt [
dqykr4eggmg . cgj3sq3fee ] ; ksm0js2nhsy . ail53ug1xu_g1smspu5ke =
dqykr4eggmg . kks4yi0jko [ dqykr4eggmg . ds3lkztnj2 ] ; ksm0js2nhsy .
d1yu0gfrce_merlcviukg = dqykr4eggmg . izahidgm1z [ dqykr4eggmg . hvrivdkew0 ]
; ksm0js2nhsy . l3pijhfz4i_nz4o0shxby = dqykr4eggmg . ipcjwvn31g [
dqykr4eggmg . curdnu3seh ] ; ksm0js2nhsy . nsf10nbxwc_ppxrqq0gsf =
dqykr4eggmg . o500imgphq [ dqykr4eggmg . adixdqzc1c ] ; otjykwnhb3 (
accn4cnket , pxdb2gu5va , ksm0js2nhsy . gr00icyda5_bhxxfovxdy , ksm0js2nhsy .
mrhmv5vqk4_pbm3vprmfu , ksm0js2nhsy . bx0igf42xo_cv5hdgrwft , ksm0js2nhsy .
fgoorolbvp_fqdqrf4qbc , ksm0js2nhsy . n4jtkmq5sv_g2mlkqadfk , ksm0js2nhsy .
ail53ug1xu_g1smspu5ke , ksm0js2nhsy . d1yu0gfrce_merlcviukg , ksm0js2nhsy .
l3pijhfz4i_nz4o0shxby , ksm0js2nhsy . nsf10nbxwc_ppxrqq0gsf , & ksm0js2nhsy .
otjykwnhb3s , & dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s , &
f51itwtzkqf . otjykwnhb3s ) ; pikqq4svts [ 0 ] = ksm0js2nhsy . otjykwnhb3s .
nasakeuczj [ 0 ] ; pikqq4svts [ 1 ] = ksm0js2nhsy . otjykwnhb3s . nasakeuczj
[ 1 ] ; pikqq4svts [ 2 ] = ksm0js2nhsy . otjykwnhb3s . nasakeuczj [ 2 ] ;
pikqq4svts [ 3 ] = ksm0js2nhsy . otjykwnhb3s . nasakeuczj [ 3 ] ; *
o3vpgniqky = ksm0js2nhsy . otjykwnhb3s . i45gejc5xa ; } void
flightControlSystemTID1 ( void ) { boolean_T bqa42bekyv ; boolean_T
lohuqlkykh ; boolean_T ivd5vy1an3 ; boolean_T jdkf1xc4c5 ; boolean_T
psqnrxayca ; boolean_T h4hdbzodlk ; boolean_T mnkaiv55qn ; real_T bekdqnimyg
; real_T mv2y41hvsc ; int32_T i ; int32_T nz ; int32_T tmp ; uint32_T tmp_p ;
tmp = 0 ; for ( i = 0 ; i < 1749 ; i ++ ) { tmp = ( int32_T ) ( ( uint32_T )
( ( 0.0 - 0.0 / b1hr2q0zjh . P_20 ) - 0.0 / b1hr2q0zjh . P_20 > b1hr2q0zjh .
P_2 ) + ( uint32_T ) tmp ) ; } bqa42bekyv = ( ( uint16_T ) tmp > b1hr2q0zjh .
P_11 ) ; fqy4gw0ae5 ( bqa42bekyv , & ksm0js2nhsy . k12xe5lsgy ) ; for ( i = 0
; i < 1749 ; i ++ ) { ksm0js2nhsy . f4ss5rtui2_cl54gopm0x [ i ] = ( ( 0.0 -
0.0 / b1hr2q0zjh . P_19 ) - 0.0 / b1hr2q0zjh . P_19 > b1hr2q0zjh . P_1 ) ; }
for ( i = 0 ; i < 53 ; i ++ ) { tmp = i * 33 ; tmp_p = 0U ; for ( nz = 0 ; nz
< 33 ; nz ++ ) { tmp_p += ksm0js2nhsy . f4ss5rtui2_cl54gopm0x [ tmp + nz ] ;
} ksm0js2nhsy . bn5tq1jyxz_cxarnvbvui [ i ] = ( ( uint16_T ) tmp_p >
b1hr2q0zjh . P_10 ) ; } nz = ksm0js2nhsy . bn5tq1jyxz_cxarnvbvui [ 0 ] ; for
( i = 0 ; i < 52 ; i ++ ) { nz += ksm0js2nhsy . bn5tq1jyxz_cxarnvbvui [ i + 1
] ; } mv2y41hvsc = ( nz > 53 - nz ) ; for ( i = 0 ; i < 1782 ; i ++ ) {
ksm0js2nhsy . ijh0tyl5we_mbvzarwird [ i ] = ( ( 0.0 - 0.0 / b1hr2q0zjh . P_21
) - 0.0 / b1hr2q0zjh . P_21 > b1hr2q0zjh . P_3 ) ; } for ( i = 0 ; i < 54 ; i
++ ) { tmp = i * 33 ; tmp_p = 0U ; for ( nz = 0 ; nz < 33 ; nz ++ ) { tmp_p
+= ksm0js2nhsy . ijh0tyl5we_mbvzarwird [ tmp + nz ] ; } ksm0js2nhsy .
gm44eoz0in_kkiq3xxxve [ i ] = ( ( uint16_T ) tmp_p > b1hr2q0zjh . P_12 ) ; }
nz = ksm0js2nhsy . gm44eoz0in_kkiq3xxxve [ 0 ] ; for ( i = 0 ; i < 53 ; i ++
) { nz += ksm0js2nhsy . gm44eoz0in_kkiq3xxxve [ i + 1 ] ; } bekdqnimyg = ( nz
> 54 - nz ) ; tmp = 0 ; for ( i = 0 ; i < 2862 ; i ++ ) { tmp = ( int32_T ) (
( uint32_T ) ( ( 0.0 - 0.0 / b1hr2q0zjh . P_22 ) - 0.0 / b1hr2q0zjh . P_22 >
b1hr2q0zjh . P_4 ) + ( uint32_T ) tmp ) ; } lohuqlkykh = ( ( uint16_T ) tmp >
b1hr2q0zjh . P_13 ) ; fqy4gw0ae5 ( lohuqlkykh , & ksm0js2nhsy . oiwlpyyc3d )
; tmp = 0 ; for ( i = 0 ; i < 2916 ; i ++ ) { tmp = ( int32_T ) ( ( uint32_T
) ( ( 0.0 - 0.0 / b1hr2q0zjh . P_23 ) - 0.0 / b1hr2q0zjh . P_23 > b1hr2q0zjh
. P_5 ) + ( uint32_T ) tmp ) ; } ivd5vy1an3 = ( ( uint16_T ) tmp > b1hr2q0zjh
. P_14 ) ; fqy4gw0ae5 ( ivd5vy1an3 , & ksm0js2nhsy . iopxkn4ii5 ) ; tmp = 0 ;
for ( i = 0 ; i < 2916 ; i ++ ) { tmp = ( int32_T ) ( ( uint32_T ) ( ( 0.0 -
0.0 / b1hr2q0zjh . P_24 ) - 0.0 / b1hr2q0zjh . P_24 > b1hr2q0zjh . P_6 ) + (
uint32_T ) tmp ) ; } jdkf1xc4c5 = ( ( uint16_T ) tmp > b1hr2q0zjh . P_15 ) ;
fqy4gw0ae5 ( jdkf1xc4c5 , & ksm0js2nhsy . pkkonheww3 ) ; tmp = 0 ; for ( i =
0 ; i < 1749 ; i ++ ) { tmp = ( int32_T ) ( ( uint32_T ) ( ( 0.0 - 0.0 /
b1hr2q0zjh . P_25 ) - 0.0 / b1hr2q0zjh . P_25 > b1hr2q0zjh . P_7 ) + (
uint32_T ) tmp ) ; } psqnrxayca = ( ( uint16_T ) tmp > b1hr2q0zjh . P_16 ) ;
fqy4gw0ae5 ( psqnrxayca , & ksm0js2nhsy . guuqgriiic ) ; tmp = 0 ; for ( i =
0 ; i < 1749 ; i ++ ) { tmp = ( int32_T ) ( ( uint32_T ) ( ( 0.0 - 0.0 /
b1hr2q0zjh . P_26 ) - 0.0 / b1hr2q0zjh . P_26 > b1hr2q0zjh . P_8 ) + (
uint32_T ) tmp ) ; } h4hdbzodlk = ( ( uint16_T ) tmp > b1hr2q0zjh . P_17 ) ;
fqy4gw0ae5 ( h4hdbzodlk , & ksm0js2nhsy . o05ckp3wtd ) ; tmp = 0 ; for ( i =
0 ; i < 1782 ; i ++ ) { tmp = ( int32_T ) ( ( uint32_T ) ( ( 0.0 - 0.0 /
b1hr2q0zjh . P_27 ) - 0.0 / b1hr2q0zjh . P_27 > b1hr2q0zjh . P_9 ) + (
uint32_T ) tmp ) ; } mnkaiv55qn = ( ( uint16_T ) tmp > b1hr2q0zjh . P_18 ) ;
fqy4gw0ae5 ( mnkaiv55qn , & ksm0js2nhsy . lg2dk4su2p ) ; dqykr4eggmg .
h0he12zmo4 [ dqykr4eggmg . gi5bdjcokf == 0 ] = ksm0js2nhsy . k12xe5lsgy .
jyqjln1vli ; dqykr4eggmg . gi5bdjcokf = ( int8_T ) ( dqykr4eggmg . gi5bdjcokf
== 0 ) ; dqykr4eggmg . oq44mkeutp [ dqykr4eggmg . fb0f52aifb == 0 ] =
mv2y41hvsc ; dqykr4eggmg . fb0f52aifb = ( int8_T ) ( dqykr4eggmg . fb0f52aifb
== 0 ) ; dqykr4eggmg . il2faoanlq [ dqykr4eggmg . nkpo31rxx0 == 0 ] =
bekdqnimyg ; dqykr4eggmg . nkpo31rxx0 = ( int8_T ) ( dqykr4eggmg . nkpo31rxx0
== 0 ) ; dqykr4eggmg . naa4ayikn5 [ dqykr4eggmg . hhjrbx5czh == 0 ] =
ksm0js2nhsy . oiwlpyyc3d . jyqjln1vli ; dqykr4eggmg . hhjrbx5czh = ( int8_T )
( dqykr4eggmg . hhjrbx5czh == 0 ) ; dqykr4eggmg . b1b5mp0pkt [ dqykr4eggmg .
cgj3sq3fee == 0 ] = ksm0js2nhsy . iopxkn4ii5 . jyqjln1vli ; dqykr4eggmg .
cgj3sq3fee = ( int8_T ) ( dqykr4eggmg . cgj3sq3fee == 0 ) ; dqykr4eggmg .
kks4yi0jko [ dqykr4eggmg . ds3lkztnj2 == 0 ] = ksm0js2nhsy . pkkonheww3 .
jyqjln1vli ; dqykr4eggmg . ds3lkztnj2 = ( int8_T ) ( dqykr4eggmg . ds3lkztnj2
== 0 ) ; dqykr4eggmg . izahidgm1z [ dqykr4eggmg . hvrivdkew0 == 0 ] =
ksm0js2nhsy . guuqgriiic . jyqjln1vli ; dqykr4eggmg . hvrivdkew0 = ( int8_T )
( dqykr4eggmg . hvrivdkew0 == 0 ) ; dqykr4eggmg . ipcjwvn31g [ dqykr4eggmg .
curdnu3seh == 0 ] = ksm0js2nhsy . o05ckp3wtd . jyqjln1vli ; dqykr4eggmg .
curdnu3seh = ( int8_T ) ( dqykr4eggmg . curdnu3seh == 0 ) ; dqykr4eggmg .
o500imgphq [ dqykr4eggmg . adixdqzc1c == 0 ] = ksm0js2nhsy . lg2dk4su2p .
jyqjln1vli ; dqykr4eggmg . adixdqzc1c = ( int8_T ) ( dqykr4eggmg . adixdqzc1c
== 0 ) ; } void flightControlSystemTID2 ( void ) { otjykwnhb3TID2 ( &
ksm0js2nhsy . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ; } void
pyvd4pdf3iTID0 ( void ) { lsjhvu4egy ( & ksm0js2nhsy . otjykwnhb3s , &
dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ; } void
pyvd4pdf3iTID1 ( void ) { } void m0l5se3ogg ( void ) { ipf5ube4r0 * const
accn4cnket = & ( lhjbdsj2rj . rtm ) ; eyt3piuhqz ( accn4cnket , & dqykr4eggmg
. otjykwnhb3s ) ; } void o2f5l50guo ( void ) { ipf5ube4r0 * const accn4cnket
= & ( lhjbdsj2rj . rtm ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( accn4cnket -> _mdlRefSfcnS , "flightControlSystem" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void f4qzdbbxmw (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj . rtm ) ; (
void ) memset ( ( void * ) accn4cnket , 0 , sizeof ( ipf5ube4r0 ) ) ;
nmtwkzsqud [ 0 ] = mdlref_TID0 ; nmtwkzsqud [ 1 ] = mdlref_TID1 ; nmtwkzsqud
[ 2 ] = mdlref_TID2 ; accn4cnket -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( accn4cnket ->
_mdlRefSfcnS , "flightControlSystem" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) & ksm0js2nhsy ) , 0 , sizeof ( ircitwx3zdm ) ) ; { int32_T i ; for ( i = 0
; i < 6 ; i ++ ) { ksm0js2nhsy . otjykwnhb3s . ci4d4u2maw [ i ] = 0.0F ; }
for ( i = 0 ; i < 16 ; i ++ ) { ksm0js2nhsy . otjykwnhb3s . nseoymslxl [ i ]
= 0.0F ; } for ( i = 0 ; i < 8 ; i ++ ) { ksm0js2nhsy . otjykwnhb3s .
easxykepcj [ i ] = 0.0F ; } for ( i = 0 ; i < 8 ; i ++ ) { ksm0js2nhsy .
otjykwnhb3s . ejwij1u00i [ i ] = 0.0F ; } for ( i = 0 ; i < 16 ; i ++ ) {
ksm0js2nhsy . otjykwnhb3s . mpjpr4511f [ i ] = 0.0F ; } ksm0js2nhsy .
lg2dk4su2p . jyqjln1vli = 0.0 ; ksm0js2nhsy . o05ckp3wtd . jyqjln1vli = 0.0 ;
ksm0js2nhsy . guuqgriiic . jyqjln1vli = 0.0 ; ksm0js2nhsy . pkkonheww3 .
jyqjln1vli = 0.0 ; ksm0js2nhsy . iopxkn4ii5 . jyqjln1vli = 0.0 ; ksm0js2nhsy
. oiwlpyyc3d . jyqjln1vli = 0.0 ; ksm0js2nhsy . k12xe5lsgy . jyqjln1vli = 0.0
; ksm0js2nhsy . otjykwnhb3s . lieouyr513 = 0.0 ; ksm0js2nhsy . otjykwnhb3s .
mlxcplakjs [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . mlxcplakjs [ 1 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . cm5z5guoim = 0.0 ; ksm0js2nhsy . otjykwnhb3s .
pp14lkc5ds [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . pp14lkc5ds [ 1 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . pp14lkc5ds [ 2 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . litan2havi [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . litan2havi
[ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . f2aifs3w2z [ 0 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . f2aifs3w2z [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . m33qvduepv [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . m33qvduepv
[ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . gv14ypdkhh [ 0 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . gv14ypdkhh [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . gv14ypdkhh [ 2 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . gv14ypdkhh
[ 3 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . pxw0oa3g5v [ 0 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . pxw0oa3g5v [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . lioxwl1iar [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . lioxwl1iar
[ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . i5xc4ys2pt [ 0 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . i5xc4ys2pt [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . affqggdog2 = 0.0 ; ksm0js2nhsy . otjykwnhb3s . c2fzqyltnh = 0.0
; ksm0js2nhsy . otjykwnhb3s . nzr5yspjzx = 0.0 ; ksm0js2nhsy . otjykwnhb3s .
lye2s42l5j = 0.0F ; ksm0js2nhsy . otjykwnhb3s . gi2zucrzpq = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . e1lqlcmnjc = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
mfnej0zskt = 0.0F ; ksm0js2nhsy . otjykwnhb3s . jirymx3bmz = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . l2xyktl14b [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . l2xyktl14b [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
gazlhffgqp [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . gazlhffgqp [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . fn3xejgdnz [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . fn3xejgdnz [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
fn3xejgdnz [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . fn3xejgdnz [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . d2rwb413j0 = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
fzoyetmmsh [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . fzoyetmmsh [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . lfb13k2lpd [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . lfb13k2lpd [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
bmlfyp0nve [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . bmlfyp0nve [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . i1pkfeiqf3 = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
nasakeuczj [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . nasakeuczj [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . nasakeuczj [ 2 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . nasakeuczj [ 3 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
lpptmd10kb [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . lpptmd10kb [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . nhynb4rzef [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . nhynb4rzef [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
conyevx543 [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . conyevx543 [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . eixqpjyie2 [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . eixqpjyie2 [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
eixqpjyie2 [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . eixqpjyie2 [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . mvsfnj1n2e [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . mvsfnj1n2e [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
mvsfnj1n2e [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . daepskgkuu [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . daepskgkuu [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . mouuzp511w [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
mouuzp511w [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . dozrtxyuv3 [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . dozrtxyuv3 [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . dozrtxyuv3 [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
dozrtxyuv3 [ 3 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . kd1mn2gm1l [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . kd1mn2gm1l [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . duljov25of [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
duljov25of [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . os2mdc4s5m [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . os2mdc4s5m [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . i0dflyubrv [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
i0dflyubrv [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . i0dflyubrv [ 2 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . i0dflyubrv [ 3 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . f3n0hqhcti [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
f3n0hqhcti [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . hh02nqa2sk [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . hh02nqa2sk [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . hh02nqa2sk [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
hh02nqa2sk [ 3 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . ogmg0lyqxp [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . ogmg0lyqxp [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . ogmg0lyqxp [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
ogmg0lyqxp [ 3 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . duo1hld4hb [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . duo1hld4hb [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . duo1hld4hb [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
duo1hld4hb [ 3 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . bipj5wkt3o = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . pcgqi2scre = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
ipbtas1tys . alkayrprb0 [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . ipbtas1tys
. alkayrprb0 [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . bm3dpymkhz .
j3s0wrmgla [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . bm3dpymkhz . j3s0wrmgla
[ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . ifzbhw4mrws . alkayrprb0 [ 0 ] =
0.0F ; ksm0js2nhsy . otjykwnhb3s . ifzbhw4mrws . alkayrprb0 [ 1 ] = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . phrpuocqmvu . j3s0wrmgla [ 0 ] = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . phrpuocqmvu . j3s0wrmgla [ 1 ] = 0.0F ; } ( void
) memset ( ( void * ) & dqykr4eggmg , 0 , sizeof ( nllkaxiwhzw ) ) ;
dqykr4eggmg . h0he12zmo4 [ 0 ] = 0.0 ; dqykr4eggmg . h0he12zmo4 [ 1 ] = 0.0 ;
dqykr4eggmg . oq44mkeutp [ 0 ] = 0.0 ; dqykr4eggmg . oq44mkeutp [ 1 ] = 0.0 ;
dqykr4eggmg . il2faoanlq [ 0 ] = 0.0 ; dqykr4eggmg . il2faoanlq [ 1 ] = 0.0 ;
dqykr4eggmg . naa4ayikn5 [ 0 ] = 0.0 ; dqykr4eggmg . naa4ayikn5 [ 1 ] = 0.0 ;
dqykr4eggmg . b1b5mp0pkt [ 0 ] = 0.0 ; dqykr4eggmg . b1b5mp0pkt [ 1 ] = 0.0 ;
dqykr4eggmg . kks4yi0jko [ 0 ] = 0.0 ; dqykr4eggmg . kks4yi0jko [ 1 ] = 0.0 ;
dqykr4eggmg . izahidgm1z [ 0 ] = 0.0 ; dqykr4eggmg . izahidgm1z [ 1 ] = 0.0 ;
dqykr4eggmg . ipcjwvn31g [ 0 ] = 0.0 ; dqykr4eggmg . ipcjwvn31g [ 1 ] = 0.0 ;
dqykr4eggmg . o500imgphq [ 0 ] = 0.0 ; dqykr4eggmg . o500imgphq [ 1 ] = 0.0 ;
dqykr4eggmg . otjykwnhb3s . mi4mocbazh = 0.0 ; dqykr4eggmg . otjykwnhb3s .
mtonzezz2z [ 0 ] = 0.0 ; dqykr4eggmg . otjykwnhb3s . mtonzezz2z [ 1 ] = 0.0 ;
dqykr4eggmg . otjykwnhb3s . ddv3ztj2wp [ 0 ] = 0.0 ; dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp [ 1 ] = 0.0 ; dqykr4eggmg . otjykwnhb3s . ddv3ztj2wp
[ 2 ] = 0.0 ; dqykr4eggmg . otjykwnhb3s . bw2ribqmwm = 0.0 ; dqykr4eggmg .
otjykwnhb3s . f2ynnmexgv = 0.0 ; dqykr4eggmg . otjykwnhb3s . b2z5wyyedu = 0.0
; dqykr4eggmg . otjykwnhb3s . ibeh2pu5t0 = 0.0 ; dqykr4eggmg . otjykwnhb3s .
b3fmbw5stg [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . b3fmbw5stg [ 1 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . aq2aymvaio [ 0 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . aq2aymvaio [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
aq2aymvaio [ 2 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . dzwopklw3c = 0.0F ; {
int32_T i ; for ( i = 0 ; i < 15 ; i ++ ) { dqykr4eggmg . otjykwnhb3s .
d4fp3a2mpz [ i ] = 0.0F ; } } dqykr4eggmg . otjykwnhb3s . fl0vv44tbs [ 0 ] =
0.0F ; dqykr4eggmg . otjykwnhb3s . fl0vv44tbs [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . as5a0ikbk1 [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
as5a0ikbk1 [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . ncgo1wegzg = 0.0F ;
dqykr4eggmg . otjykwnhb3s . mirtkskmtr = 0.0F ; { int32_T i ; for ( i = 0 ; i
< 5 ; i ++ ) { dqykr4eggmg . otjykwnhb3s . jduomia1pb [ i ] = 0.0F ; } }
dqykr4eggmg . otjykwnhb3s . od5c00niot [ 0 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . od5c00niot [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
od5c00niot [ 2 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . od5c00niot [ 3 ] = 0.0F
; { int32_T i ; for ( i = 0 ; i < 10 ; i ++ ) { dqykr4eggmg . otjykwnhb3s .
dqfv1m130o [ i ] = 0.0F ; } } dqykr4eggmg . otjykwnhb3s . meognsjf1t [ 0 ] =
0.0F ; dqykr4eggmg . otjykwnhb3s . meognsjf1t [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . gcgpru4rcb [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
gcgpru4rcb [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . peklmaellz [ 0 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . peklmaellz [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . bsetqjfri4 = 0.0F ; dqykr4eggmg . otjykwnhb3s . dsjbzv2lh4 [ 0
] = 0.0F ; dqykr4eggmg . otjykwnhb3s . dsjbzv2lh4 [ 1 ] = 0.0F ; dqykr4eggmg
. otjykwnhb3s . gixvkpnpus [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
gixvkpnpus [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . ow5xb5ovt0 [ 0 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . ow5xb5ovt0 [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . krs1cvkxzk [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
krs1cvkxzk [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . c4kiksmhh2 = 0.0F ;
dqykr4eggmg . otjykwnhb3s . orkq4iljgu = 0.0F ; { int32_T i ; for ( i = 0 ; i
< 30 ; i ++ ) { dqykr4eggmg . otjykwnhb3s . p02f2gdequ [ i ] = 0.0F ; } } {
int32_T i ; for ( i = 0 ; i < 6 ; i ++ ) { dqykr4eggmg . otjykwnhb3s .
mahjyhyq0q [ i ] = 0.0F ; } } dqykr4eggmg . otjykwnhb3s . b1nmhkw4zo = 0.0F ;
dqykr4eggmg . otjykwnhb3s . n0mydijbcx = 0.0F ; dqykr4eggmg . otjykwnhb3s .
iwg03owvar = 0.0F ; dqykr4eggmg . otjykwnhb3s . mf2pp40f5v [ 0 ] = 0.0F ;
dqykr4eggmg . otjykwnhb3s . mf2pp40f5v [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . pwlp5beuqs [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
pwlp5beuqs [ 1 ] = 0.0F ; flightControlSystem_InitializeDataMapInfo (
accn4cnket , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) &&
( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( accn4cnket -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
accn4cnket -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( accn4cnket -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } f51itwtzkqf . otjykwnhb3s . b1rw3rggh2 =
UNINITIALIZED_ZCSIG ; } void mr_flightControlSystem_MdlInfoRegFcn ( SimStruct
* mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_flightControlSystem , 225 ) ; * retVal = 1 ; } static void
mr_flightControlSystem_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) ; static void
mr_flightControlSystem_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_flightControlSystem_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_flightControlSystem_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_flightControlSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) ; static void
mr_flightControlSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_flightControlSystem_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_flightControlSystem_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_flightControlSystem_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_flightControlSystem_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_flightControlSystem_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_flightControlSystem_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_flightControlSystem_GetDWork ( ) {
static const char_T * ssDWFieldNames [ 3 ] = { "ksm0js2nhsy" , "dqykr4eggmg"
, "f51itwtzkqf" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_flightControlSystem_cacheDataAsMxArray ( ssDW , 0 , 0 ,
( const void * ) & ( ksm0js2nhsy ) , sizeof ( ksm0js2nhsy ) ) ; { static
const char_T * rtdwDataFieldNames [ 91 ] = { "dqykr4eggmg.h0he12zmo4" ,
"dqykr4eggmg.oq44mkeutp" , "dqykr4eggmg.il2faoanlq" ,
"dqykr4eggmg.naa4ayikn5" , "dqykr4eggmg.b1b5mp0pkt" ,
"dqykr4eggmg.kks4yi0jko" , "dqykr4eggmg.izahidgm1z" ,
"dqykr4eggmg.ipcjwvn31g" , "dqykr4eggmg.o500imgphq" ,
"dqykr4eggmg.l152eirbdu" , "dqykr4eggmg.gi5bdjcokf" ,
"dqykr4eggmg.fb0f52aifb" , "dqykr4eggmg.nkpo31rxx0" ,
"dqykr4eggmg.hhjrbx5czh" , "dqykr4eggmg.cgj3sq3fee" ,
"dqykr4eggmg.ds3lkztnj2" , "dqykr4eggmg.hvrivdkew0" ,
"dqykr4eggmg.curdnu3seh" , "dqykr4eggmg.adixdqzc1c" ,
"dqykr4eggmg.jjrfotind4" , "dqykr4eggmg.otjykwnhb3s.mi4mocbazh" ,
"dqykr4eggmg.otjykwnhb3s.mtonzezz2z" , "dqykr4eggmg.otjykwnhb3s.ddv3ztj2wp" ,
"dqykr4eggmg.otjykwnhb3s.bw2ribqmwm" , "dqykr4eggmg.otjykwnhb3s.f2ynnmexgv" ,
"dqykr4eggmg.otjykwnhb3s.b2z5wyyedu" , "dqykr4eggmg.otjykwnhb3s.ibeh2pu5t0" ,
"dqykr4eggmg.otjykwnhb3s.b3fmbw5stg" , "dqykr4eggmg.otjykwnhb3s.aq2aymvaio" ,
"dqykr4eggmg.otjykwnhb3s.dzwopklw3c" , "dqykr4eggmg.otjykwnhb3s.d4fp3a2mpz" ,
"dqykr4eggmg.otjykwnhb3s.fl0vv44tbs" , "dqykr4eggmg.otjykwnhb3s.as5a0ikbk1" ,
"dqykr4eggmg.otjykwnhb3s.ncgo1wegzg" , "dqykr4eggmg.otjykwnhb3s.mirtkskmtr" ,
"dqykr4eggmg.otjykwnhb3s.jduomia1pb" , "dqykr4eggmg.otjykwnhb3s.od5c00niot" ,
"dqykr4eggmg.otjykwnhb3s.dqfv1m130o" , "dqykr4eggmg.otjykwnhb3s.meognsjf1t" ,
"dqykr4eggmg.otjykwnhb3s.gcgpru4rcb" , "dqykr4eggmg.otjykwnhb3s.peklmaellz" ,
"dqykr4eggmg.otjykwnhb3s.bsetqjfri4" , "dqykr4eggmg.otjykwnhb3s.dsjbzv2lh4" ,
"dqykr4eggmg.otjykwnhb3s.gixvkpnpus" , "dqykr4eggmg.otjykwnhb3s.ow5xb5ovt0" ,
"dqykr4eggmg.otjykwnhb3s.krs1cvkxzk" , "dqykr4eggmg.otjykwnhb3s.c4kiksmhh2" ,
"dqykr4eggmg.otjykwnhb3s.bbkjtf4kuy" , "dqykr4eggmg.otjykwnhb3s.l3lcputuyl" ,
"dqykr4eggmg.otjykwnhb3s.pjgu33zeph" , "dqykr4eggmg.otjykwnhb3s.dxm3w2i52x" ,
"dqykr4eggmg.otjykwnhb3s.orkq4iljgu" , "dqykr4eggmg.otjykwnhb3s.p02f2gdequ" ,
"dqykr4eggmg.otjykwnhb3s.mahjyhyq0q" , "dqykr4eggmg.otjykwnhb3s.b1nmhkw4zo" ,
"dqykr4eggmg.otjykwnhb3s.n0mydijbcx" , "dqykr4eggmg.otjykwnhb3s.iwg03owvar" ,
"dqykr4eggmg.otjykwnhb3s.mf2pp40f5v" , "dqykr4eggmg.otjykwnhb3s.pwlp5beuqs" ,
"dqykr4eggmg.otjykwnhb3s.gaxgdudnvc" , "dqykr4eggmg.otjykwnhb3s.fa1jgcut3x" ,
"dqykr4eggmg.otjykwnhb3s.dq5lalhp1e" , "dqykr4eggmg.otjykwnhb3s.fpr1qi0oiw" ,
"dqykr4eggmg.otjykwnhb3s.klyrn0mwhb" , "dqykr4eggmg.otjykwnhb3s.mfifybuxty" ,
"dqykr4eggmg.otjykwnhb3s.a1oodzfxvv" , "dqykr4eggmg.otjykwnhb3s.mgysgsd2g4" ,
"dqykr4eggmg.otjykwnhb3s.idn2v5d33m" , "dqykr4eggmg.otjykwnhb3s.e3uw2ubplh" ,
"dqykr4eggmg.otjykwnhb3s.bjkftgumd3" , "dqykr4eggmg.otjykwnhb3s.de4yc1bkky" ,
"dqykr4eggmg.otjykwnhb3s.jd3dqtmo2p" , "dqykr4eggmg.otjykwnhb3s.f1jy25gy04" ,
"dqykr4eggmg.otjykwnhb3s.gdn4qfzvsk" , "dqykr4eggmg.otjykwnhb3s.cqi2pi21ow" ,
"dqykr4eggmg.otjykwnhb3s.kh1khihcrt" , "dqykr4eggmg.otjykwnhb3s.iftedegxuv" ,
"dqykr4eggmg.otjykwnhb3s.g4zcogq4xi" ,
"dqykr4eggmg.otjykwnhb3s.ipbtas1tys.ley0an2uip" ,
"dqykr4eggmg.otjykwnhb3s.ipbtas1tys.njk4w5jozv" ,
"dqykr4eggmg.otjykwnhb3s.bm3dpymkhz.mkkaskumzr" ,
"dqykr4eggmg.otjykwnhb3s.bm3dpymkhz.jhr0womnye" ,
"dqykr4eggmg.otjykwnhb3s.ifzbhw4mrws.ley0an2uip" ,
"dqykr4eggmg.otjykwnhb3s.ifzbhw4mrws.njk4w5jozv" ,
"dqykr4eggmg.otjykwnhb3s.phrpuocqmvu.mkkaskumzr" ,
"dqykr4eggmg.otjykwnhb3s.phrpuocqmvu.jhr0womnye" ,
"dqykr4eggmg.otjykwnhb3s.ciy1c2o0rv.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.jvbbqhrajh.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.clwiujjdqo.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.acfz1zxm4t.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.ghadbep3bbv.fau3qf03xm" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 91 , rtdwDataFieldNames ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void *
) & ( dqykr4eggmg . h0he12zmo4 ) , sizeof ( dqykr4eggmg . h0he12zmo4 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void *
) & ( dqykr4eggmg . oq44mkeutp ) , sizeof ( dqykr4eggmg . oq44mkeutp ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void *
) & ( dqykr4eggmg . il2faoanlq ) , sizeof ( dqykr4eggmg . il2faoanlq ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void *
) & ( dqykr4eggmg . naa4ayikn5 ) , sizeof ( dqykr4eggmg . naa4ayikn5 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void *
) & ( dqykr4eggmg . b1b5mp0pkt ) , sizeof ( dqykr4eggmg . b1b5mp0pkt ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void *
) & ( dqykr4eggmg . kks4yi0jko ) , sizeof ( dqykr4eggmg . kks4yi0jko ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void *
) & ( dqykr4eggmg . izahidgm1z ) , sizeof ( dqykr4eggmg . izahidgm1z ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void *
) & ( dqykr4eggmg . ipcjwvn31g ) , sizeof ( dqykr4eggmg . ipcjwvn31g ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void *
) & ( dqykr4eggmg . o500imgphq ) , sizeof ( dqykr4eggmg . o500imgphq ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void *
) & ( dqykr4eggmg . l152eirbdu ) , sizeof ( dqykr4eggmg . l152eirbdu ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void
* ) & ( dqykr4eggmg . gi5bdjcokf ) , sizeof ( dqykr4eggmg . gi5bdjcokf ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void
* ) & ( dqykr4eggmg . fb0f52aifb ) , sizeof ( dqykr4eggmg . fb0f52aifb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void
* ) & ( dqykr4eggmg . nkpo31rxx0 ) , sizeof ( dqykr4eggmg . nkpo31rxx0 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void
* ) & ( dqykr4eggmg . hhjrbx5czh ) , sizeof ( dqykr4eggmg . hhjrbx5czh ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void
* ) & ( dqykr4eggmg . cgj3sq3fee ) , sizeof ( dqykr4eggmg . cgj3sq3fee ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void
* ) & ( dqykr4eggmg . ds3lkztnj2 ) , sizeof ( dqykr4eggmg . ds3lkztnj2 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void
* ) & ( dqykr4eggmg . hvrivdkew0 ) , sizeof ( dqykr4eggmg . hvrivdkew0 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void
* ) & ( dqykr4eggmg . curdnu3seh ) , sizeof ( dqykr4eggmg . curdnu3seh ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void
* ) & ( dqykr4eggmg . adixdqzc1c ) , sizeof ( dqykr4eggmg . adixdqzc1c ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void
* ) & ( dqykr4eggmg . jjrfotind4 ) , sizeof ( dqykr4eggmg . jjrfotind4 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . mi4mocbazh ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . mi4mocbazh ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 21 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
mtonzezz2z ) , sizeof ( dqykr4eggmg . otjykwnhb3s . mtonzezz2z ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ddv3ztj2wp ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 23 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
bw2ribqmwm ) , sizeof ( dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . f2ynnmexgv ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . f2ynnmexgv ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 25 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
b2z5wyyedu ) , sizeof ( dqykr4eggmg . otjykwnhb3s . b2z5wyyedu ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ibeh2pu5t0 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . ibeh2pu5t0 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 27 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
b3fmbw5stg ) , sizeof ( dqykr4eggmg . otjykwnhb3s . b3fmbw5stg ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . aq2aymvaio ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . aq2aymvaio ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 29 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
dzwopklw3c ) , sizeof ( dqykr4eggmg . otjykwnhb3s . dzwopklw3c ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . d4fp3a2mpz ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . d4fp3a2mpz ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 31 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
fl0vv44tbs ) , sizeof ( dqykr4eggmg . otjykwnhb3s . fl0vv44tbs ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . as5a0ikbk1 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . as5a0ikbk1 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 33 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
ncgo1wegzg ) , sizeof ( dqykr4eggmg . otjykwnhb3s . ncgo1wegzg ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . mirtkskmtr ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . mirtkskmtr ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 35 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
jduomia1pb ) , sizeof ( dqykr4eggmg . otjykwnhb3s . jduomia1pb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . od5c00niot ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . od5c00niot ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 37 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
dqfv1m130o ) , sizeof ( dqykr4eggmg . otjykwnhb3s . dqfv1m130o ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . meognsjf1t ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . meognsjf1t ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 39 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
gcgpru4rcb ) , sizeof ( dqykr4eggmg . otjykwnhb3s . gcgpru4rcb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . peklmaellz ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . peklmaellz ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 41 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
bsetqjfri4 ) , sizeof ( dqykr4eggmg . otjykwnhb3s . bsetqjfri4 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . dsjbzv2lh4 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . dsjbzv2lh4 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 43 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
gixvkpnpus ) , sizeof ( dqykr4eggmg . otjykwnhb3s . gixvkpnpus ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ow5xb5ovt0 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . ow5xb5ovt0 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 45 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
krs1cvkxzk ) , sizeof ( dqykr4eggmg . otjykwnhb3s . krs1cvkxzk ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . c4kiksmhh2 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . c4kiksmhh2 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 47 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
bbkjtf4kuy ) , sizeof ( dqykr4eggmg . otjykwnhb3s . bbkjtf4kuy ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . l3lcputuyl ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . l3lcputuyl ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 49 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
pjgu33zeph ) , sizeof ( dqykr4eggmg . otjykwnhb3s . pjgu33zeph ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . dxm3w2i52x ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . dxm3w2i52x ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 51 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
orkq4iljgu ) , sizeof ( dqykr4eggmg . otjykwnhb3s . orkq4iljgu ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . p02f2gdequ ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . p02f2gdequ ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 53 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
mahjyhyq0q ) , sizeof ( dqykr4eggmg . otjykwnhb3s . mahjyhyq0q ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . b1nmhkw4zo ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . b1nmhkw4zo ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 55 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
n0mydijbcx ) , sizeof ( dqykr4eggmg . otjykwnhb3s . n0mydijbcx ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . iwg03owvar ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . iwg03owvar ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 57 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
mf2pp40f5v ) , sizeof ( dqykr4eggmg . otjykwnhb3s . mf2pp40f5v ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . pwlp5beuqs ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . pwlp5beuqs ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 59 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
gaxgdudnvc ) , sizeof ( dqykr4eggmg . otjykwnhb3s . gaxgdudnvc ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . fa1jgcut3x ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . fa1jgcut3x ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 61 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
dq5lalhp1e ) , sizeof ( dqykr4eggmg . otjykwnhb3s . dq5lalhp1e ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . fpr1qi0oiw ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . fpr1qi0oiw ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 63 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
klyrn0mwhb ) , sizeof ( dqykr4eggmg . otjykwnhb3s . klyrn0mwhb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . mfifybuxty ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . mfifybuxty ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 65 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
a1oodzfxvv ) , sizeof ( dqykr4eggmg . otjykwnhb3s . a1oodzfxvv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . mgysgsd2g4 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . mgysgsd2g4 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 67 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
idn2v5d33m ) , sizeof ( dqykr4eggmg . otjykwnhb3s . idn2v5d33m ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . e3uw2ubplh ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . e3uw2ubplh ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 69 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
bjkftgumd3 ) , sizeof ( dqykr4eggmg . otjykwnhb3s . bjkftgumd3 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . de4yc1bkky ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . de4yc1bkky ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 71 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
jd3dqtmo2p ) , sizeof ( dqykr4eggmg . otjykwnhb3s . jd3dqtmo2p ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . f1jy25gy04 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . f1jy25gy04 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 73 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
gdn4qfzvsk ) , sizeof ( dqykr4eggmg . otjykwnhb3s . gdn4qfzvsk ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 74 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . cqi2pi21ow ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . cqi2pi21ow ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 75 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
kh1khihcrt ) , sizeof ( dqykr4eggmg . otjykwnhb3s . kh1khihcrt ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 76 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . iftedegxuv ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . iftedegxuv ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 77 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
g4zcogq4xi ) , sizeof ( dqykr4eggmg . otjykwnhb3s . g4zcogq4xi ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 78 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ipbtas1tys . ley0an2uip ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ipbtas1tys . ley0an2uip ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 79 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ipbtas1tys . njk4w5jozv ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ipbtas1tys . njk4w5jozv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 80 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 81 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . jhr0womnye ) , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . jhr0womnye ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 82 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 83 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 84 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 85 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . jhr0womnye ) , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . jhr0womnye ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 86 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 87 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 88 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . clwiujjdqo . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . clwiujjdqo . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 89 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 90 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) ) ; mxSetFieldByNumber
( ssDW , 0 , 1 , rtdwData ) ; } mr_flightControlSystem_cacheDataAsMxArray (
ssDW , 0 , 2 , ( const void * ) & ( f51itwtzkqf ) , sizeof ( f51itwtzkqf ) )
; return ssDW ; } void mr_flightControlSystem_SetDWork ( const mxArray * ssDW
) { ( void ) ssDW ; mr_flightControlSystem_restoreDataFromMxArray ( ( void *
) & ( ksm0js2nhsy ) , ssDW , 0 , 0 , sizeof ( ksm0js2nhsy ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
h0he12zmo4 ) , rtdwData , 0 , 0 , sizeof ( dqykr4eggmg . h0he12zmo4 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
oq44mkeutp ) , rtdwData , 0 , 1 , sizeof ( dqykr4eggmg . oq44mkeutp ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
il2faoanlq ) , rtdwData , 0 , 2 , sizeof ( dqykr4eggmg . il2faoanlq ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
naa4ayikn5 ) , rtdwData , 0 , 3 , sizeof ( dqykr4eggmg . naa4ayikn5 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
b1b5mp0pkt ) , rtdwData , 0 , 4 , sizeof ( dqykr4eggmg . b1b5mp0pkt ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kks4yi0jko ) , rtdwData , 0 , 5 , sizeof ( dqykr4eggmg . kks4yi0jko ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
izahidgm1z ) , rtdwData , 0 , 6 , sizeof ( dqykr4eggmg . izahidgm1z ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
ipcjwvn31g ) , rtdwData , 0 , 7 , sizeof ( dqykr4eggmg . ipcjwvn31g ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
o500imgphq ) , rtdwData , 0 , 8 , sizeof ( dqykr4eggmg . o500imgphq ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
l152eirbdu ) , rtdwData , 0 , 9 , sizeof ( dqykr4eggmg . l152eirbdu ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
gi5bdjcokf ) , rtdwData , 0 , 10 , sizeof ( dqykr4eggmg . gi5bdjcokf ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
fb0f52aifb ) , rtdwData , 0 , 11 , sizeof ( dqykr4eggmg . fb0f52aifb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
nkpo31rxx0 ) , rtdwData , 0 , 12 , sizeof ( dqykr4eggmg . nkpo31rxx0 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
hhjrbx5czh ) , rtdwData , 0 , 13 , sizeof ( dqykr4eggmg . hhjrbx5czh ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
cgj3sq3fee ) , rtdwData , 0 , 14 , sizeof ( dqykr4eggmg . cgj3sq3fee ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
ds3lkztnj2 ) , rtdwData , 0 , 15 , sizeof ( dqykr4eggmg . ds3lkztnj2 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
hvrivdkew0 ) , rtdwData , 0 , 16 , sizeof ( dqykr4eggmg . hvrivdkew0 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
curdnu3seh ) , rtdwData , 0 , 17 , sizeof ( dqykr4eggmg . curdnu3seh ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
adixdqzc1c ) , rtdwData , 0 , 18 , sizeof ( dqykr4eggmg . adixdqzc1c ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
jjrfotind4 ) , rtdwData , 0 , 19 , sizeof ( dqykr4eggmg . jjrfotind4 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . mi4mocbazh ) , rtdwData , 0 , 20 , sizeof ( dqykr4eggmg .
otjykwnhb3s . mi4mocbazh ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . mtonzezz2z ) , rtdwData , 0 , 21
, sizeof ( dqykr4eggmg . otjykwnhb3s . mtonzezz2z ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp ) , rtdwData , 0 , 22 , sizeof ( dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) , rtdwData , 0 , 23
, sizeof ( dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . f2ynnmexgv ) , rtdwData , 0 , 24 , sizeof ( dqykr4eggmg .
otjykwnhb3s . f2ynnmexgv ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . b2z5wyyedu ) , rtdwData , 0 , 25
, sizeof ( dqykr4eggmg . otjykwnhb3s . b2z5wyyedu ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ibeh2pu5t0 ) , rtdwData , 0 , 26 , sizeof ( dqykr4eggmg .
otjykwnhb3s . ibeh2pu5t0 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . b3fmbw5stg ) , rtdwData , 0 , 27
, sizeof ( dqykr4eggmg . otjykwnhb3s . b3fmbw5stg ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . aq2aymvaio ) , rtdwData , 0 , 28 , sizeof ( dqykr4eggmg .
otjykwnhb3s . aq2aymvaio ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . dzwopklw3c ) , rtdwData , 0 , 29
, sizeof ( dqykr4eggmg . otjykwnhb3s . dzwopklw3c ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . d4fp3a2mpz ) , rtdwData , 0 , 30 , sizeof ( dqykr4eggmg .
otjykwnhb3s . d4fp3a2mpz ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . fl0vv44tbs ) , rtdwData , 0 , 31
, sizeof ( dqykr4eggmg . otjykwnhb3s . fl0vv44tbs ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . as5a0ikbk1 ) , rtdwData , 0 , 32 , sizeof ( dqykr4eggmg .
otjykwnhb3s . as5a0ikbk1 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . ncgo1wegzg ) , rtdwData , 0 , 33
, sizeof ( dqykr4eggmg . otjykwnhb3s . ncgo1wegzg ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . mirtkskmtr ) , rtdwData , 0 , 34 , sizeof ( dqykr4eggmg .
otjykwnhb3s . mirtkskmtr ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . jduomia1pb ) , rtdwData , 0 , 35
, sizeof ( dqykr4eggmg . otjykwnhb3s . jduomia1pb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . od5c00niot ) , rtdwData , 0 , 36 , sizeof ( dqykr4eggmg .
otjykwnhb3s . od5c00niot ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . dqfv1m130o ) , rtdwData , 0 , 37
, sizeof ( dqykr4eggmg . otjykwnhb3s . dqfv1m130o ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . meognsjf1t ) , rtdwData , 0 , 38 , sizeof ( dqykr4eggmg .
otjykwnhb3s . meognsjf1t ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . gcgpru4rcb ) , rtdwData , 0 , 39
, sizeof ( dqykr4eggmg . otjykwnhb3s . gcgpru4rcb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . peklmaellz ) , rtdwData , 0 , 40 , sizeof ( dqykr4eggmg .
otjykwnhb3s . peklmaellz ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . bsetqjfri4 ) , rtdwData , 0 , 41
, sizeof ( dqykr4eggmg . otjykwnhb3s . bsetqjfri4 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . dsjbzv2lh4 ) , rtdwData , 0 , 42 , sizeof ( dqykr4eggmg .
otjykwnhb3s . dsjbzv2lh4 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . gixvkpnpus ) , rtdwData , 0 , 43
, sizeof ( dqykr4eggmg . otjykwnhb3s . gixvkpnpus ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ow5xb5ovt0 ) , rtdwData , 0 , 44 , sizeof ( dqykr4eggmg .
otjykwnhb3s . ow5xb5ovt0 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . krs1cvkxzk ) , rtdwData , 0 , 45
, sizeof ( dqykr4eggmg . otjykwnhb3s . krs1cvkxzk ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . c4kiksmhh2 ) , rtdwData , 0 , 46 , sizeof ( dqykr4eggmg .
otjykwnhb3s . c4kiksmhh2 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . bbkjtf4kuy ) , rtdwData , 0 , 47
, sizeof ( dqykr4eggmg . otjykwnhb3s . bbkjtf4kuy ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . l3lcputuyl ) , rtdwData , 0 , 48 , sizeof ( dqykr4eggmg .
otjykwnhb3s . l3lcputuyl ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . pjgu33zeph ) , rtdwData , 0 , 49
, sizeof ( dqykr4eggmg . otjykwnhb3s . pjgu33zeph ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . dxm3w2i52x ) , rtdwData , 0 , 50 , sizeof ( dqykr4eggmg .
otjykwnhb3s . dxm3w2i52x ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . orkq4iljgu ) , rtdwData , 0 , 51
, sizeof ( dqykr4eggmg . otjykwnhb3s . orkq4iljgu ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . p02f2gdequ ) , rtdwData , 0 , 52 , sizeof ( dqykr4eggmg .
otjykwnhb3s . p02f2gdequ ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . mahjyhyq0q ) , rtdwData , 0 , 53
, sizeof ( dqykr4eggmg . otjykwnhb3s . mahjyhyq0q ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . b1nmhkw4zo ) , rtdwData , 0 , 54 , sizeof ( dqykr4eggmg .
otjykwnhb3s . b1nmhkw4zo ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . n0mydijbcx ) , rtdwData , 0 , 55
, sizeof ( dqykr4eggmg . otjykwnhb3s . n0mydijbcx ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . iwg03owvar ) , rtdwData , 0 , 56 , sizeof ( dqykr4eggmg .
otjykwnhb3s . iwg03owvar ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . mf2pp40f5v ) , rtdwData , 0 , 57
, sizeof ( dqykr4eggmg . otjykwnhb3s . mf2pp40f5v ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . pwlp5beuqs ) , rtdwData , 0 , 58 , sizeof ( dqykr4eggmg .
otjykwnhb3s . pwlp5beuqs ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . gaxgdudnvc ) , rtdwData , 0 , 59
, sizeof ( dqykr4eggmg . otjykwnhb3s . gaxgdudnvc ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . fa1jgcut3x ) , rtdwData , 0 , 60 , sizeof ( dqykr4eggmg .
otjykwnhb3s . fa1jgcut3x ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . dq5lalhp1e ) , rtdwData , 0 , 61
, sizeof ( dqykr4eggmg . otjykwnhb3s . dq5lalhp1e ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . fpr1qi0oiw ) , rtdwData , 0 , 62 , sizeof ( dqykr4eggmg .
otjykwnhb3s . fpr1qi0oiw ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . klyrn0mwhb ) , rtdwData , 0 , 63
, sizeof ( dqykr4eggmg . otjykwnhb3s . klyrn0mwhb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . mfifybuxty ) , rtdwData , 0 , 64 , sizeof ( dqykr4eggmg .
otjykwnhb3s . mfifybuxty ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . a1oodzfxvv ) , rtdwData , 0 , 65
, sizeof ( dqykr4eggmg . otjykwnhb3s . a1oodzfxvv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . mgysgsd2g4 ) , rtdwData , 0 , 66 , sizeof ( dqykr4eggmg .
otjykwnhb3s . mgysgsd2g4 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . idn2v5d33m ) , rtdwData , 0 , 67
, sizeof ( dqykr4eggmg . otjykwnhb3s . idn2v5d33m ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . e3uw2ubplh ) , rtdwData , 0 , 68 , sizeof ( dqykr4eggmg .
otjykwnhb3s . e3uw2ubplh ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . bjkftgumd3 ) , rtdwData , 0 , 69
, sizeof ( dqykr4eggmg . otjykwnhb3s . bjkftgumd3 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . de4yc1bkky ) , rtdwData , 0 , 70 , sizeof ( dqykr4eggmg .
otjykwnhb3s . de4yc1bkky ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . jd3dqtmo2p ) , rtdwData , 0 , 71
, sizeof ( dqykr4eggmg . otjykwnhb3s . jd3dqtmo2p ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . f1jy25gy04 ) , rtdwData , 0 , 72 , sizeof ( dqykr4eggmg .
otjykwnhb3s . f1jy25gy04 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . gdn4qfzvsk ) , rtdwData , 0 , 73
, sizeof ( dqykr4eggmg . otjykwnhb3s . gdn4qfzvsk ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . cqi2pi21ow ) , rtdwData , 0 , 74 , sizeof ( dqykr4eggmg .
otjykwnhb3s . cqi2pi21ow ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . kh1khihcrt ) , rtdwData , 0 , 75
, sizeof ( dqykr4eggmg . otjykwnhb3s . kh1khihcrt ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . iftedegxuv ) , rtdwData , 0 , 76 , sizeof ( dqykr4eggmg .
otjykwnhb3s . iftedegxuv ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . g4zcogq4xi ) , rtdwData , 0 , 77
, sizeof ( dqykr4eggmg . otjykwnhb3s . g4zcogq4xi ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ipbtas1tys . ley0an2uip ) , rtdwData , 0 , 78 , sizeof (
dqykr4eggmg . otjykwnhb3s . ipbtas1tys . ley0an2uip ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ipbtas1tys . njk4w5jozv ) , rtdwData , 0 , 79 , sizeof (
dqykr4eggmg . otjykwnhb3s . ipbtas1tys . njk4w5jozv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) , rtdwData , 0 , 80 , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . bm3dpymkhz . jhr0womnye ) , rtdwData , 0 , 81 , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . jhr0womnye ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) , rtdwData , 0 , 82 , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) , rtdwData , 0 , 83 , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) , rtdwData , 0 , 84 , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . phrpuocqmvu . jhr0womnye ) , rtdwData , 0 , 85 , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . jhr0womnye ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) , rtdwData , 0 , 86 , sizeof (
dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) , rtdwData , 0 , 87 , sizeof (
dqykr4eggmg . otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . clwiujjdqo . fau3qf03xm ) , rtdwData , 0 , 88 , sizeof (
dqykr4eggmg . otjykwnhb3s . clwiujjdqo . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) , rtdwData , 0 , 89 , sizeof (
dqykr4eggmg . otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) , rtdwData , 0 , 90 , sizeof (
dqykr4eggmg . otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) ) ; }
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( f51itwtzkqf )
, ssDW , 0 , 2 , sizeof ( f51itwtzkqf ) ) ; } void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 2199722190U , 3957889980U , 1763834222U ,
1407295042U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"flightControlSystem" , & chksum [ 0 ] ) ; } mxArray *
mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 1 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 1 ] = { "MATLABSystem" , } ; static const char_T *
blockPath [ 1 ] = {
"flightControlSystem/Image Processing System/PARROT Image Conversion" , } ;
static const int reason [ 1 ] = { 6 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] <
1 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript (
data , 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [
subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2
, subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0
] ] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs
[ 0 ] ] ) ) ; } } return data ; } static void *
flightControlSystem_InitRestoreDataPtr = ( NULL ) ; void
mr_flightControlSystem_CreateInitRestoreData ( ) {
flightControlSystem_InitRestoreDataPtr = utMalloc ( sizeof ( dqykr4eggmg ) )
; memcpy ( flightControlSystem_InitRestoreDataPtr , ( void * ) & (
dqykr4eggmg ) , sizeof ( dqykr4eggmg ) ) ; } void
mr_flightControlSystem_CopyFromInitRestoreData ( ) { memcpy ( ( void * ) & (
dqykr4eggmg ) , flightControlSystem_InitRestoreDataPtr , sizeof ( dqykr4eggmg
) ) ; } void mr_flightControlSystem_DestroyInitRestoreData ( ) { utFree (
flightControlSystem_InitRestoreDataPtr ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
