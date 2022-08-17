#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main(){
int gd = DETECT, gm, i;
initgraph(&gd,&gm,"C:/tc/disk/turboc3/bgi");
for(i=50; i<300; i++){
circle(i,50,50);
delay(50);
cleardevice();
}
getch();
closegraph();
return 0;
}