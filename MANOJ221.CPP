#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,area;
int i,b;
initgraph(&gd,&gm," ");
setbkcolor(WHITE);
for(i=1;i<50;i++){
b=1;
while(!kbhit()){
for(i=20;i<=20;i++){
settextstyle(9,0,8);
setcolor(RED);
outtextxy(300,260,"LOVE");
arc(280,250,400,2000,50);
arc(355,250,700,500,50);
line(320,350,235,270);
line(320,350,400,270);
b++;
delay(8);
cleardevice();
if(b==70){
break;
}
}
}
}
getch();
closegraph();
}
