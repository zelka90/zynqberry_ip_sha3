
Q
Command: %s
53*	vivadotcl2 
place_design2default:defaultZ4-113h px� 
�
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2"
Implementation2default:default2
xc7z0102default:defaultZ17-347h px� 
�
0Got license for feature '%s' and/or device '%s'
310*common2"
Implementation2default:default2
xc7z0102default:defaultZ17-349h px� 
P
Running DRC with %s threads
24*drc2
82default:defaultZ23-27h px� 
V
DRC finished with %s
79*	vivadotcl2
0 Errors2default:defaultZ4-198h px� 
e
BPlease refer to the DRC report (report_drc) for more information.
80*	vivadotclZ4-199h px� 
p
,Running DRC as a precondition to command %s
22*	vivadotcl2 
place_design2default:defaultZ4-22h px� 
P
Running DRC with %s threads
24*drc2
82default:defaultZ23-27h px� 
V
DRC finished with %s
79*	vivadotcl2
0 Errors2default:defaultZ4-198h px� 
e
BPlease refer to the DRC report (report_drc) for more information.
80*	vivadotclZ4-199h px� 
U

Starting %s Task
103*constraints2
Placer2default:defaultZ18-103h px� 
}
BMultithreading enabled for place_design using a maximum of %s CPUs12*	placeflow2
82default:defaultZ30-611h px� 
v

Phase %s%s
101*constraints2
1 2default:default2)
Placer Initialization2default:defaultZ18-101h px� 
�

Phase %s%s
101*constraints2
1.1 2default:default29
%Placer Initialization Netlist Sorting2default:defaultZ18-101h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.022default:default2
00:00:00.012default:default2
2254.5862default:default2
0.0002default:default2
1322default:default2
24862default:defaultZ17-722h px� 
Z
EPhase 1.1 Placer Initialization Netlist Sorting | Checksum: fef45be6
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:00.02 ; elapsed = 00:00:00.04 . Memory (MB): peak = 2254.586 ; gain = 0.000 ; free physical = 132 ; free virtual = 24862default:defaulth px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.022default:default2
00:00:00.012default:default2
2254.5862default:default2
0.0002default:default2
1322default:default2
24862default:defaultZ17-722h px� 
�

Phase %s%s
101*constraints2
1.2 2default:default2F
2IO Placement/ Clock Placement/ Build Placer Device2default:defaultZ18-101h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
g
RPhase 1.2 IO Placement/ Clock Placement/ Build Placer Device | Checksum: 43e94492
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:03 ; elapsed = 00:00:02 . Memory (MB): peak = 2254.586 ; gain = 0.000 ; free physical = 117 ; free virtual = 24772default:defaulth px� 
}

Phase %s%s
101*constraints2
1.3 2default:default2.
Build Placer Netlist Model2default:defaultZ18-101h px� 
O
:Phase 1.3 Build Placer Netlist Model | Checksum: e48f3661
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:08 ; elapsed = 00:00:04 . Memory (MB): peak = 2254.586 ; gain = 0.000 ; free physical = 133 ; free virtual = 24492default:defaulth px� 
z

Phase %s%s
101*constraints2
1.4 2default:default2+
Constrain Clocks/Macros2default:defaultZ18-101h px� 
L
7Phase 1.4 Constrain Clocks/Macros | Checksum: e48f3661
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:08 ; elapsed = 00:00:04 . Memory (MB): peak = 2254.586 ; gain = 0.000 ; free physical = 133 ; free virtual = 24492default:defaulth px� 
H
3Phase 1 Placer Initialization | Checksum: e48f3661
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:08 ; elapsed = 00:00:04 . Memory (MB): peak = 2254.586 ; gain = 0.000 ; free physical = 133 ; free virtual = 24502default:defaulth px� 
q

Phase %s%s
101*constraints2
2 2default:default2$
Global Placement2default:defaultZ18-101h px� 
p

Phase %s%s
101*constraints2
2.1 2default:default2!
Floorplanning2default:defaultZ18-101h px� 
C
.Phase 2.1 Floorplanning | Checksum: 1717c05a5
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:09 ; elapsed = 00:00:04 . Memory (MB): peak = 2285.254 ; gain = 30.668 ; free physical = 116 ; free virtual = 24362default:defaulth px� 


Phase %s%s
101*constraints2
2.2 2default:default20
Physical Synthesis In Placer2default:defaultZ18-101h px� 
�
=Pass %s. Identified %s candidate %s for fanout optimization.
76*physynth2
12default:default2
22default:default2
nets2default:defaultZ32-76h px� 
�
'Processed net %s. Replicated %s times.
81*physynth2�
;diagramm_i/ip_sha3v5_0/U0/ip_sha3v5_v1_0_S00_AXI_inst/start;diagramm_i/ip_sha3v5_0/U0/ip_sha3v5_v1_0_S00_AXI_inst/start2default:default2
72default:default8Z32-81h px� 
�
$Optimized %s %s. Created %s new %s.
216*physynth2
12default:default2
net2default:default2
72default:default2
	instances2default:defaultZ32-232h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
12default:default2
net or cell2default:default2
72default:default2
cells2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.042default:default2
00:00:00.042default:default2
2293.2582default:default2
0.0002default:default2
1102default:default2
24222default:defaultZ17-722h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.012default:default2
00:00:00.012default:default2
2293.2582default:default2
0.0002default:default2
1102default:default2
24222default:defaultZ17-722h px� 
�
;Identified %s candidate %s for critical-cell optimization.
46*physynth2
12default:default2
net2default:defaultZ32-46h px� 
�
$Optimized %s %s. Created %s new %s.
216*physynth2
02default:default2
net2default:default2
02default:default2
instance2default:defaultZ32-232h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.012default:default2
00:00:00.022default:default2
2293.2582default:default2
0.0002default:default2
1102default:default2
24232default:defaultZ17-722h px� 
B
-
Summary of Physical Synthesis Optimizations
*commonh px� 
B
-============================================
*commonh px� 


*commonh px� 


*commonh px� 
�
~-----------------------------------------------------------------------------------------------------------------------------
*commonh px� 
�
�|  Optimization       |  Added Cells  |  Removed Cells  |  Optimized Cells/Nets  |  Dont Touch  |  Iterations  |  Elapsed   |
-----------------------------------------------------------------------------------------------------------------------------
*commonh px� 
�
�|  Very High Fanout   |            7  |              0  |                     1  |           0  |           1  |  00:00:00  |
|  Critical Cell      |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Total              |            7  |              0  |                     1  |           0  |           2  |  00:00:00  |
-----------------------------------------------------------------------------------------------------------------------------
*commonh px� 


*commonh px� 


*commonh px� 
Q
<Phase 2.2 Physical Synthesis In Placer | Checksum: dbfe16c2
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:32 ; elapsed = 00:00:12 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 110 ; free virtual = 24232default:defaulth px� 
C
.Phase 2 Global Placement | Checksum: e6aa602e
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:33 ; elapsed = 00:00:12 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 115 ; free virtual = 24292default:defaulth px� 
q

Phase %s%s
101*constraints2
3 2default:default2$
Detail Placement2default:defaultZ18-101h px� 
}

Phase %s%s
101*constraints2
3.1 2default:default2.
Commit Multi Column Macros2default:defaultZ18-101h px� 
O
:Phase 3.1 Commit Multi Column Macros | Checksum: e6aa602e
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:34 ; elapsed = 00:00:12 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 116 ; free virtual = 24292default:defaulth px� 


Phase %s%s
101*constraints2
3.2 2default:default20
Commit Most Macros & LUTRAMs2default:defaultZ18-101h px� 
R
=Phase 3.2 Commit Most Macros & LUTRAMs | Checksum: 13cd8c396
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:35 ; elapsed = 00:00:13 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 114 ; free virtual = 24282default:defaulth px� 
y

Phase %s%s
101*constraints2
3.3 2default:default2*
Area Swap Optimization2default:defaultZ18-101h px� 
L
7Phase 3.3 Area Swap Optimization | Checksum: 1dff4a928
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:36 ; elapsed = 00:00:13 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 114 ; free virtual = 24292default:defaulth px� 
�

Phase %s%s
101*constraints2
3.4 2default:default22
Pipeline Register Optimization2default:defaultZ18-101h px� 
T
?Phase 3.4 Pipeline Register Optimization | Checksum: 1dff4a928
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:36 ; elapsed = 00:00:13 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 114 ; free virtual = 24292default:defaulth px� 
x

Phase %s%s
101*constraints2
3.5 2default:default2)
Timing Path Optimizer2default:defaultZ18-101h px� 
K
6Phase 3.5 Timing Path Optimizer | Checksum: 1dff4a928
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:36 ; elapsed = 00:00:13 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 114 ; free virtual = 24292default:defaulth px� 
t

Phase %s%s
101*constraints2
3.6 2default:default2%
Fast Optimization2default:defaultZ18-101h px� 
G
2Phase 3.6 Fast Optimization | Checksum: 189540a6d
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:36 ; elapsed = 00:00:14 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 111 ; free virtual = 24272default:defaulth px� 


Phase %s%s
101*constraints2
3.7 2default:default20
Small Shape Detail Placement2default:defaultZ18-101h px� 
Q
<Phase 3.7 Small Shape Detail Placement | Checksum: be2a3a0b
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:46 ; elapsed = 00:00:22 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 122 ; free virtual = 24052default:defaulth px� 
u

Phase %s%s
101*constraints2
3.8 2default:default2&
Re-assign LUT pins2default:defaultZ18-101h px� 
H
3Phase 3.8 Re-assign LUT pins | Checksum: 17075897b
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:47 ; elapsed = 00:00:22 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 123 ; free virtual = 24072default:defaulth px� 
�

Phase %s%s
101*constraints2
3.9 2default:default22
Pipeline Register Optimization2default:defaultZ18-101h px� 
T
?Phase 3.9 Pipeline Register Optimization | Checksum: 17075897b
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:47 ; elapsed = 00:00:22 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 123 ; free virtual = 24072default:defaulth px� 
u

Phase %s%s
101*constraints2
3.10 2default:default2%
Fast Optimization2default:defaultZ18-101h px� 
H
3Phase 3.10 Fast Optimization | Checksum: 1403f7c78
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:57 ; elapsed = 00:00:26 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 113 ; free virtual = 24042default:defaulth px� 
D
/Phase 3 Detail Placement | Checksum: 1403f7c78
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:57 ; elapsed = 00:00:26 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 113 ; free virtual = 24042default:defaulth px� 
�

Phase %s%s
101*constraints2
4 2default:default2<
(Post Placement Optimization and Clean-Up2default:defaultZ18-101h px� 
{

Phase %s%s
101*constraints2
4.1 2default:default2,
Post Commit Optimization2default:defaultZ18-101h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
�

Phase %s%s
101*constraints2
4.1.1 2default:default2/
Post Placement Optimization2default:defaultZ18-101h px� 
V
APost Placement Optimization Initialization | Checksum: 1373d5747
*commonh px� 
u

Phase %s%s
101*constraints2
4.1.1.1 2default:default2"
BUFG Insertion2default:defaultZ18-101h px� 
�
PProcessed net %s, BUFG insertion was skipped due to placement/routing conflicts.32*	placeflow2M
9diagramm_i/ip_sha3v5_0/U0/ip_sha3v5_v1_0_S00_AXI_inst/sel2default:defaultZ46-33h px� 
�
�BUFG insertion identified %s candidate nets, %s success, %s skipped for placement/routing, %s skipped for timing, %s skipped for netlist change reason.30*	placeflow2
12default:default2
02default:default2
12default:default2
02default:default2
02default:defaultZ46-31h px� 
H
3Phase 4.1.1.1 BUFG Insertion | Checksum: 1373d5747
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:01:04 ; elapsed = 00:00:28 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 111 ; free virtual = 24082default:defaulth px� 
�
hPost Placement Timing Summary WNS=%s. For the most accurate timing information please run report_timing.610*place2
-1.2802default:defaultZ30-746h px� 
S
>Phase 4.1.1 Post Placement Optimization | Checksum: 1c3c0af7f
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:01:39 ; elapsed = 00:01:00 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 116 ; free virtual = 24072default:defaulth px� 
N
9Phase 4.1 Post Commit Optimization | Checksum: 1c3c0af7f
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:01:39 ; elapsed = 00:01:00 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 116 ; free virtual = 24072default:defaulth px� 
y

Phase %s%s
101*constraints2
4.2 2default:default2*
Post Placement Cleanup2default:defaultZ18-101h px� 
L
7Phase 4.2 Post Placement Cleanup | Checksum: 1c3c0af7f
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:01:39 ; elapsed = 00:01:00 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 115 ; free virtual = 24062default:defaulth px� 
s

Phase %s%s
101*constraints2
4.3 2default:default2$
Placer Reporting2default:defaultZ18-101h px� 
F
1Phase 4.3 Placer Reporting | Checksum: 1c3c0af7f
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:01:39 ; elapsed = 00:01:00 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 115 ; free virtual = 24062default:defaulth px� 
z

Phase %s%s
101*constraints2
4.4 2default:default2+
Final Placement Cleanup2default:defaultZ18-101h px� 
M
8Phase 4.4 Final Placement Cleanup | Checksum: 188a9d6ef
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:01:40 ; elapsed = 00:01:01 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 115 ; free virtual = 24062default:defaulth px� 
\
GPhase 4 Post Placement Optimization and Clean-Up | Checksum: 188a9d6ef
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:01:40 ; elapsed = 00:01:01 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 115 ; free virtual = 24062default:defaulth px� 
=
(Ending Placer Task | Checksum: e1bc433e
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:01:40 ; elapsed = 00:01:01 . Memory (MB): peak = 2293.258 ; gain = 38.672 ; free physical = 125 ; free virtual = 24172default:defaulth px� 
Z
Releasing license: %s
83*common2"
Implementation2default:defaultZ17-83h px� 
�
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
562default:default2
02default:default2
02default:default2
02default:defaultZ4-41h px� 
^
%s completed successfully
29*	vivadotcl2 
place_design2default:defaultZ4-42h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2"
place_design: 2default:default2
00:01:432default:default2
00:01:032default:default2
2293.2582default:default2
38.6722default:default2
1252default:default2
24172default:defaultZ17-722h px� 
H
&Writing timing data to binary archive.266*timingZ38-480h px� 
D
Writing placer database...
1603*designutilsZ20-1893h px� 
=
Writing XDEF routing.
211*designutilsZ20-211h px� 
J
#Writing XDEF routing logical nets.
209*designutilsZ20-209h px� 
J
#Writing XDEF routing special nets.
210*designutilsZ20-210h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2)
Write XDEF Complete: 2default:default2
00:00:032default:default2
00:00:00.892default:default2
2293.2582default:default2
0.0002default:default2
1182default:default2
24102default:defaultZ17-722h px� 
�
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2�
l/home/anzhelika/projekt/diplom/debug_progectv5/debug_sha3/debug_sha3.runs/impl_1/diagramm_wrapper_placed.dcp2default:defaultZ17-1381h px� 
k
%s4*runtcl2O
;Executing : report_io -file diagramm_wrapper_io_placed.rpt
2default:defaulth px� 
�
�report_io: Time (s): cpu = 00:00:00.08 ; elapsed = 00:00:00.21 . Memory (MB): peak = 2293.258 ; gain = 0.000 ; free physical = 111 ; free virtual = 2409
*commonh px� 
�
%s4*runtcl2�
xExecuting : report_utilization -file diagramm_wrapper_utilization_placed.rpt -pb diagramm_wrapper_utilization_placed.pb
2default:defaulth px� 
�
�report_utilization: Time (s): cpu = 00:00:00.20 ; elapsed = 00:00:00.26 . Memory (MB): peak = 2293.258 ; gain = 0.000 ; free physical = 114 ; free virtual = 2414
*commonh px� 
�
%s4*runtcl2l
XExecuting : report_control_sets -verbose -file diagramm_wrapper_control_sets_placed.rpt
2default:defaulth px� 
�
�report_control_sets: Time (s): cpu = 00:00:00.22 ; elapsed = 00:00:00.30 . Memory (MB): peak = 2293.258 ; gain = 0.000 ; free physical = 143 ; free virtual = 2411
*commonh px� 


End Record