#include<lpc21xx.h>
void delay(unsigned int count){
unsigned int i=0,j=0;
for(i=0;i<count;i++){
   for(j=0;j<10000;j++);
   }
}

int main()
{
PINSEL0=0;
IODIR0=0x003FFFFF;

while(1)
{
if((IOPIN0 & (1<<22))==0){
IOSET0|=(1<<19);
IOCLR0|=(1<<7);
IOCLR0|=(1<<8);
IOCLR0|=(1<<9);
IOCLR0|=(1<<10);
IOCLR0|=(1<<11);
IOCLR0|=(1<<12);
IOCLR0|=(1<<13);
	
//9
IOSET0|=(1<<18);
IOCLR0|=(1<<16);

IOSET0|=(1<<0);
IOSET0|=(1<<1);
IOCLR0|=(1<<2);
IOSET0|=(1<<3);
IOSET0|=(1<<4);
IOSET0|=(1<<5);
IOSET0|=(1<<6);

delay(300);

//8
IOSET0|=(1<<0);
IOSET0|=(1<<1);
IOSET0|=(1<<2);
IOSET0|=(1<<3);
IOSET0|=(1<<4);
IOSET0|=(1<<5);
IOSET0|=(1<<6);

delay(300);

//7
IOSET0|=(1<<0);
IOSET0|=(1<<1);
IOCLR0|=(1<<2);
IOCLR0|=(1<<3);
IOSET0|=(1<<4);
IOSET0|=(1<<5);
IOCLR0|=(1<<6);

delay(300);

//6
IOSET0|=(1<<0);
IOSET0|=(1<<1);
IOSET0|=(1<<2);
IOSET0|=(1<<3);
IOSET0|=(1<<4);
IOCLR0|=(1<<5);
IOSET0|=(1<<6);

delay(300);

//5
IOSET0|=(1<<0);
IOSET0|=(1<<1);
IOCLR0|=(1<<2);
IOSET0|=(1<<3);
IOSET0|=(1<<4);
IOCLR0|=(1<<5);
IOSET0|=(1<<6);

delay(200);
IOCLR0|=(1<<18);
delay(100);

//4
IOSET0|=(1<<18);
IOSET0|=(1<<14);

IOCLR0|=(1<<0);
IOSET0|=(1<<1);
IOCLR0|=(1<<2);
IOCLR0|=(1<<3);
IOSET0|=(1<<4);
IOSET0|=(1<<5);
IOSET0|=(1<<6);

delay(200);
IOCLR0|=(1<<18);
IOCLR0|=(1<<14);
delay(100);

//3
IOSET0|=(1<<18);
IOSET0|=(1<<14);

IOSET0|=(1<<0);
IOCLR0|=(1<<1);
IOCLR0|=(1<<2);
IOSET0|=(1<<3);
IOSET0|=(1<<4);
IOSET0|=(1<<5);
IOSET0|=(1<<6);

delay(200);
IOCLR0|=(1<<18);
IOCLR0|=(1<<14);
delay(100);

//2
IOSET0|=(1<<18);
IOSET0|=(1<<14);

IOSET0|=(1<<0);
IOCLR0|=(1<<1);
IOSET0|=(1<<2);
IOSET0|=(1<<3);
IOCLR0|=(1<<4);
IOSET0|=(1<<5);
IOSET0|=(1<<6);

delay(200);
IOCLR0|=(1<<18);
IOCLR0|=(1<<14);
delay(100);

//1
IOSET0|=(1<<18);
IOSET0|=(1<<14);

IOCLR0|=(1<<0);
IOCLR0|=(1<<1);
IOCLR0|=(1<<2);
IOCLR0|=(1<<3);
IOSET0|=(1<<4);
IOSET0|=(1<<5);
IOCLR0|=(1<<6);

delay(200);
IOCLR0|=(1<<18);
IOCLR0|=(1<<14);
delay(100);

//0
IOSET0|=(1<<18);
IOSET0|=(1<<14);

IOSET0|=(1<<0);
IOSET0|=(1<<1);
IOSET0|=(1<<2);
IOSET0|=(1<<3);
IOSET0|=(1<<4);
IOSET0|=(1<<5);
IOCLR0|=(1<<6);

delay(200);
IOCLR0|=(1<<18);
IOCLR0|=(1<<14);
delay(100);

//YELLOW A
IOSET0|=(1<<17);

IOCLR0|=(1<<0);
IOCLR0|=(1<<1);
IOCLR0|=(1<<2);
IOCLR0|=(1<<3);
IOCLR0|=(1<<4);
IOCLR0|=(1<<5);
IOCLR0|=(1<<6);

delay(500);
IOCLR0|=(1<<17);

//segment A
IOSET0|=(1<<16);
IOCLR0|=(1<<0);
IOCLR0|=(1<<1);
IOCLR0|=(1<<2);
IOCLR0|=(1<<3);
IOCLR0|=(1<<4);
IOCLR0|=(1<<5);
IOCLR0|=(1<<6);

//segment b
//9
IOSET0|=(1<<21);
IOCLR0|=(1<<19);

IOSET0|=(1<<7);
IOSET0|=(1<<8);
IOCLR0|=(1<<9);
IOSET0|=(1<<10);
IOSET0|=(1<<11);
IOSET0|=(1<<12);
IOSET0|=(1<<13);

delay(300);

//8

IOSET0|=(1<<7);
IOSET0|=(1<<8);
IOSET0|=(1<<9);
IOSET0|=(1<<10);
IOSET0|=(1<<11);
IOSET0|=(1<<12);
IOSET0|=(1<<13);

delay(300);

//7
IOSET0|=(1<<7);
IOSET0|=(1<<8);
IOCLR0|=(1<<9);
IOCLR0|=(1<<10);
IOSET0|=(1<<11);
IOSET0|=(1<<12);
IOCLR0|=(1<<13);

delay(300);

//6
IOSET0|=(1<<7);
IOSET0|=(1<<8);
IOSET0|=(1<<9);
IOSET0|=(1<<10);
IOSET0|=(1<<11);
IOCLR0|=(1<<12);
IOSET0|=(1<<13);

delay(300);

//5
IOSET0|=(1<<7);
IOSET0|=(1<<8);
IOCLR0|=(1<<9);
IOSET0|=(1<<10);
IOSET0|=(1<<11);
IOCLR0|=(1<<12);
IOSET0|=(1<<13);

delay(200);
IOCLR0|=(1<<21);
delay(100);

//4
IOSET0|=(1<<21);
IOSET0|=(1<<15);

IOCLR0|=(1<<7);
IOSET0|=(1<<8);
IOCLR0|=(1<<9);
IOCLR0|=(1<<10);
IOSET0|=(1<<11);
IOSET0|=(1<<12);
IOSET0|=(1<<13);

delay(200);
IOCLR0|=(1<<21);
IOCLR0|=(1<<15);
delay(100);

//3
IOSET0|=(1<<21);
IOSET0|=(1<<15);

IOSET0|=(1<<7);
IOCLR0|=(1<<8);
IOCLR0|=(1<<9);
IOSET0|=(1<<10);
IOSET0|=(1<<11);
IOSET0|=(1<<12);
IOSET0|=(1<<13);

delay(200);
IOCLR0|=(1<<21);
IOCLR0|=(1<<15);
delay(100);

//2
IOSET0|=(1<<21);
IOSET0|=(1<<15);

IOSET0|=(1<<7);
IOCLR0|=(1<<8);
IOSET0|=(1<<9);
IOSET0|=(1<<10);
IOCLR0|=(1<<11);
IOSET0|=(1<<12);
IOSET0|=(1<<13);

delay(200);
IOCLR0|=(1<<21);
IOCLR0|=(1<<15);
delay(100);

//1
IOSET0|=(1<<21);
IOSET0|=(1<<15);

IOCLR0|=(1<<7);
IOCLR0|=(1<<8);
IOCLR0|=(1<<9);
IOCLR0|=(1<<10);
IOSET0|=(1<<11);
IOSET0|=(1<<12);
IOCLR0|=(1<<13);

delay(200);
IOCLR0|=(1<<21);
IOCLR0|=(1<<15);
delay(100);

//0
IOSET0|=(1<<21);
IOSET0|=(1<<15);

IOSET0|=(1<<7);
IOSET0|=(1<<8);
IOSET0|=(1<<9);
IOSET0|=(1<<10);
IOSET0|=(1<<11);
IOSET0|=(1<<12);
IOCLR0|=(1<<13);

delay(200);
IOCLR0|=(1<<21);
IOCLR0|=(1<<15);
delay(100);



//yellow b
IOSET0|=(1<<20);


IOCLR0|=(1<<7);
IOCLR0|=(1<<8);
IOCLR0|=(1<<9);
IOCLR0|=(1<<10);
IOCLR0|=(1<<11);
IOCLR0|=(1<<12);
IOCLR0|=(1<<13);

delay(500);
IOCLR0|=(1<<20);

}

else if((IOPIN0 & (1<<23))==0)
{
IOCLR0|=(1<<0);
IOCLR0|=(1<<1);
IOCLR0|=(1<<2);
IOCLR0|=(1<<3);
IOCLR0|=(1<<4);
IOCLR0|=(1<<5);
IOCLR0|=(1<<6);
IOCLR0|=(1<<7);
IOCLR0|=(1<<8);
IOCLR0|=(1<<9);
IOCLR0|=(1<<10);
IOCLR0|=(1<<11);
IOCLR0|=(1<<12);
IOCLR0|=(1<<13);
IOCLR0|=(1<<14);
IOCLR0|=(1<<15);
IOCLR0|=(1<<16);
IOCLR0|=(1<<17);
IOCLR0|=(1<<18);
IOCLR0|=(1<<19);
IOCLR0|=(1<<20);
IOCLR0|=(1<<21);
}
}
}




