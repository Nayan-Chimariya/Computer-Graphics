#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main(){
int gd = DETECT, gm;
initgraph(&gd,&gm, "C:/turboc++/disk/turboc3/bgi");
//circle
circle(200,200,100);
//verticle line
line(200,100,200,50);
line(200,300,200,350);
//horizontal line
line(100,200,50,200);
line(300,200,350,200);
//right slant
line(270,130,305,95);
line(130,270,95,305);
//left slant
line(130,130,95,95);
line(270,270,305,305);
getch();

closegraph();
return 0;
}