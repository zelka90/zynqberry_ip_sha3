
#ifndef IP_SHA3V5_H
#define IP_SHA3V5_H


/****************** Include Files ********************/
#include "xil_types.h"
#include "xstatus.h"

#define IP_SHA3V5_S00_AXI_SLV_REG0_OFFSET 0
#define IP_SHA3V5_S00_AXI_SLV_REG1_OFFSET 4
#define IP_SHA3V5_S00_AXI_SLV_REG2_OFFSET 8
#define IP_SHA3V5_S00_AXI_SLV_REG3_OFFSET 12
#define IP_SHA3V5_S00_AXI_SLV_REG4_OFFSET 16
#define IP_SHA3V5_S00_AXI_SLV_REG5_OFFSET 20
#define IP_SHA3V5_S00_AXI_SLV_REG6_OFFSET 24
#define IP_SHA3V5_S00_AXI_SLV_REG7_OFFSET 28
#define IP_SHA3V5_S00_AXI_SLV_REG8_OFFSET 32
#define IP_SHA3V5_S00_AXI_SLV_REG9_OFFSET 36
#define IP_SHA3V5_S00_AXI_SLV_REG10_OFFSET 40
#define IP_SHA3V5_S00_AXI_SLV_REG11_OFFSET 44
#define IP_SHA3V5_S00_AXI_SLV_REG12_OFFSET 48
#define IP_SHA3V5_S00_AXI_SLV_REG13_OFFSET 52
#define IP_SHA3V5_S00_AXI_SLV_REG14_OFFSET 56
#define IP_SHA3V5_S00_AXI_SLV_REG15_OFFSET 60
#define IP_SHA3V5_S00_AXI_SLV_REG16_OFFSET 64
#define IP_SHA3V5_S00_AXI_SLV_REG17_OFFSET 68
#define IP_SHA3V5_S00_AXI_SLV_REG18_OFFSET 72
#define IP_SHA3V5_S00_AXI_SLV_REG19_OFFSET 76
#define IP_SHA3V5_S00_AXI_SLV_REG20_OFFSET 80
#define IP_SHA3V5_S00_AXI_SLV_REG21_OFFSET 84
#define IP_SHA3V5_S00_AXI_SLV_REG22_OFFSET 88
#define IP_SHA3V5_S00_AXI_SLV_REG23_OFFSET 92
#define IP_SHA3V5_S00_AXI_SLV_REG24_OFFSET 96
#define IP_SHA3V5_S00_AXI_SLV_REG25_OFFSET 100
#define IP_SHA3V5_S00_AXI_SLV_REG26_OFFSET 104
#define IP_SHA3V5_S00_AXI_SLV_REG27_OFFSET 108
#define IP_SHA3V5_S00_AXI_SLV_REG28_OFFSET 112
#define IP_SHA3V5_S00_AXI_SLV_REG29_OFFSET 116
#define IP_SHA3V5_S00_AXI_SLV_REG30_OFFSET 120
#define IP_SHA3V5_S00_AXI_SLV_REG31_OFFSET 124
#define IP_SHA3V5_S00_AXI_SLV_REG32_OFFSET 128
#define IP_SHA3V5_S00_AXI_SLV_REG33_OFFSET 132
#define IP_SHA3V5_S00_AXI_SLV_REG34_OFFSET 136
#define IP_SHA3V5_S00_AXI_SLV_REG35_OFFSET 140
#define IP_SHA3V5_S00_AXI_SLV_REG36_OFFSET 144
#define IP_SHA3V5_S00_AXI_SLV_REG37_OFFSET 148
#define IP_SHA3V5_S00_AXI_SLV_REG38_OFFSET 152
#define IP_SHA3V5_S00_AXI_SLV_REG39_OFFSET 156
#define IP_SHA3V5_S00_AXI_SLV_REG40_OFFSET 160
#define IP_SHA3V5_S00_AXI_SLV_REG41_OFFSET 164
#define IP_SHA3V5_S00_AXI_SLV_REG42_OFFSET 168
#define IP_SHA3V5_S00_AXI_SLV_REG43_OFFSET 172
#define IP_SHA3V5_S00_AXI_SLV_REG44_OFFSET 176
#define IP_SHA3V5_S00_AXI_SLV_REG45_OFFSET 180
#define IP_SHA3V5_S00_AXI_SLV_REG46_OFFSET 184
#define IP_SHA3V5_S00_AXI_SLV_REG47_OFFSET 188
#define IP_SHA3V5_S00_AXI_SLV_REG48_OFFSET 192
#define IP_SHA3V5_S00_AXI_SLV_REG49_OFFSET 196
#define IP_SHA3V5_S00_AXI_SLV_REG50_OFFSET 200
#define IP_SHA3V5_S00_AXI_SLV_REG51_OFFSET 204
#define IP_SHA3V5_S00_AXI_SLV_REG52_OFFSET 208
#define IP_SHA3V5_S00_AXI_SLV_REG53_OFFSET 212
#define IP_SHA3V5_S00_AXI_SLV_REG54_OFFSET 216
#define IP_SHA3V5_S00_AXI_SLV_REG55_OFFSET 220
#define IP_SHA3V5_S00_AXI_SLV_REG56_OFFSET 224
#define IP_SHA3V5_S00_AXI_SLV_REG57_OFFSET 228
#define IP_SHA3V5_S00_AXI_SLV_REG58_OFFSET 232
#define IP_SHA3V5_S00_AXI_SLV_REG59_OFFSET 236
#define IP_SHA3V5_S00_AXI_SLV_REG60_OFFSET 240
#define IP_SHA3V5_S00_AXI_SLV_REG61_OFFSET 244
#define IP_SHA3V5_S00_AXI_SLV_REG62_OFFSET 248
#define IP_SHA3V5_S00_AXI_SLV_REG63_OFFSET 252
#define IP_SHA3V5_S00_AXI_SLV_REG64_OFFSET 256
#define IP_SHA3V5_S00_AXI_SLV_REG65_OFFSET 260
#define IP_SHA3V5_S00_AXI_SLV_REG66_OFFSET 264
#define IP_SHA3V5_S00_AXI_SLV_REG67_OFFSET 268
#define IP_SHA3V5_S00_AXI_SLV_REG68_OFFSET 272
#define IP_SHA3V5_S00_AXI_SLV_REG69_OFFSET 276
#define IP_SHA3V5_S00_AXI_SLV_REG70_OFFSET 280
#define IP_SHA3V5_S00_AXI_SLV_REG71_OFFSET 284
#define IP_SHA3V5_S00_AXI_SLV_REG72_OFFSET 288
#define IP_SHA3V5_S00_AXI_SLV_REG73_OFFSET 292
#define IP_SHA3V5_S00_AXI_SLV_REG74_OFFSET 296
#define IP_SHA3V5_S00_AXI_SLV_REG75_OFFSET 300
#define IP_SHA3V5_S00_AXI_SLV_REG76_OFFSET 304
#define IP_SHA3V5_S00_AXI_SLV_REG77_OFFSET 308
#define IP_SHA3V5_S00_AXI_SLV_REG78_OFFSET 312
#define IP_SHA3V5_S00_AXI_SLV_REG79_OFFSET 316
#define IP_SHA3V5_S00_AXI_SLV_REG80_OFFSET 320
#define IP_SHA3V5_S00_AXI_SLV_REG81_OFFSET 324
#define IP_SHA3V5_S00_AXI_SLV_REG82_OFFSET 328
#define IP_SHA3V5_S00_AXI_SLV_REG83_OFFSET 332
#define IP_SHA3V5_S00_AXI_SLV_REG84_OFFSET 336
#define IP_SHA3V5_S00_AXI_SLV_REG85_OFFSET 340
#define IP_SHA3V5_S00_AXI_SLV_REG86_OFFSET 344
#define IP_SHA3V5_S00_AXI_SLV_REG87_OFFSET 348
#define IP_SHA3V5_S00_AXI_SLV_REG88_OFFSET 352
#define IP_SHA3V5_S00_AXI_SLV_REG89_OFFSET 356
#define IP_SHA3V5_S00_AXI_SLV_REG90_OFFSET 360
#define IP_SHA3V5_S00_AXI_SLV_REG91_OFFSET 364
#define IP_SHA3V5_S00_AXI_SLV_REG92_OFFSET 368
#define IP_SHA3V5_S00_AXI_SLV_REG93_OFFSET 372
#define IP_SHA3V5_S00_AXI_SLV_REG94_OFFSET 376
#define IP_SHA3V5_S00_AXI_SLV_REG95_OFFSET 380
#define IP_SHA3V5_S00_AXI_SLV_REG96_OFFSET 384
#define IP_SHA3V5_S00_AXI_SLV_REG97_OFFSET 388
#define IP_SHA3V5_S00_AXI_SLV_REG98_OFFSET 392
#define IP_SHA3V5_S00_AXI_SLV_REG99_OFFSET 396
#define IP_SHA3V5_S00_AXI_SLV_REG100_OFFSET 400
#define IP_SHA3V5_S00_AXI_SLV_REG101_OFFSET 404
#define IP_SHA3V5_S00_AXI_SLV_REG102_OFFSET 408
#define IP_SHA3V5_S00_AXI_SLV_REG103_OFFSET 412
#define IP_SHA3V5_S00_AXI_SLV_REG104_OFFSET 416
#define IP_SHA3V5_S00_AXI_SLV_REG105_OFFSET 420
#define IP_SHA3V5_S00_AXI_SLV_REG106_OFFSET 424
#define IP_SHA3V5_S00_AXI_SLV_REG107_OFFSET 428
#define IP_SHA3V5_S00_AXI_SLV_REG108_OFFSET 432
#define IP_SHA3V5_S00_AXI_SLV_REG109_OFFSET 436
#define IP_SHA3V5_S00_AXI_SLV_REG110_OFFSET 440
#define IP_SHA3V5_S00_AXI_SLV_REG111_OFFSET 444
#define IP_SHA3V5_S00_AXI_SLV_REG112_OFFSET 448
#define IP_SHA3V5_S00_AXI_SLV_REG113_OFFSET 452
#define IP_SHA3V5_S00_AXI_SLV_REG114_OFFSET 456
#define IP_SHA3V5_S00_AXI_SLV_REG115_OFFSET 460
#define IP_SHA3V5_S00_AXI_SLV_REG116_OFFSET 464
#define IP_SHA3V5_S00_AXI_SLV_REG117_OFFSET 468
#define IP_SHA3V5_S00_AXI_SLV_REG118_OFFSET 472
#define IP_SHA3V5_S00_AXI_SLV_REG119_OFFSET 476
#define IP_SHA3V5_S00_AXI_SLV_REG120_OFFSET 480
#define IP_SHA3V5_S00_AXI_SLV_REG121_OFFSET 484
#define IP_SHA3V5_S00_AXI_SLV_REG122_OFFSET 488
#define IP_SHA3V5_S00_AXI_SLV_REG123_OFFSET 492
#define IP_SHA3V5_S00_AXI_SLV_REG124_OFFSET 496
#define IP_SHA3V5_S00_AXI_SLV_REG125_OFFSET 500
#define IP_SHA3V5_S00_AXI_SLV_REG126_OFFSET 504
#define IP_SHA3V5_S00_AXI_SLV_REG127_OFFSET 508
#define IP_SHA3V5_S00_AXI_SLV_REG128_OFFSET 512
#define IP_SHA3V5_S00_AXI_SLV_REG129_OFFSET 516
#define IP_SHA3V5_S00_AXI_SLV_REG130_OFFSET 520
#define IP_SHA3V5_S00_AXI_SLV_REG131_OFFSET 524
#define IP_SHA3V5_S00_AXI_SLV_REG132_OFFSET 528
#define IP_SHA3V5_S00_AXI_SLV_REG133_OFFSET 532
#define IP_SHA3V5_S00_AXI_SLV_REG134_OFFSET 536
#define IP_SHA3V5_S00_AXI_SLV_REG135_OFFSET 540
#define IP_SHA3V5_S00_AXI_SLV_REG136_OFFSET 544
#define IP_SHA3V5_S00_AXI_SLV_REG137_OFFSET 548
#define IP_SHA3V5_S00_AXI_SLV_REG138_OFFSET 552
#define IP_SHA3V5_S00_AXI_SLV_REG139_OFFSET 556
#define IP_SHA3V5_S00_AXI_SLV_REG140_OFFSET 560
#define IP_SHA3V5_S00_AXI_SLV_REG141_OFFSET 564
#define IP_SHA3V5_S00_AXI_SLV_REG142_OFFSET 568
#define IP_SHA3V5_S00_AXI_SLV_REG143_OFFSET 572
#define IP_SHA3V5_S00_AXI_SLV_REG144_OFFSET 576
#define IP_SHA3V5_S00_AXI_SLV_REG145_OFFSET 580
#define IP_SHA3V5_S00_AXI_SLV_REG146_OFFSET 584
#define IP_SHA3V5_S00_AXI_SLV_REG147_OFFSET 588
#define IP_SHA3V5_S00_AXI_SLV_REG148_OFFSET 592
#define IP_SHA3V5_S00_AXI_SLV_REG149_OFFSET 596
#define IP_SHA3V5_S00_AXI_SLV_REG150_OFFSET 600
#define IP_SHA3V5_S00_AXI_SLV_REG151_OFFSET 604
#define IP_SHA3V5_S00_AXI_SLV_REG152_OFFSET 608
#define IP_SHA3V5_S00_AXI_SLV_REG153_OFFSET 612
#define IP_SHA3V5_S00_AXI_SLV_REG154_OFFSET 616
#define IP_SHA3V5_S00_AXI_SLV_REG155_OFFSET 620
#define IP_SHA3V5_S00_AXI_SLV_REG156_OFFSET 624
#define IP_SHA3V5_S00_AXI_SLV_REG157_OFFSET 628
#define IP_SHA3V5_S00_AXI_SLV_REG158_OFFSET 632
#define IP_SHA3V5_S00_AXI_SLV_REG159_OFFSET 636
#define IP_SHA3V5_S00_AXI_SLV_REG160_OFFSET 640
#define IP_SHA3V5_S00_AXI_SLV_REG161_OFFSET 644
#define IP_SHA3V5_S00_AXI_SLV_REG162_OFFSET 648
#define IP_SHA3V5_S00_AXI_SLV_REG163_OFFSET 652
#define IP_SHA3V5_S00_AXI_SLV_REG164_OFFSET 656
#define IP_SHA3V5_S00_AXI_SLV_REG165_OFFSET 660
#define IP_SHA3V5_S00_AXI_SLV_REG166_OFFSET 664
#define IP_SHA3V5_S00_AXI_SLV_REG167_OFFSET 668
#define IP_SHA3V5_S00_AXI_SLV_REG168_OFFSET 672
#define IP_SHA3V5_S00_AXI_SLV_REG169_OFFSET 676
#define IP_SHA3V5_S00_AXI_SLV_REG170_OFFSET 680
#define IP_SHA3V5_S00_AXI_SLV_REG171_OFFSET 684
#define IP_SHA3V5_S00_AXI_SLV_REG172_OFFSET 688
#define IP_SHA3V5_S00_AXI_SLV_REG173_OFFSET 692
#define IP_SHA3V5_S00_AXI_SLV_REG174_OFFSET 696
#define IP_SHA3V5_S00_AXI_SLV_REG175_OFFSET 700
#define IP_SHA3V5_S00_AXI_SLV_REG176_OFFSET 704
#define IP_SHA3V5_S00_AXI_SLV_REG177_OFFSET 708
#define IP_SHA3V5_S00_AXI_SLV_REG178_OFFSET 712
#define IP_SHA3V5_S00_AXI_SLV_REG179_OFFSET 716
#define IP_SHA3V5_S00_AXI_SLV_REG180_OFFSET 720
#define IP_SHA3V5_S00_AXI_SLV_REG181_OFFSET 724
#define IP_SHA3V5_S00_AXI_SLV_REG182_OFFSET 728
#define IP_SHA3V5_S00_AXI_SLV_REG183_OFFSET 732
#define IP_SHA3V5_S00_AXI_SLV_REG184_OFFSET 736
#define IP_SHA3V5_S00_AXI_SLV_REG185_OFFSET 740
#define IP_SHA3V5_S00_AXI_SLV_REG186_OFFSET 744
#define IP_SHA3V5_S00_AXI_SLV_REG187_OFFSET 748
#define IP_SHA3V5_S00_AXI_SLV_REG188_OFFSET 752
#define IP_SHA3V5_S00_AXI_SLV_REG189_OFFSET 756
#define IP_SHA3V5_S00_AXI_SLV_REG190_OFFSET 760
#define IP_SHA3V5_S00_AXI_SLV_REG191_OFFSET 764
#define IP_SHA3V5_S00_AXI_SLV_REG192_OFFSET 768
#define IP_SHA3V5_S00_AXI_SLV_REG193_OFFSET 772
#define IP_SHA3V5_S00_AXI_SLV_REG194_OFFSET 776
#define IP_SHA3V5_S00_AXI_SLV_REG195_OFFSET 780
#define IP_SHA3V5_S00_AXI_SLV_REG196_OFFSET 784
#define IP_SHA3V5_S00_AXI_SLV_REG197_OFFSET 788
#define IP_SHA3V5_S00_AXI_SLV_REG198_OFFSET 792
#define IP_SHA3V5_S00_AXI_SLV_REG199_OFFSET 796
#define IP_SHA3V5_S00_AXI_SLV_REG200_OFFSET 800
#define IP_SHA3V5_S00_AXI_SLV_REG201_OFFSET 804
#define IP_SHA3V5_S00_AXI_SLV_REG202_OFFSET 808
#define IP_SHA3V5_S00_AXI_SLV_REG203_OFFSET 812
#define IP_SHA3V5_S00_AXI_SLV_REG204_OFFSET 816
#define IP_SHA3V5_S00_AXI_SLV_REG205_OFFSET 820
#define IP_SHA3V5_S00_AXI_SLV_REG206_OFFSET 824
#define IP_SHA3V5_S00_AXI_SLV_REG207_OFFSET 828
#define IP_SHA3V5_S00_AXI_SLV_REG208_OFFSET 832
#define IP_SHA3V5_S00_AXI_SLV_REG209_OFFSET 836
#define IP_SHA3V5_S00_AXI_SLV_REG210_OFFSET 840
#define IP_SHA3V5_S00_AXI_SLV_REG211_OFFSET 844
#define IP_SHA3V5_S00_AXI_SLV_REG212_OFFSET 848
#define IP_SHA3V5_S00_AXI_SLV_REG213_OFFSET 852
#define IP_SHA3V5_S00_AXI_SLV_REG214_OFFSET 856
#define IP_SHA3V5_S00_AXI_SLV_REG215_OFFSET 860
#define IP_SHA3V5_S00_AXI_SLV_REG216_OFFSET 864
#define IP_SHA3V5_S00_AXI_SLV_REG217_OFFSET 868
#define IP_SHA3V5_S00_AXI_SLV_REG218_OFFSET 872
#define IP_SHA3V5_S00_AXI_SLV_REG219_OFFSET 876
#define IP_SHA3V5_S00_AXI_SLV_REG220_OFFSET 880
#define IP_SHA3V5_S00_AXI_SLV_REG221_OFFSET 884
#define IP_SHA3V5_S00_AXI_SLV_REG222_OFFSET 888
#define IP_SHA3V5_S00_AXI_SLV_REG223_OFFSET 892
#define IP_SHA3V5_S00_AXI_SLV_REG224_OFFSET 896
#define IP_SHA3V5_S00_AXI_SLV_REG225_OFFSET 900
#define IP_SHA3V5_S00_AXI_SLV_REG226_OFFSET 904
#define IP_SHA3V5_S00_AXI_SLV_REG227_OFFSET 908
#define IP_SHA3V5_S00_AXI_SLV_REG228_OFFSET 912
#define IP_SHA3V5_S00_AXI_SLV_REG229_OFFSET 916
#define IP_SHA3V5_S00_AXI_SLV_REG230_OFFSET 920
#define IP_SHA3V5_S00_AXI_SLV_REG231_OFFSET 924
#define IP_SHA3V5_S00_AXI_SLV_REG232_OFFSET 928
#define IP_SHA3V5_S00_AXI_SLV_REG233_OFFSET 932
#define IP_SHA3V5_S00_AXI_SLV_REG234_OFFSET 936
#define IP_SHA3V5_S00_AXI_SLV_REG235_OFFSET 940
#define IP_SHA3V5_S00_AXI_SLV_REG236_OFFSET 944
#define IP_SHA3V5_S00_AXI_SLV_REG237_OFFSET 948
#define IP_SHA3V5_S00_AXI_SLV_REG238_OFFSET 952
#define IP_SHA3V5_S00_AXI_SLV_REG239_OFFSET 956
#define IP_SHA3V5_S00_AXI_SLV_REG240_OFFSET 960
#define IP_SHA3V5_S00_AXI_SLV_REG241_OFFSET 964
#define IP_SHA3V5_S00_AXI_SLV_REG242_OFFSET 968
#define IP_SHA3V5_S00_AXI_SLV_REG243_OFFSET 972
#define IP_SHA3V5_S00_AXI_SLV_REG244_OFFSET 976
#define IP_SHA3V5_S00_AXI_SLV_REG245_OFFSET 980
#define IP_SHA3V5_S00_AXI_SLV_REG246_OFFSET 984
#define IP_SHA3V5_S00_AXI_SLV_REG247_OFFSET 988
#define IP_SHA3V5_S00_AXI_SLV_REG248_OFFSET 992
#define IP_SHA3V5_S00_AXI_SLV_REG249_OFFSET 996
#define IP_SHA3V5_S00_AXI_SLV_REG250_OFFSET 1000
#define IP_SHA3V5_S00_AXI_SLV_REG251_OFFSET 1004
#define IP_SHA3V5_S00_AXI_SLV_REG252_OFFSET 1008
#define IP_SHA3V5_S00_AXI_SLV_REG253_OFFSET 1012
#define IP_SHA3V5_S00_AXI_SLV_REG254_OFFSET 1016
#define IP_SHA3V5_S00_AXI_SLV_REG255_OFFSET 1020
#define IP_SHA3V5_S00_AXI_SLV_REG256_OFFSET 1024
#define IP_SHA3V5_S00_AXI_SLV_REG257_OFFSET 1028
#define IP_SHA3V5_S00_AXI_SLV_REG258_OFFSET 1032
#define IP_SHA3V5_S00_AXI_SLV_REG259_OFFSET 1036
#define IP_SHA3V5_S00_AXI_SLV_REG260_OFFSET 1040
#define IP_SHA3V5_S00_AXI_SLV_REG261_OFFSET 1044
#define IP_SHA3V5_S00_AXI_SLV_REG262_OFFSET 1048
#define IP_SHA3V5_S00_AXI_SLV_REG263_OFFSET 1052
#define IP_SHA3V5_S00_AXI_SLV_REG264_OFFSET 1056
#define IP_SHA3V5_S00_AXI_SLV_REG265_OFFSET 1060
#define IP_SHA3V5_S00_AXI_SLV_REG266_OFFSET 1064
#define IP_SHA3V5_S00_AXI_SLV_REG267_OFFSET 1068
#define IP_SHA3V5_S00_AXI_SLV_REG268_OFFSET 1072
#define IP_SHA3V5_S00_AXI_SLV_REG269_OFFSET 1076
#define IP_SHA3V5_S00_AXI_SLV_REG270_OFFSET 1080
#define IP_SHA3V5_S00_AXI_SLV_REG271_OFFSET 1084
#define IP_SHA3V5_S00_AXI_SLV_REG272_OFFSET 1088
#define IP_SHA3V5_S00_AXI_SLV_REG273_OFFSET 1092
#define IP_SHA3V5_S00_AXI_SLV_REG274_OFFSET 1096
#define IP_SHA3V5_S00_AXI_SLV_REG275_OFFSET 1100
#define IP_SHA3V5_S00_AXI_SLV_REG276_OFFSET 1104
#define IP_SHA3V5_S00_AXI_SLV_REG277_OFFSET 1108
#define IP_SHA3V5_S00_AXI_SLV_REG278_OFFSET 1112
#define IP_SHA3V5_S00_AXI_SLV_REG279_OFFSET 1116
#define IP_SHA3V5_S00_AXI_SLV_REG280_OFFSET 1120
#define IP_SHA3V5_S00_AXI_SLV_REG281_OFFSET 1124
#define IP_SHA3V5_S00_AXI_SLV_REG282_OFFSET 1128
#define IP_SHA3V5_S00_AXI_SLV_REG283_OFFSET 1132
#define IP_SHA3V5_S00_AXI_SLV_REG284_OFFSET 1136
#define IP_SHA3V5_S00_AXI_SLV_REG285_OFFSET 1140
#define IP_SHA3V5_S00_AXI_SLV_REG286_OFFSET 1144
#define IP_SHA3V5_S00_AXI_SLV_REG287_OFFSET 1148
#define IP_SHA3V5_S00_AXI_SLV_REG288_OFFSET 1152
#define IP_SHA3V5_S00_AXI_SLV_REG289_OFFSET 1156
#define IP_SHA3V5_S00_AXI_SLV_REG290_OFFSET 1160
#define IP_SHA3V5_S00_AXI_SLV_REG291_OFFSET 1164
#define IP_SHA3V5_S00_AXI_SLV_REG292_OFFSET 1168
#define IP_SHA3V5_S00_AXI_SLV_REG293_OFFSET 1172
#define IP_SHA3V5_S00_AXI_SLV_REG294_OFFSET 1176
#define IP_SHA3V5_S00_AXI_SLV_REG295_OFFSET 1180
#define IP_SHA3V5_S00_AXI_SLV_REG296_OFFSET 1184
#define IP_SHA3V5_S00_AXI_SLV_REG297_OFFSET 1188
#define IP_SHA3V5_S00_AXI_SLV_REG298_OFFSET 1192
#define IP_SHA3V5_S00_AXI_SLV_REG299_OFFSET 1196
#define IP_SHA3V5_S00_AXI_SLV_REG300_OFFSET 1200
#define IP_SHA3V5_S00_AXI_SLV_REG301_OFFSET 1204
#define IP_SHA3V5_S00_AXI_SLV_REG302_OFFSET 1208
#define IP_SHA3V5_S00_AXI_SLV_REG303_OFFSET 1212
#define IP_SHA3V5_S00_AXI_SLV_REG304_OFFSET 1216
#define IP_SHA3V5_S00_AXI_SLV_REG305_OFFSET 1220
#define IP_SHA3V5_S00_AXI_SLV_REG306_OFFSET 1224
#define IP_SHA3V5_S00_AXI_SLV_REG307_OFFSET 1228
#define IP_SHA3V5_S00_AXI_SLV_REG308_OFFSET 1232
#define IP_SHA3V5_S00_AXI_SLV_REG309_OFFSET 1236
#define IP_SHA3V5_S00_AXI_SLV_REG310_OFFSET 1240
#define IP_SHA3V5_S00_AXI_SLV_REG311_OFFSET 1244
#define IP_SHA3V5_S00_AXI_SLV_REG312_OFFSET 1248
#define IP_SHA3V5_S00_AXI_SLV_REG313_OFFSET 1252
#define IP_SHA3V5_S00_AXI_SLV_REG314_OFFSET 1256
#define IP_SHA3V5_S00_AXI_SLV_REG315_OFFSET 1260
#define IP_SHA3V5_S00_AXI_SLV_REG316_OFFSET 1264
#define IP_SHA3V5_S00_AXI_SLV_REG317_OFFSET 1268
#define IP_SHA3V5_S00_AXI_SLV_REG318_OFFSET 1272
#define IP_SHA3V5_S00_AXI_SLV_REG319_OFFSET 1276
#define IP_SHA3V5_S00_AXI_SLV_REG320_OFFSET 1280
#define IP_SHA3V5_S00_AXI_SLV_REG321_OFFSET 1284
#define IP_SHA3V5_S00_AXI_SLV_REG322_OFFSET 1288
#define IP_SHA3V5_S00_AXI_SLV_REG323_OFFSET 1292
#define IP_SHA3V5_S00_AXI_SLV_REG324_OFFSET 1296
#define IP_SHA3V5_S00_AXI_SLV_REG325_OFFSET 1300
#define IP_SHA3V5_S00_AXI_SLV_REG326_OFFSET 1304
#define IP_SHA3V5_S00_AXI_SLV_REG327_OFFSET 1308
#define IP_SHA3V5_S00_AXI_SLV_REG328_OFFSET 1312
#define IP_SHA3V5_S00_AXI_SLV_REG329_OFFSET 1316
#define IP_SHA3V5_S00_AXI_SLV_REG330_OFFSET 1320
#define IP_SHA3V5_S00_AXI_SLV_REG331_OFFSET 1324
#define IP_SHA3V5_S00_AXI_SLV_REG332_OFFSET 1328
#define IP_SHA3V5_S00_AXI_SLV_REG333_OFFSET 1332
#define IP_SHA3V5_S00_AXI_SLV_REG334_OFFSET 1336
#define IP_SHA3V5_S00_AXI_SLV_REG335_OFFSET 1340
#define IP_SHA3V5_S00_AXI_SLV_REG336_OFFSET 1344
#define IP_SHA3V5_S00_AXI_SLV_REG337_OFFSET 1348
#define IP_SHA3V5_S00_AXI_SLV_REG338_OFFSET 1352
#define IP_SHA3V5_S00_AXI_SLV_REG339_OFFSET 1356
#define IP_SHA3V5_S00_AXI_SLV_REG340_OFFSET 1360
#define IP_SHA3V5_S00_AXI_SLV_REG341_OFFSET 1364
#define IP_SHA3V5_S00_AXI_SLV_REG342_OFFSET 1368
#define IP_SHA3V5_S00_AXI_SLV_REG343_OFFSET 1372
#define IP_SHA3V5_S00_AXI_SLV_REG344_OFFSET 1376
#define IP_SHA3V5_S00_AXI_SLV_REG345_OFFSET 1380
#define IP_SHA3V5_S00_AXI_SLV_REG346_OFFSET 1384
#define IP_SHA3V5_S00_AXI_SLV_REG347_OFFSET 1388
#define IP_SHA3V5_S00_AXI_SLV_REG348_OFFSET 1392
#define IP_SHA3V5_S00_AXI_SLV_REG349_OFFSET 1396


/**************************** Type Definitions *****************************/
/**
 *
 * Write a value to a IP_SHA3V5 register. A 32 bit write is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is written.
 *
 * @param   BaseAddress is the base address of the IP_SHA3V5device.
 * @param   RegOffset is the register offset from the base to write to.
 * @param   Data is the data written to the register.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void IP_SHA3V5_mWriteReg(u32 BaseAddress, unsigned RegOffset, u32 Data)
 *
 */
#define IP_SHA3V5_mWriteReg(BaseAddress, RegOffset, Data) \
  	Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))

/**
 *
 * Read a value from a IP_SHA3V5 register. A 32 bit read is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is read from the register. The most significant data
 * will be read as 0.
 *
 * @param   BaseAddress is the base address of the IP_SHA3V5 device.
 * @param   RegOffset is the register offset from the base to write to.
 *
 * @return  Data is the data from the register.
 *
 * @note
 * C-style signature:
 * 	u32 IP_SHA3V5_mReadReg(u32 BaseAddress, unsigned RegOffset)
 *
 */
#define IP_SHA3V5_mReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))

/************************** Function Prototypes ****************************/
/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the IP_SHA3V5 instance to be worked on.
 *
 * @return
 *
 *    - XST_SUCCESS   if all self-test code passed
 *    - XST_FAILURE   if any self-test code failed
 *
 * @note    Caching must be turned off for this function to work.
 * @note    Self test may fail if data memory and device are not on the same bus.
 *
 */
XStatus IP_SHA3V5_Reg_SelfTest(void * baseaddr_p);

#endif // IP_SHA3V5_H
