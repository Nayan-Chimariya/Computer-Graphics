#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main(){
int gd = DETECT,gm;
initgraph (&gd, &gm, "c:f/turboc++/disk/turboc3/bgi");
line(120,130,100,160);
line(120,130,140,160);
line(100,160,140,160);
getch();
closegraph();
return 0;
}