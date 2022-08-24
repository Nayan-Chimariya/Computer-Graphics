#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main(){
int gd = DETECT, gm, i;
initgraph(&gd, &gm, "C:/turboc++/dis/turboc3/bgi");
//roof
setfillstyle(1,RED);
rectangle(100,150,300,200);
floodfill(101,151,255);
//body
setfillstyle(1,YELLOW);
rectangle(125,200,275,325);
floodfill(156,201,255);
//windows
setfillstyle(1,BLUE);
rectangle(150,225,175,250);
floodfill(151,226,255);
rectangle(225,225,250,250);
floodfill(226,226,255);
//door
rectangle(175,275,225,325);
setfillstyle(1,GREEN);
floodfill(176,276,255);
getch();
closegraph();
return 0;
}