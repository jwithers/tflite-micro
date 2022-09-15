#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/leaky_relu/leaky_relu21_golden_int16_test_data.h"

const unsigned int g_leaky_relu21_golden_int16_test_data_size = 2560;
alignas(16) const int16_t g_leaky_relu21_golden_int16_test_data[] = {-9243,-2421,7259,24684,16320,31616,23389,-4280,14879,-3245,-6829,814,7844,-9659,12412,17931,8456,20676,-4184,-4132,-7382,-6626,3369,11245,11988,-9205,-6493,-8841,-3233,11987,-7845,-334,-9539,24703,-7288,19445,19764,-7504,12658,5802,3238,-2389,-320,-7321,-4635,17055,468,8725,-5005,-6828,1630,11910,5748,-9700,-1083,14904,-4728,-4516,-214,28534,-122,-6167,-928,30073,2634,15458,-8125,263,-4316,26557,-7789,22645,24323,27292,-7115,26657,-6077,-5889,-7425,-3317,-5643,-7889,20265,-5157,15555,-8337,31884,20572,-7736,12231,21067,27639,28530,-839,16897,2820,9505,12622,22597,5311,-1121,8685,16670,-2164,-5299,-9301,20206,31749,-841,-8374,-8650,-6971,2004,-2242,3209,-4122,-1901,-1587,-8234,-3436,-2101,-8767,-1050,29040,16996,-7370,17457,13064,-2447,-5088,12709,14817,27297,10037,-1457,8389,10972,-9022,7288,-2374,23845,-4829,527,9688,3546,9020,-6914,-5771,10411,-5870,5507,-680,-2854,14146,18372,-7332,3587,-4120,8408,-385,-9508,22678,15009,4903,-1423,2934,-3532,27634,-7289,-3021,23982,-6367,-8904,-7682,5516,20578,8525,-5224,-6506,17082,-4916,811,14231,-4935,15843,-8251,11790,-3836,-7094,13098,-3606,-6137,7655,9800,3841,13856,13173,19006,9410,-9352,-8802,17193,7157,-2867,31172,17728,-70,29915,-7045,-1953,10750,-8767,27068,27376,-3562,1070,-1223,32432,19372,27726,-6882,-2834,-8359,8442,-9057,-3479,-4006,-6666,-9747,-3363,18405,-3794,6321,6160,-8659,-7898,-5473,93,-2429,25458,26268,4409,3578,-3692,11299,-9415,14759,-6842,-5492,-3629,16574,-2493,-3754,-3646,11070,-6589,-6097,25084,12760,-5255,7734,18584,-5441,12180,-2770,18929,-2960,-8454,4781,-8743,6776,-1422,-4899,-8558,8965,19097,27296,-6718,1722,-6256,11071,-2080,-5185,-6026,-2047,21413,16063,5772,22595,16516,-2223,-805,13966,2877,-8379,18748,-9008,-9412,-6474,-590,-4480,16014,-9384,-5524,29815,5720,21238,3177,14913,6755,25056,-4217,115,10810,17654,-9614,26467,6948,23425,15807,11195,-6376,20181,-8733,14505,-8498,3890,16776,16260,-100,1260,24447,-9518,-4109,-7759,-2661,-6052,22450,32293,-3963,-4636,25194,28861,-2061,5167,-9110,-9217,-5942,-499,16225,28538,-6685,-5,-4519,-4463,20762,-4886,12832,14642,-5725,-4992,6954,-5395,-7349,27200,-8960,-3545,-200,187,-2768,14432,3555,18507,8145,22446,25110,-7615,18213,-8570,-2242,382,-4657,-4471,-5473,-1168,-3759,15053,-8584,30119,-2222,-4709,-7570,3809,13271,-7081,3051,-5902,-6323,1028,-9449,3376,-8834,6818,-9491,28894,20965,-6433,-8899,-3340,22899,-4153,-5224,-3238,-567,28888,-7601,-807,27118,21359,25679,29894,-8079,-3304,-1170,8574,24064,-9194,27430,3952,-6652,2864,-4324,15975,-5556,6377,5175,26145,-5193,-9584,-7327,-5733,-1693,-2098,-7189,25210,-6770,14680,-2345,-4043,-1317,-6620,-3314,12728,32320,27731,-3946,-7085,-6668,-2858,-3191,-3364,21406,24316,16647,27223,15418,29825,-358,-7124,19997,29731,-1634,717,-3769,-8411,-6718,-3542,5289,14560,12642,4176,2908,2889,5266,6503,23477,-2602,14293,-5989,-9717,6085,17291,9716,-2677,-181,4015,28627,-8941,30478,19352,-5916,-4638,-6181,-3570,7404,19441,-7905,-7717,-1982,-5779,-1216,-9371,29801,-9461,28350,-4026,-766,-3657,-5158,-6968,-7475,18777,-2541,20256,26886,12597,-4535,5899,-2483,-1495,-3790,-2419,-2756,-5079,-2039,-6280,-7517,2814,-4670,16982,7451,-5060,-7691,32313,-328,18172,21341,-8614,31472,26378,-5805,-8608,-8026,-9041,31079,-1340,24744,4106,-4736,22398,-6500,28650,-5227,-1021,-9653,23675,2484,26256,-3948,-646,-1663,11836,-2943,15106,181,6817,32006,-9602,-9690,22496,-9441,10668,14350,-3435,-8462,11737,-8521,-2442,14172,-2064,-5382,-1434,13214,-8779,-3825,21622,-2209,-1813,27412,-7593,-3211,4946,10610,-5886,-2864,-9757,-7277,-6027,-6247,-9085,-5980,31121,-6919,13488,-5994,20639,-3508,-9676,28305,-6678,12239,-1532,-8012,19447,6760,-9674,1519,-3317,-5600,32289,1650,13940,31071,-3249,23165,18997,5115,5494,5665,-3515,-4015,22590,-1814,3831,-1741,13135,29889,-4990,-8747,9246,7112,4149,22894,17119,10850,-5319,17400,-3642,14783,15953,-9580,-3373,23347,-2053,-3730,-4022,15286,10474,-4685,20373,7631,7757,2867,-9332,-5373,17320,-8394,-4151,-7398,-3440,-9536,-3356,1938,31707,12937,-9461,32512,-8748,7724,14140,6357,-2044,-1626,-7232,17472,14093,-2627,9930,884,-2722,15388,-1507,1524,-8581,-9561,-2924,21786,8092,-5959,-6857,16905,32449,29459,-3315,12361,-699,-1344,19859,25129,-2912,-3442,-3596,-4226,4904,-820,7924,-9734,-8717,25344,-3744,-7717,-5551,-2556,-4229,17916,-6778,-6792,-191,636,21920,17045,31605,27325,31895,-9102,-5197,20315,14982,-5008,11382,-13,3270,3952,9857,29705,18503,14968,-2940,23693,-3466,15951,5479,-8740,24967,-7605,30937,-2899,-7366,8602,8131,25694,21131,1326,-5121,-7115,6974,-561,4470,-4811,-7235,24480,-1575,-6643,-8279,27453,7337,-8515,-9579,-3840,13932,21193,20434,-1155,2454,2501,-4951,-4605,-8461,22222,16104,12101,-176,-2100,2435,5120,24268,-3166,9156,32622,-1181,-5749,10250,7481,26110,26983,-6150,-2932,16139,15473,-2236,-3875,-2268,25285,-610,27970,29654,-2326,-4084,-5506,30670,-7069,11042,-5359,-5946,-637,9286,7912,-8878,22692,-974,-2951,-4199,8486,2379,15234,-8950,27554,-2323,-9229,-5269,-2877,-8284,3086,-4804,21787,-382,31130,1692,-1982,-1129,-5107,-5565,-1708,-9376,-99,-2912,-1272,-4091,-5685,28480,-6724,-2989,-2821,-2476,28571,25161,-9255,10879,-9623,10595,6088,-4627,-2532,12087,14251,22554,21502,-3762,2435,21077,13718,-2892,-1807,27240,-1310,-4262,-8271,-6862,27852,26889,31711,-1808,23080,-4467,18502,-4164,-3644,-1176,13308,-4891,5480,3147,-2459,17650,-4715,17117,-3622,-1195,-2979,26463,-1194,2335,-2537,6519,-5084,20411,-242,12219,8416,-8077,-1630,2769,-2225,-2533,-5937,-2549,23851,30097,15407,1924,-5063,-4724,-5272,-3384,-3672,-7206,-3130,18948,-779,31076,-2825,475,18165,-29,29507,-7379,28108,15892,14887,7895,-1622,-2101,-3336,-1459,-7589,-3989,-6133,16321,21302,-1601,12633,-4142,23543,18569,16155,27927,-8932,14821,-3191,22503,-3906,27340,13704,27904,5449,19785,9503,-9403,20875,9233,-5715,-7427,-9813,8535,-4094,31133,-8973,15201,22168,2136,32358,-591,-7487,2038,-1543,32254,-4805,6817,-4027,6419,-9199,-9082,25894,-1602,-8197,-6770,8967,-2388,14465,-2134,-5758,24254,12792,13294,-8172,-8550,-8534,12424,-288,-5531,15662,-4263,-5251,12049,-3434,-5617,27365,-3832,-4809,-9055,19105,-2052,12699,31922,-7011,28184,-8712,-2191,19331,8262,-9781,-4720,-2755,12418,21110,-3679,21611,27326,-8267,-2773,-4615,9864,2091,-3550,25957,6551,-385,-9282,-5376,18678,20385,-102,-3651,-5548,13017,-5921,29521,13425,-5647,-6648,-6853,24249,12716,-4683,-8500,-3127,-1351,10596,-265,22787,13760,-5677,-3809,-822,-9214,13880,-1111,-5541,-675,14463,-3480,-1843,-1184,28951,2000,27948,-2273,32290,-5422,-7546,-2423,18641,4564,-2417,25069,23209,24182,24122,10523,-4994,-5803,10803,-6620,14769,-604,-9120,-8413,-6186,21944,-8081,-3095,1123,-5941,20498,-5977,-3245,-8544,-4189,-9579,-4873,17102,-9367,21927,23137,29197,11701,15838,27087,-3274,3371,-4313,-5333,-6204,-651,-6217,1454,-6597,-5908,1056,32027,-3007,-1441,-1466,-233,-4910,3610,-8081,28681,28671,4288,5148,13481,6921,-7421,-9124,-9056,-7602,5813,-685,4150,3905,-7777,-6087,8717,32353,2503,-5921,-781,-2768,14970,7129,-1111,8735,-7866,4027,-8628,-3857,20491,-1575,12711,-6609,-3749,-1830,15082,-9244,-73,19448,23307,-9230,-6972,-8818,32653,-908,29437,21719,26278,5626,-5546,-2710,29956,-4152,-2824,16876,-1065,5138,-4232,-6142,15702,28252,-2120,-2500,14762,8665,8962,-3673,23691,-1001,-2610,-6225,13913,-2864,13602,-4501,26463,1519,-2702,13900,7437,-7849,-7219,-355,20029,-3673,-924,31992,24505,-5081,13561,-976,23720,-5650,387,32549,27329,-5588,-4813,-119,-4548,-3445,-2821,29908,-3492,3209,13722,-9206,-8736,28675,22865,19317,7048,-4278,30929,21023,27835,580,380,4693,30780,-866,28330,-2429,-8547,-4570,103,-6654,29789,-3046,-8194,-782,-8755,13457,-4696,30474,-1660,4182,697,13295,1756,-4459,5836,-7495,-3315,20827,13826,-380,9432,18052,24828,10649,-5164,8411,5043,-5240,11680,-1016,5438,-817,-3374,15540,14793,12559,16806,-277,20507,-9484,23455,-4421,30868,8679,1890,-3048,-5753,14632,-1221,30246,6506,11276,-2650,-544,16434,31987,-8257,-1580,-974,5056,6509,4000,28046,24038,-4797,-9244,-9505,-6262,-419,-3307,19762,-7018,-5666,-4095,-116,22010,17168,28119,17178,-4375,-9032,22630,27016,3602,25104,-893,-2143,-8335,11115,10413,15672,-1666,-9389,31122,130,-5058,29605,30096,-2322,-8510,-7039,-6708,-7709,-6759,4615,22287,13067,-2710,9410,32230,21577,21279,-2907,32405,-7276,8092,19740,10971,-319,-1962,24241,31562,19097,31460,-634,-9503,14693,-7418,25112,25104,21757,27269,-3529,-8345,-9067,-7778,7793,-5703,-925,-8711,-7699,2789,32641,17143,-8729,21661,1930,-9684,-4816,-5061,-4918,16391,-79,27060,14391,7397,13393,15321,19514,6619,-48,-8366,-6020,7252,20521,-71,5891,-8021,18021,7415,23002,4836,-7196,-4363,-8897,-4576,9226,14920,-6370,27541,-4078,3646,-1050,14767,15676,-8214,24584,-5972,19071,6207,-1324,-9403,-3277,31284,-383,10231,1153,16186,-9343,16910,-2964,-1162,22470,13598,-4178,6590,-3713,-8435,-2296,-7391,29809,24479,9079,-5965,-2288,-9226,-1040,-1136,-1055,269,-196,-9712,21000,3809,-498,20015,21546,32116,-8204,-1079,-8845,-5950,-2686,15252,-2309,-5770,-5312,19971,16262,15637,-3219,30483,5633,-8297,24954,-4184,-3643,-7816,-5753,-4712,-7158,4532,2831,2649,10954,1946,-578,23182,-9120,10739,28084,14489,17733,-8226,21537,-1734,-3868,24615,-8867,-122,27224,11527,746,-9346,-3922,16339,-3202,-565,-9561,-9019,26054,6151,11250,29415,-5055,-2534,-6991,-7056,-2747,13334,-5938,-864,-9067,30121,14868,-3559,5947,-9391,-3933,566,11896,-1641,-6453,2118,32712,-5608,20797,-3971,21073,1714,12507,-2533,-4385,28531,-5995,-164,10280,17375,11484,29715,25017,23025,3750,22241,-5094,-5364,-4999,21869,-1879,16602,-833,25016,8912,-8390,16421,-1558,3180,16356,-8872,-8561,-2737,-1906,5012,28694,13590,-6739,-290,21204,-6340,-5399,-4662,-3553,19723,-7994,-1798,-3428,-3591,2805,24288,859,28730,8410,1552,8522,-3117,-1387,15636,-4471,14164,26742,18965,-4040,-7969,13212,-214,-5685,-5451,5389,-2309,23429,14783,5969,18794,-8284,-6588,10324,-4621,23043,-3117,8827,18608,-8113,22389,1862,15209,-9243,3454,-1945,1555,14936,10081,-3847,19860,20921,-6002,4156,-9122,-3124,18789,-3391,-1204,-35,-2476,17999,2106,18486,-1395,-5174,-2171,3769,-1025,31806,-1570,-2578,26066,-2373,24273,23257,21536,5187,-4175,-6385,-9532,-4500,691,-3502,3537,31560,2701,-7738,21879,4591,-2530,31615,-5690,16541,-7630,10755,-6374,886,8932,19054,27108,-6127,22051,5355,-1573,14951,32055,6134,20321,12813,-3698,23987,-3016,21515,-5916,-3014,12600,27306,-1475,-973,-8237,-5959,30730,1841,31385,5101,29523,-2105,22656,-5137,-7769,21682,6408,23261,17889,-137,-9073,22527,-7897,22688,10014,-1939,6665,12417,-1882,3763,27969,-916,-6113,-2678,-7902,-3833,-8250,6803,21329,19105,-660,1010,1898,-1964,16918,21145,1715,-4744,-739,11829,32487,29498,-9628,-4506,-9778,-5083,24930,-7941,-4087,-6385,31122,23318,-5686,15065,-6081,30183,-7891,-382,-5816,-5724,-4256,25288,-7089,27321,-1288,-7096,-3139,25732,-5177,-6482,-7612,-450,28184,-7908,-9348,-3887,-1351,-6082,19486,-784,-7099,17781,-1888,-6329,-1549,-7189,10725,-8540,-8620,-2447,11580,-5623,-6855,13014,25425,-25,30289,2378,21838,-4575,10875,16336,20490,-8889,7785,9222,10178,-7779,13080,-4810,2715,1744,-7862,-4312,30476,-7741,-2935,-4635,21895,7639,20990,11443,-5143,-374,17867,2958,-1613,-9767,-1138,17935,31840,-1487,31233,6408,-6303,1522,15397,23774,-5864,14825,25029,22431,12792,18620,6764,-5308,9705,12348,-2851,-6884,7716,-5426,9995,-1045,-6144,-3939,16544,23317,-7246,29919,30706,-5066,-4237,19867,-1855,-574,-2513,-688,-7825,26721,-6323,-9015,7084,29938,-5657,-5475,95,-268,27011,21460,-4740,1932,-3629,12527,-7113,10205,11132,-6725,525,18412,26909,-8053,-6612,25710,-7852,7923,-1543,-8239,17691,-7911,29255,11950,-1878,8671,32630,-4022,-491,20608,24112,467,-9134,-5235,-297,-5029,17678,24198,13902,10179,27828,31493,-6883,-5488,-1297,-9051,11136,-3729,23813,5363,-3147,-5352,-1081,16185,27321,-3989,-992,29107,-1981,-8086,31313,3664,-2728,-291,-7127,30599,-3470,-9349,-1527,21520,-110,-9392,7600,-3823,-7093,-2454,-7616,6637,-681,-2765,13505,-3178,10998,26674,-526,-7724,22143,14544,14224,-4756,-6388,-3034,-407,-1267,27000,18707,-5050,-7120,26369,11359,-8502,-668,-7701,-55,9549,24022,23368,-9238,28506,-6714,18835,10903,-8725,-602,25166,-7965,31660,1473,-7873,-5719,32271,-5211,29583,-693,9463,-4010,-1516,-5826,-9002,-6435,23175,24719,5584,-4674,1006,23648,-3309,-586,22730,-7854,6471,23670,-6052,18377,21506,-297,-36,27978,-456,-3283,6990,-4748,-5302,-480,-1267,-7636,1957,3236,-6626,-9423,-971,-8482,-1259,-452,23798,-8247,27463,24057,12355,17570,-9199,7137,-5978,15436,-6523,30028,2979,-826,11741,2212,4326,-4922,26440,-8060,21139,-8242,-79,2141,-6765,-8228,30418,-9511,10507,-6532,-4441,26513,865,-3453,-8241,5511,-6430,28838,3809,6180,3722,-1310,-2133,-2949,17366,21653,13548,12933,-3399,4975,30039,-1938,-4270,21974,-7880,8279,-975,-342,-5216,22983,8719,-2326,23903,9481,-7057,23217,-8037,-4491,21389,-4750,-6046,-1893,9425,-4501,21413,5388,-3694,-186,-9362,1855,4134,-2599,-3901,2373,11539,6606,32278,15226,27542,28323,-105,15697,4955,2301,-6698,-6927,12163,-5282,10802,8395,-3676,27085,-1864,4536,-3454,3042,10414,24508,16585,10633,22340,-6946,2007,-6732,-5678,25636,8456,-3577,-2407,31392,26413,2898,10726,4408,24779,13133,-2294,6091,26573,32029,-5063,-9297,-6489,20508,-415,13062,-4109,13100,-82,14360,752,-516,-355,-2902,-6318,20710,-8576,11193,29807,28780,31551,-2269,-4947,-8768,-8201,-7449,-493,31445,4819,8075,22484,21311,-8972,5742,4343,-4687,19589,8039,-720,-2169,-1866,-610,31992,-511,-5937,-4354,935,30957,-9427,19254,22390,-5368,-239,14761,22030,-1566,-6071,-9297,-2938,-8401,25109,-4805,26263,-9631,-8418,9031,22189,1616,11894,24213,17654,-8348,17051,29612,3921,-3183,-1342,-3830,-7616,-3179,-7183,9421,-1678,19716,27047,5445,-964,-3257,3323,-2617,-6606,6994,-3139,3741,31172,-8807,5944,25981,30781,2521,-1370,-5495,-2146,-7162,-3733,24629,5764,-8319,636,15971,26560,-3306,21000,30489,-1144,23754,-9345,3946,13750,23039,-7810,-9068,27179,32138,25039,26697,6482,-1002,6128,466,-1658,-473,-350,-5188,7658,-2934,21298,-5314,-2755,16907,21806,-436,-8658,12866,-9175,2175,30639,-5077,-5703,21454,-4351,-7979,3490,-7529,28803,-5858,-9325,17990,13631,-8218,-9026,4903,20905,-1809,23697,32395,18651,29656,16068,-6041,-5667,4565,8369,-2716,-1277,-2884,4848,21766,-4661,7212,1883,2474,-4701,-8989,-951,-4013,32555,-4305,22239,-734,6658,3084,-9669,22080,28812,-3814,20452,31344,16422,-1687,-4629,-3621,-3962,-5135,-2262,-8353,-7518,-5926,14049,-174,12067,14735,-2611,32344,14654,3434,3877,11876,-6645,-180,25839,12433,-451,-4029,8714,-6005,25817,7775,13557,-1645,12043,-1115,15032,-2210,-8248,14190,2378,16822,11451,-4453,27962,-8620,-3103,14916,-6396,-5692,-3705,16582,10224,-8245,-8402,-9389,11849,-7478,-5876,5468,6666,14268,-995,2671,-1900,-9245,-6894,-9604,6311,-1765,-923,15309,-3367,6631,10131,-3004,-1125,-395,19786,27074,-7840,-4024,-329,21832,25603,5517,-4231,19544,-6373,-6743,-5799,9016,-9126,-2589,-7655,-4276,3167,17103,23929,-3722,29404,-5135,-828,18504,13333,-4682,-640,7633,8290,-4329,-3275,-243,-7541,-717,-8033,19536,5522,20085,-3782
};
