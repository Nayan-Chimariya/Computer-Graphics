#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>

void main()
{
 int gd=DETECT,gm,i,k;
 initgraph(&gd,&gm,"C:/TC/BGI");

for(k=1;k<=2;k++)
{
 for(i=0;i<300;i++)
 {
  delay(5);
  cleardevice();
  circle(300,100+i,50);
  setfillstyle(1,RED);
  floodfill(301,101+i,255);
 }
 for(i=0;i<300;i++)
 {
  cleardevice();
  circle(300,400-i,50);
  setfillstyle(1,RED);
  floodfill(300,351-i,255);
 }
 }
 for(i=0;i<300;i++)
 {
  delay(5);
  cleardevice();
  circle(300,100+i,50);
  setfillstyle(1,RED);
  floodfill(301,101+i,255);
 }

 getch();
 closegraph();
}
