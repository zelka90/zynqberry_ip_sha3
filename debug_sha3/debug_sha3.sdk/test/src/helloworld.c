/******************************************************************************
*
* Copyright (C) 2009 - 2014 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/

/*
 * helloworld.c: simple test application
 *
 * This application configures UART 16550 to baud rate 9600.
 * PS7 UART (Zynq) is not initialized by this application, since
 * bootrom/bsp configures it to baud rate 115200
 *
 * ------------------------------------------------
 * | UART TYPE   BAUD RATE                        |
 * ------------------------------------------------
 *   uartns550   9600
 *   uartlite    Configurable only in HW design
 *   ps7_uart    115200 (configured by bootrom/bsp)
 */

#include <stdio.h>
#include "xil_printf.h"
#include "ip_sha3v5.h"

#include "xil_io.h"

#include "xparameters.h"
#include "xil_types.h"
#include <math.h>

int main()
{
	u32 BaseAddress = 0x43C00000;
	u32 a[36];
	uint64_t out;
	char * text="The quick brown fox jumps over the lazy dog";//43
	uint8_t A[144];
//	print("Hello World\n\r");
//	print("Start programm\n\r");
	for (int i=0; i<43; i++){
		A[i]=(uint8_t)text[i];
	}
	A[43]=0x60;
	for (int i =44; i<143; i++){
		A[i]=0;
	}
	A[143]=0x01;
	for(int i = 0; i<36; i++){
		a[i]=0;
		for (int j=0; j<4; j++){
			a[i] += (u32)A[i*4+j] << j*8;
		}
		IP_SHA3V5_mWriteReg(BaseAddress, 4*4+i*4, a[i]);
//		printf("%x ",IP_SHA3V5_mReadReg(BaseAddress, 4*4+i*4));
//		if(i==8 || i==16 || i==24 || i==34){
//			printf("\n");
//		}
	}


//	print("Start programm4\n");
	u32 t1, t2;
//	t1=IP_SHA3V5_mReadReg(BaseAddress, 48*4);
//	printf("\nreg48=%x\n",t1);
//	u32 t2=IP_SHA3V5_mReadReg(BaseAddress, 350*4);
//	printf("reg350=%x\n",t2);
	IP_SHA3V5_mWriteReg(BaseAddress, 2*4, 0x00000000);//start=0
//	u32 t = IP_SHA3V5_mReadReg(BaseAddress, 49*4);
//	printf("reg49=%x\n",t);
//	print("Start programm=1\n");
	IP_SHA3V5_mWriteReg(BaseAddress, 2*4, 0xFFFFFFFF);//start=1
//	t1=IP_SHA3V5_mReadReg(BaseAddress, 48*4);
//	printf("reg48=%x\n",t1);
//	t2=IP_SHA3V5_mReadReg(BaseAddress, 350*4);
//	printf("reg350=%x\n",t2);
//	for (int i=0;i<1000;i++){
//		t = IP_SHA3V3_mReadReg(BaseAddress, 49*4);
//			printf("reg49=%x\n",t);
//	}
	uint64_t countc=0;
	while (IP_SHA3V5_mReadReg(BaseAddress, 49*4)==0){
		countc++;
	}
	printf("countc=%llu\n",countc);
//	print("Start programm4\n\r");

//	for (int i=0; i<20; i++){
//		u32 p,o,z,u,y,m,data_in;
//		if(i<36){
//			data_in=a[i];
//		}else{
//			data_in=0;
//		}
//		p = IP_SHA3V3_mReadReg(BaseAddress, 50*4+i*4);
//		o = IP_SHA3V3_mReadReg(BaseAddress, 100*4+i*4);
//		z = IP_SHA3V3_mReadReg(BaseAddress, 150*4+i*4);
//		u = IP_SHA3V3_mReadReg(BaseAddress, 200*4+i*4);
//		y = IP_SHA3V3_mReadReg(BaseAddress, 250*4+i*4);
//		m = IP_SHA3V3_mReadReg(BaseAddress, 300*4+i*4);
//		printf("%x %x %x %x %x %x %x\n",data_in,p,o,z,u,y,m);
//	}
//
//	printf("\n");
//	for (int i=0; i<46; i++){
//		u32 p,o,z,u,y,m;
//		if(i%2 == 0 && i!=0){
//			printf("\n");
//		}
//		p = IP_SHA3V3_mReadReg(BaseAddress, 50*4+i*4);
//		o = IP_SHA3V3_mReadReg(BaseAddress, 100*4+i*4);
//		z = IP_SHA3V3_mReadReg(BaseAddress, 150*4+i*4);
//		u = IP_SHA3V3_mReadReg(BaseAddress, 200*4+i*4);
//		y = IP_SHA3V3_mReadReg(BaseAddress, 250*4+i*4);
//		m = IP_SHA3V3_mReadReg(BaseAddress, 300*4+i*4);
//		printf("%x %x %x %x %x %x\n",p,o,z,u,y,m);
//	}
//	u32 col=0,row=0;
//	for (int i=0; i<50; i++){
//			u32 p,o,z,u,y,m,data_in;
//			if(i<36){
//				data_in=a[i];
//			}else{
//				data_in=0;
//			}
//			if( i!=0 && i%2==0)
//			{
//				col++;
//			}
//			if(i==10 || i==20 ||i==30|| i==40){
//				row++;
//				col=0;
//			}
//			p = IP_SHA3V5_mReadReg(BaseAddress, 50*4+i*4);
//			o = IP_SHA3V5_mReadReg(BaseAddress, 100*4+i*4);
//			z= IP_SHA3V5_mReadReg(BaseAddress, 150*4+i*4);
//			u= IP_SHA3V5_mReadReg(BaseAddress, 200*4+i*4);
//			y= IP_SHA3V5_mReadReg(BaseAddress, 250*4+i*4);
//			m= IP_SHA3V5_mReadReg(BaseAddress, 300*4+i*4);
//			printf("%x %x %x %x %x (%d,%d) %x %x\n",data_in,p,o,z,u,row,col,y,m);
//		}
//	printf("\n");
	for(int i = 0 ;i<8; i++){
		printf("%x\n",IP_SHA3V5_mReadReg(BaseAddress, 40*4+ i*4));
	}
	t1=IP_SHA3V5_mReadReg(BaseAddress, 48*4);
	printf("reg48=%x\n",t1);
	t2=IP_SHA3V5_mReadReg(BaseAddress, 49*4);
	printf("reg49=%x\n",t2);
	IP_SHA3V5_mWriteReg(BaseAddress, 2*4, 0x00000000);//start=0
	print("Start programm=0\n");

	t2=IP_SHA3V5_mReadReg(BaseAddress, 49*4);
	printf("reg49=%x\n",t2);
	t1=IP_SHA3V5_mReadReg(BaseAddress, 48*4);
	printf("reg48=%x\n",t1);

	print("End programm\n\r");

    return 0;
}
