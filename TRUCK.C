#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
int main(){
int gd = DETECT, gm, i;
initgraph(&gd,&gm, "C:/turboc++/disk/turboc3/bgi");
for(i=0;i<400;i++){
cleardevice();
rectangle(i+120,150,i+150,200);
rectangle(i+80,150,i+120,200);
rectangle(i+50,200,i+200,300);
circle(i+80,320,20);
circle(i+150,320,20);
delay(8);
}
getch();
closegraph();
return 0;
}
