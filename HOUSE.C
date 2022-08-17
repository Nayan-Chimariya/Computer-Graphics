#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main(){
int gd = DETECT, gm;
initgraph(&gd,&gm, "C:/tc/bgi");
//house
line(200,350,400,350);
line(200,200,200,350);
line(400,200,400,350);
line(160,200,200,200);
line(440,200,400,200);
line(180,150,160,200);
line(420,150,440,200);
line(180,150,420,150);
//left triangle
line(240,200,220,220);
line(240,200,260,220);
line(220,220,260,220);
//right triangle
line(360,200,340,220);
line(360,200,380,220);
line(340,220,380,220);
//door
line(280,350,280,300);
line(320,350,320,300);
line(280,300,320,300);
getch();
closegraph();
return 0;
}

