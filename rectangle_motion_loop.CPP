#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setfillstyle(1,RED);
for(i=1;i<300;i++)
{
cleardevice();
rectangle(100+i,150,150+i,100);
floodfill(101+i,101,255);
delay(5);
}


for(i=1;i<200;i++)
{
cleardevice();
rectangle(400,150+i,450,100+i);
floodfill(401,101+i,255);
delay(5);
}
for(i=1;i<300;i++)
{
cleardevice();
rectangle(400-i,350,450-i,300);
floodfill(401-i,301,255);
delay(5);
}

for(i=1;i<200;i++)
{
cleardevice();
rectangle(100,350-i,150,300-i);
floodfill(101,301-i,255);
delay(5);
}
getch();
closegraph();

}
