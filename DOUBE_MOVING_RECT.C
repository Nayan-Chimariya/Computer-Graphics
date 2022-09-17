#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include <math.h>

void main()  {
int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"c:/turboc3/bgi");
for(i=0;i<180;i++){
cleardevice();
rectangle(200-i/2,150,250-i/2,200);
setfillstyle(SOLID_FILL,GREEN);
floodfill(201-i/2,151,255);
delay(10);
cleardevice();
rectangle(50+i,50,100+i,100);
setfillstyle(SOLID_FILL,RED);
floodfill(51+i,51,255);
delay(10);
}

for(i=0;i<180;i++){
cleardevice();
rectangle(110,150+i/2,160,200+i/2);
setfillstyle(SOLID_FILL,GREEN);
floodfill(111,151+i/2,255);
delay(10);
cleardevice();
rectangle(230,50+i,280,100+i);
setfillstyle(SOLID_FILL,RED);
floodfill(231,51+i,255);
delay(10);
}

for(i=0;i<180;i++){
cleardevice();
rectangle(110+i/2,240,160+i/2,290);
setfillstyle(SOLID_FILL,GREEN);
floodfill(111+i/2,241,255);
delay(10);
cleardevice();
rectangle(230-i,230,280-i,280);
setfillstyle(SOLID_FILL,RED);
floodfill(231-i,231,255);
delay(10);
}

for(i=0;i<180;i++){
cleardevice();
rectangle(200,240-i/2,250,290-i/2);
setfillstyle(SOLID_FILL,GREEN);
floodfill(201,241-i/2,255);
delay(10);
cleardevice();
rectangle(50,230-i,100,280-i);
setfillstyle(SOLID_FILL,RED);
floodfill(51,231-i,255);
delay(10);
}
getch();
closegraph();
}
