#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
int main(){
int gd = DETECT, gm, i, j, k, temp;
initgraph(&gd,&gm,"C:/turboc++/disk/turboc3/bgi");
setfillstyle(1,RED);
for(j=0;j<3;j++){
for(i=0;i<300;i++){
cleardevice();
rectangle(100+i,100,200+i,200);
floodfill(101+i,101,255);
delay(10);
}
temp = i;
if(j!=2){
for(i=0;i<300;i++){
cleardevice();
rectangle(100+temp-i,100,200+temp-i,200);
floodfill(101+temp-i,101,255);
delay(10);
}
}
}
getch();
closegraph();
return 0;
}
