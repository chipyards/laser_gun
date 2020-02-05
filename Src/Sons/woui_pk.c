#include "../audio.h"
#ifdef USE_woui_pk
/* pour utiliser ce son, declarer :
#define USE_woui_pk
extern const type_son woui_pk;
*/
static const short leson[] = {
0, -44, 253, 500, 930, 1869, 2916, 4217, 
4379, 2309, -1495, -6178, -9301, -9419, -7243, -3945, 
-2283, -1367, 2457, 8901, 16658, 19300, 13117, 1041, 
-9919, -15104, -14363, -9178, -5253, -3683, -2302, 627, 
5679, 11889, 11324, 1847, -8350, -13782, -11941, -5662, 
2377, 5553, 3625, 5668, 8333, 7746, 5633, -3281, 
-17096, -20376, -13850, -10669, -386, 13391, 14011, 13810, 
16440, 11917, 1921, -6356, -18122, -22534, -15970, -10434, 
912, 10011, 10608, 9984, 13047, 9186, -1498, -10195, 
-15017, -12263, -4337, 7472, 13998, 13924, 9360, 7768, 
3749, -8260, -14267, -14372, -14797, -10563, 3871, 12475, 
11989, 13146, 9578, -4153, -12009, -8493, -5874, -2378, 
3669, 9255, 10239, 10127, 7047, -3255, -17541, -23742, 
-16946, -8553, 552, 12577, 20479, 19172, 17555, 9242, 
-11221, -22305, -17622, -10199, -4434, 3954, 8443, 7689, 
10421, 6456, -11084, -20964, -13763, -3125, 6954, 17521, 
21073, 16638, 11469, -189, -19743, -29885, -20668, -4032, 
8302, 15229, 16740, 12723, 4584, -6504, -19236, -20572, 
-7193, 10228, 22089, 25682, 19744, 4570, -10541, -25825, 
-32580, -21145, -1588, 15386, 23895, 22222, 11018, -1793, 
-13934, -23061, -18371, -1481, 15208, 23670, 22781, 9469, 
-8629, -18572, -21736, -18930, -4518, 10147, 14529, 14480, 
10188, 180, -8365, -9742, -7362, 401, 10874, 10110, 
1627, -5278, -10420, -9598, -1967, 4213, 7362, 6906, 
-1262, -6942, -5879, -3669, 1446, 9049, 11975, 9317, 
1236, -11431, -15048, -9341, 707, 11609, 14463, 7107, 
-6849, -16872, -16068, -7148, 4556, 14207, 17508, 12335, 
-2332, -15096, -13135, -4484, 4384, 10795, 9096, 264, 
-11379, -18628, -13489, -1015, 10969, 16019, 11391, -176, 
-14294, -16308, -3785, 10386, 18543, 14945, 1308, -16404, 
-27142, -18846, 1386, 20046, 23899, 11337, -6823, -23558, 
-23074, -4112, 19075, 29941, 19739, -725, -23102, -29903, 
-15996, 7580, 25860, 21546, 4289, -18540, -31014, -20403, 
2549, 25367, 26731, 12340, -7091, -25560, -21221, -277, 
19907, 22441, 6706, -10060, -25605, -24098, -3396, 18382, 
22164, 6000, -8852, -20374, -17886, 3081, 26644, 27274, 
5330, -12067, -23206, -22420, -1891, 25870, 25965, 3764, 
-13050, -26790, -22127, 6983, 32579, 26200, 4422, -14826, 
-27910, -18928, 7186, 29059, 20805, -1739, -17953, -27092, 
-16855, 10345, 29110, 17357, -2547, -16287, -23852, -6674, 
22905, 27167, 7626, -8874, -21972, -21194, 4001, 25911, 
20447, -164, -16077, -25210, -15107, 12378, 24817, 13165, 
-5109, -16889, -19422, -2410, 21874, 23348, 6973, -11303, 
-22323, -15479, 8796, 27435, 17236, -9446, -24297, -20420, 
3661, 26465, 21636, 2481, -18033, -21419, -723, 22220, 
23341, 5360, -16357, -26256, -11274, 15905, 25630, 6575, 
-9974, -18749, -19648, 9104, 28870, 15071, 17, -14994, 
-24138, -916, 23731, 16153, 1709, -16008, -27895, -6326, 
18149, 16356, 5383, -10492, -23161, -5599, 19354, 16904, 
7309, -5820, -21309, -6845, 16418, 11958, 1364, -8358, 
-22925, -8011, 15722, 10998, 3818, -3938, -19557, -5719, 
19209, 11812, 4511, -1074, -19685, -9087, 16558, 9344, 
-249, -3970, -19028, -7681, 15079, 9458, 718, -5767, 
-15437, -353, 16841, 10457, 2201, -10380, -16269, 418, 
8816, 6102, 3104, -11440, -11820, 4840, 4646, 3142, 
3728, -8612, -5112, 7851, 4088, 2245, -729, -8445, 
870, 5189, -1978, -69, -5739, -6751, 8208, 4428, 
-4224, -3380, -9136, -1986, 10606, 5601, 1397, -5257, 
-8829, 4124, 4855, 573, 338, -10556, -4701, 7341, 
-1714, 1009, -3350, -15120, 6076, 8577, -893, 9032, 
-8336, -11588, 11594, 429, 1077, 8176, -15170, -5697, 
5461, -8630, 4640, 1612, -8100, 9733, -1613, -4637, 
7448, -6041, 6350, 9489, -8235, 2479, -5979, -8803, 
9288, -4258, 101, 5059, -14557, 2228, 1423, -7881, 
18044, 2614, -5116, 10226, -15827, -3162, 16478, -3477, 
10504, -3312, -25199, 4396, 399, 5489, 16869, -17836, 
-5115, 7234, -6028, 17189, 1877, -12475, 9713, -1864, 
2128, 4607, -15938, 2092, 4077, -69, 12142, -12470, 
-10221, 6528, -47, 13930, 3306, -11028, 2585, -1860, 
6008, 7607, -8440, 1195, -1745, -3775, 2324, -5574, 
6029, 6480, 1035, 3472, -13152, -233, 14313, 4410, 
7859, -9576, -12189, 7772, 3402, 10264, -1334, -15010, 
5143, 848, 5017, 5389, -13474, 6677, 7037, -2115, 
2987, -11810, 4877, 14959, -506, -3902, -15926, 72, 
18312, 5404, -3524, -18391, -6643, 17225, 10511, -1734, 
-18602, -8093, 17122, 15381, 650, -21244, -11364, 13977, 
17143, 6636, -22594, -18170, 10359, 15404, 7545, -20117, 
-14020, 15246, 16131, 9031, -20626, -18836, 16080, 19083, 
9845, -20777, -25649, 10147, 19853, 10821, -19671, -28233, 
5486, 23150, 16555, -17704, -26754, 3078, 18403, 19115, 
-13018, -27766, 3188, 19578, 14788, -16167, -28151, -1449, 
18542, 18919, -16049, -24148, 2992, 15255, 16888, -13966, 
-20643, 6416, 16657, 10102, -20362, -18485, 8424, 19464, 
9688, -24987, -18388, 7279, 19117, 13212, -23579, -13593, 
10937, 13863, 9205, -21267, -12114, 13368, 13866, -2393, 
-24604, -3159, 13891, 12492, -2345, -27824, 324, 23144, 
11534, -10539, -26682, 3093, 22419, 11386, -15072, -26650, 
6287, 22375, 8092, -20521, -21921, 13709, 21711, 514, 
-26118, -16722, 21921, 25271, -5164, -31311, -14086, 24620, 
26047, -10602, -32555, -7183, 23966, 20514, -15273, -30103, 
3186, 28133, 11400, -24888, -26216, 11206, 31343, 7217, 
-28576, -20895, 14994, 27739, -1868, -31049, -10702, 22923, 
23029, -12523, -32579, -3569, 27724, 19819, -17474, -27877, 
3613, 28303, 12266, -23380, -20508, 11320, 24640, 1001, 
-26962, -10696, 18794, 19580, -8858, -26307, -2044, 24686, 
15885, -15827, -20234, 5318, 21088, 7990, -18652, -11977, 
13004, 15783, -3429, -21264, -5177, 17066, 13074, -6541, 
-16137, 126, 14019, 8374, -7098, -9794, 3620, 9910, 
3339, -6911, -3633, 3373, 1920, 49, -2412, 883, 
3050, -467, 224, 704, 2558, 1701, -2239, 1409, 
2268, -344, -1491, -2582, 2013, 3065, -1078, -1993, 
-286, 1885, -256, -770, 1972, 3023, 1686, -2982, 
-4378, 2404, 7305, 101, -4882, -2097, 721, 4925, 
456, -4833, -1306, 3678, 5364, -2799, -6723, -1270, 
4049, 6533, 1158, -4562, -3343, 1897, 4894, 523, 
-3863, -160, 2352, 1357, 1454, -3827, -2998, 2898, 
2133, 1852, -2253, -2652, 1680, 2018, 4197, -121, 
-3710, -674, 57, 3184, 1604, -2372, -1060, -396, 
593, 1334, 500, 1808, 3758, 1306, -2898, -2991, 
177, 4884, 5925, -2065, -7246, -3881, 1790, 7524, 
2742, -3970, -1177, 491, 2549, 637, -2779, 2480, 
4668, 2305, -1416, -3864, 2509, 5017, -1332, -5812, 
-3763, 6235, 9864, 933, -6802, -8060, 1495, 11542, 
5367, -3157, -2591, -961, 765, 2448, 277, 947, 
4034, -962, -5187, -3133, 2527, 10902, 4579, -7596, 
-6090, -1557, 7022, 11587, -1562, -8783, -2026, 2824, 
5141, 996, -7476, -3509, 6498, 6865, 3922, -3969, 
-7726, 1356, 4226, 3445, 1708, -1442, 1330, 538, 
-1065, -1215, -847, 3150, 2084, -44, -687, -1075, 
697, -349, 1211, 2702, 787, 269, -1781, -1513, 
1096, 3708, 1912, -2998, 267, 1439, -49, 8, 
-2973, 402, 4530, 3101, -1311, -8353, -3758, 7817, 
7550, 993, -3692, -7489, -2463, 7965, 4659, -1969, 
-2051, -1550, -1199, -2612, -176, 2040, 1896, 3981, 
-1472, -4719, 696, 542, 719, 935, -1838, 41, 
603, -1563, -1834, 138, 3211, 624, -4705, -3905, 
501, 4903, 4034, -2715, -6323, -286, 7041, 2667, 
-5481, -7535, -795, 7582, 5888, -5141, -13567, -4443, 
9384, 7617, -1598, -6919, -3876, 5140, 4518, -5860, 
-7021, 1895, 9476, 4324, -11106, -13382, 936, 13897, 
9338, -8457, -13777, -4396, 6330, 10279, 188, -8122, 
-1031, 2031, -3806, -3794, 628, 4565, 4004, -4589, 
-10460, -1720, 7502, 4557, -2941, -7297, 527, 5675, 
-1503, -4507, -4846, 2449, 10758, -1059, -11177, -5462, 
1940, 5969, 2205, -5096, -2418, 2510, -690, -3731, 
-5370, 2146, 10588, 2144, -8287, -11534, -332, 12009, 
4043, -3087, -8303, -6073, 6902, 2755, -1672, -2844, 
-2972, 4582, 504, -3519, -2793, -3198, 3006, 3396, 
-1025, 837, -949, -4911, -2095, 506, 2731, 3195, 
-1834, -3184, -1510, 1080, 2367, 69, -871, -1190, 
-226, -187, -143, 1717, 1988, 300, -2973, -3294, 
-1343, 3264, 4511, -1123, -19, -1622, -3755, 1895, 
1022, 2565, 3514, -2610, -2231, -1703, 847, 3740, 
-1537, -1537, 1468, 1692, 1048, -4600, -3683, 4884, 
5870, 338, -5228, -3767, 4815, 8337, 599, -8832, 
-5581, 5094, 8904, -85, -8201, -1816, 7068, 8348, 
-2039, -13165, -2396, 11467, 7080, -2028, -7117, -2798, 
9038, 6352, -9096, -7686, 3062, 7298, 6968, -3816, 
-6501, 2623, 3316, 914, -3183, 455, 8332, -369, 
-3754, -2267, -46, 8283, 436, -5546, 568, 1984, 
1202, 127, -167, 1337, 3421, -2594, -2686, 7028, 
2551, -2756, -4597, -2951, 12304, 9269, -8400, -11338, 
-1864, 14647, 12751, -10353, -14090, 3352, 14213, 7803, 
-11698, -16863, 7622, 25069, 5863, -17929, -16899, 4221, 
22792, 8746, -14728, -13231, 3679, 15782, 5020, -12889, 
-6532, 10640, 10706, -3626, -14413, -6301, 15001, 18631, 
-3735, -18246, -9438, 7559, 16562, 3932, -10740, -6327, 
1254, 7285, 3826, -5230, 383, 2470, 960, -1064, 
-4128, 4042, 5576, 1387, -1913, -6636, -2206, 5834, 
7430, 16, -4356, -3429, -1924, 6602, 6369, -2431, 
-4478, -2224, 3326, 5161, 1672, -3147, -4183, 1893, 
2538, -335, 523, 1052, 2812, -1032, -6205, -1054, 
4364, 6972, 2613, -8236, -6033, 2962, 6924, 3564, 
-5514, -5673, 1089, 5193, 2384, -4037, -2127, 2318, 
1617, -1675, -1165, 2415, 2637, 306, -6454, -7011, 
5619, 10236, 999, -7341, -9610, 493, 9621, 3037, 
-3466, -4970, -555, 5275, 90, -7499, -2221, 7767, 
4661, -4651, -8447, -1751, 9226, 5634, -6256, -8989, 
48, 10764, 3318, -11646, -8064, 6730, 10697, 708, 
-10895, -10562, 6430, 13305, -608, -11164, -6618, 6976, 
8904, -5096, -11092, -1062, 10964, 7152, -7790, -13847, 
-3160, 13773, 10279, -7627, -10519, -3259, 5091, 6206, 
-4375, -5967, 1961, 5745, 927, -8498, -7931, 3127, 
10221, 2656, -6382, -6732, -4752, 5699, 6629, -3224, 
-1295, -2823, -1661, 124, -3738, 2889, 3014, 862, 
-501, -8234, -3593, 3992, 4574, 2862, -2361, -5910, 
-2826, 1995, 2838, 2176, -1371, -2526, 123, -2587, 
454, 4203, -1546, 16, -497, -2828, 2357, -833, 
-2154, 1369, -1115, 1911, 2133, -3634, -1691, -770, 
-71, 2309, 510, 1181, -390, -4399, -504, 363, 
-152, 4321, -1058, -3551, 1075, -842, -158, 1054, 
-1989, 294, 1587, -2616, -402, 1976, 1077, 2101, 
-3876, -4878, 1965, 1988, 2020, -1984, -3618, 3575, 
2088, -1685, -2764, -2481, 3491, 5352, -1768, -5910, 
-1621, 2517, 4353, -523, -6221, -1021, 3831, 3547, 
-481, -4657, -492, 3035, -903, -1307, -564, 809, 
6201, -1138, -8892, -2793, 2798, 7575, 4355, -5002, 
-6357, -2406, 4370, 4863, -94, -2698, -3061, -274, 
642, 1833, 1663, -1367, -1938, -3530, 208, 5301, 
3110, -1011, -6088, -2391, 4282, 1991, 495, -1407, 
-2370, 1485, 775, -2344, -841, 3760, 4597, -2081, 
-5717, -3084, 1465, 7564, 3659, -5797, -5534, -264, 
5021, 4818, -2344, -4186, -877, 850, 2323, 684, 
-1110, 590, 684, -1573, -1700, 215, 1138, 2723, 
983, -3095, -1685, -165, 1852, 4600, -1853, -5436, 
-1277, 1360, 6218, 4222, -5760, -6298, 570, 4135, 
3183, -1240, -3833, 754, 4636, -260, -4704, -2494, 
3264, 7627, 432, -7207, -3216, 2034, 4764, 2918, 
-4537, -4200, 3617, 2975, -505, -855, -1604, 28, 
711, 1282, 1033, -1477, -1149, -939, 161, 4651, 
3751, -4820, -6904, 984, 5554, 4676, -1079, -8966, 
-2776, 7905, 5475, -3061, -7178, -412, 5978, 2143, 
-2895, -4404, 1109, 8410, 1136, -9681, -4045, 7121, 
7634, -441, -8181, -7268, 5089, 9979, -495, -6882, 
-3926, 4808, 6225, -2778, -5964, -1401, 5965, 4191, 
-3382, -4242, -670, 5298, 2049, -5690, -3691, 3094, 
6781, -308, -6783, -3990, 3185, 7740, 502, -5959, 
-4416, 2722, 6016, -1169, -3048, -1779, 1297, 4435, 
-1269, -4319, -425, 4650, 1774, -4651, -2569, 408, 
3773, 3561, -4295, -4194, 1725, 3824, 375, -2470, 
-1619, 829, 3558, -801, -4030, 314, 3095, 2847, 
-785, -4855, -1481, 3039, 3067, 533, -3478, -1032, 
3175, 1139, -1195, -2374, 415, 2419, 1774, 578, 
-3581, -287, 1465, -1864, 1421, 775, 578, 2039, 
-832, -2072, -1410, 1809, 758, -544, 613, -1170, 
1315, 219, -1095, -483, -1800, 3042, 3205, -1377, 
-3110, -3195, 1204, 4079, 2318, -2329, -5041, -799, 
3337, 2932, -400, -1885, -1013, 158, 2145, -1092, 
-2826, 1639, 1734, 39, -1300, -2123, 924, 2276, 
896, -1070, -3387, -664, 3127, 1510, -501, -602, 
-1138, -891, 1049, 501, -265, 620, -129, -17, 
-367, -502, -73, -1682, 976, 3340, 186, -1512, 
-2862, -1230, 3126, 3594, -655, -5775, -2495, 3382, 
3919, 1688, -3179, -2807, 1153, 1034, -1124, -2327, 
994, 4819, 1220, -5491, -4644, 2870, 6334, 2273, 
-4464, -7042, 169, 5902, 3087, -1825, -3670, 1380, 
2041, -2635, -1787, 452, 3564, 3099, -4186, -5386, 
1602, 7473, 2201, -6738, -4950, 1239, 6660, 4176, 
-5545, -6463, 379, 6600, 3804, -4194, -3759, -175, 
1500, 1013, -1648, -130, 2905, 1738, -3245, -4622, 
657, 4526, 3251, -3200, -5819, 227, 3961, 3717, 
-448, -4816, -799, 1247, -282, 538, 300, 2120, 
1531, -3299, -3192, 680, 4019, 1621, -3107, -2404, 
703, 3708, 1418, -3499, -2621, 777, 4000, 306, 
-3523, -704, 397, 2377, 425, -3325, 125, 1760, 
1101, -1021, -2276, 505, 1703, 1028, -1521, -1101, 
1669, 778, 193, -2242, -1596, 3032, 920, 255, 
-807, -1767, 1965, -398, -1443, 11, 1272, 3159, 
-2062, -3579, -1193, 1596, 5943, 478, -4637, -3160, 
-233, 3626, 1687, -1091, -1631, -216, 2012, -1239, 
-2274, 136, 1347, 2291, -984, -2576, -170, 1251, 
1319, -1160, -1416, 107, 1803, 1433, -2958, -1211, 
1177, 773, 2009, -2316, -2224, 1616, 291, 1644, 
-1012, -2856, 1775, 1377, 665, -780, -2852, 227, 
1195, 1269, 608, -1520, -239, -57, -541, -181, 
154, 945, 6, 650, -587, -3029, 734, 957, 
-143, 1429, -672, -353, -929, -1492, 393, 297, 
1361, -34, -877, -854, -1243, 1538, 33, -211, 
-251, -1528, 1163, -672, 6, 1173, -1402, 548, 
-399, -1551, -393, 456, 2440, 461, -1345, -1927, 
-1562, 1157, 2104, 907, -1932, -1904, 1756, 1660, 
-964, -2082, -2276, 1431, 4152, 656, -2693, -3918, 
411, 4146, 610, -1609, -2492, -450, 2304, 891, 
-702, -2471, 781, 2956, -1700, -2448, -1215, 1335, 
3549, 182, -2396, -3287, -274, 3288, 279, 153, 
-959, -1422, 1147, -840, 348, 137, -760, 1975, 
-936, -862, -217, -1809, 2003, 1787, 285, -1324, 
-3734, 268, 2438, 2067, 337, -3843, -1273, 1799, 
1913, 325, -2467, -520, 1211, 1605, -377, -2765, 
805, 1799, 34, -515, -2398, 732, 3194, 497, 
-1617, -2708, 166, 2365, 1109, -600, -1737, -251, 
1017, 245, 332, -634, -595, 360, -828, 463, 
1091, -98, -23, -1549, -514, 1034, 172, 840, 
-800, -515, 898, -1007, -46, 566, 35, 429, 
-789, -600, -183, 1527, 767, -1739, 52, -132, 
206, 1172, -1870, -714, 1688, 1063, 165, -1996, 
-807, 806, 492, 926, -1413, -395, 2082, -23, 
-876, -1521, 6, 2694, 97, -1224, -1155, -177, 
2551, 692, -1711, -1539, 412, 2626, 121, -1625, 
-1082, 64, 2690, 115, -2106, -647, 109, 2661, 
166, -2873, -372, 327, 2272, 1396, -2627, -1488, 
97, 1677, 1408, -1025, -864, -435, 956, 739, 
-1208, -229, 194, 1110, 452, -1615, -286, 97, 
1671, 1391, -2010, -498, -57, 865, 2594, -1339, 
-1488, 235, -86, 2142, 957, -1449, -236, -223, 
510, 1059, -298, -349, 539, 968, -80, -441, 
-481, -412, 1953, 1014, -818, -561, -934, 1288, 
945, -212, 681, -1271, -16, 1123, -378, 1547, 
-69, -1226, 275, -607, 1759, 1605, -1427, 97, 
-218, 121, 1501, -905, -338, 1003, 310, 367, 
-1002, -688, 1387, 1444, 390, -1181, -1564, 677, 
1708, 551, -642, -894, 224, 1186, 143, -974, 
143, 900, 871, 372, -1358, -504, 1008, 1077, 
866, -654, -963, -183, 241, 1020, -103, -556, 
155, -379, -6, -184, -378, 511, 69, -412, 
-465, 172, 980, 189, -396, -597, -115, 1284, 
608, -6, 87, -321, 505, 768, 207, 522, 
493, 464, 849, 62, 218, 745, 625, 882, 
493, 636, 985, 778, 641, 246, 377, 755, 
599, 730, 645, 274, 245, 154, 291, 284, 
142, 11, -34, 296, 244, 131, 91, -51, 
63, 154, 277, 334, 51, 147, 363, 277, 
-146, -23, 34, 446, 74, -361, -163, -79, 
546, -39, -51, -220, 837, 917, 4028, 8536, 
10239, -3737, -26916, -18765, 6260, 15936, -19379, -18889, 
4425, -13678, -5377, -318, 1603, 5148, 11329, 28515, 
22125, 10289, 7627, 7463, 7376, 851, -3693, -16284, 
-25702, -16164, -30056, -32580, -16724, -13623, -6796, -3549, 
2278, 9947, 13493, 16366, 18007, 19487, 21651, 22932, 
22323, 21269, 19565, 16431, 14003, 12047, 10496, 8951, 
7216, 5297, 3439, 3378, 1314, -595, -985, -2539, 
-3508, -5351, -5614, -6907, -6529, -5850, -7639, -8498, 
-13470, -17245, -17804, -21347, -21119, -18885, -16368, -5488, 
-4730, -20780, -27883, -24298, -15167, -8321, -5386, -2048, 
-3495, -4824, -5478, -2211, 4255, 14464, 22403, 20445, 
16128, 13845, 14058, 10980, 7835, 7858, 7854, 4831, 
-1470, -5798, -11268, -13371, -9173, -7305, -5438, -4051, 
-3570, 157, 2669, 2833, 6157, 8979, 11163, 14668, 
13281, 10348, 9245, 9757, 9987, 7702, 5502, 4437, 
5026, 3149, 2606, 2813, 2270, 3301, 1004, -762, 
-1222, -2013, -1358, -1448, -3214, -4275, -3826, -4623, 
-4500, -3288, -4882, -5904, -6320, -7141, -6668, -3986, 
-1522, -2617, -4514, -5172, -4617, -4134, -3089, -2371, 
-3062, -1669, -85, -157, 96, 618, 123, 816, 
2608, 928, 348, 950, -917, 1827, 3498, 3656, 
3133, 534, 2632, 3336, 4163, 4812, 2245, 1429, 
338, -2663, -524, 326, -1137, -439, -46, 338, 
-2365, -3361, -1419, 264, 1013, 1741, 4564, 4119, 
2535, -2440, -11907, -16022, -17404, -2599, 4718, 113, 
1173, -5018, -5644, -5837, -11222, -9062, 3807, 4919, 
260, 3514, 1692, 3306, 6495, 2195, 3838, 5531, 
1202, 699, -671, -3951, -3009, -1310, -1118, -756, 
-1181, 2146, 2519, 5817, 6896, 4310, 7958, 8282, 
7332, 5180, 8204, 9294, 6521, 9799, 9043, 6448, 
4595, 3628, 3296, 2848, 3087, 1040, -583, -2901, 
-3608, -3047, -4857, -1244, -1538, -7077, -3535, -2959, 
-4112, 3615, 7689, 6263, 6044, 4742, 4448, 6712, 
7957, 7296, 7138, 6867, 4862, 5627, 9098, 12230, 
11652, 9836, 9575, 7215, 7340, 10903, 9957, 7148, 
4135, 1926, 2492, 487, -1026, -4861, -8193, -5610, 
-1660, -776, -3389, -6223, -7640, -9557, -8809, -8844, 
-10839, -11209, -5812, -1009, -6123, -5307, -6963, -9986, 
-8201, -6353, -2562, -3265, -1852, -2001, -2713, -1611, 
-1243, -871, -327, 69, -227, 8, -782, -1314, 
-945 };
const type_son woui_pk = { .longson=2673, .periodus=91, .son=leson };	// style C99
#endif