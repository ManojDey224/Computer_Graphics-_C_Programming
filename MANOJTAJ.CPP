#include<graphic.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
int star=0;
int st,rx,r;
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
line(0,440,639,400);
//#####################TOWER%%%%%%%%%%%%%%%%%%//
line(8440,13373);
line(66440,60374);
//|||||||||||||||||||||||1ST STAGE|||||||||||||//
line(3,368,12,374);
line(28,363,31,372);
line(18,363,25,372);
line(10,363,19,374);
line(37,363,37,372);
line(46,363,45,372);
line(55,363,50,372);
line(63,363,55,374);
line(68,363,60,374);
ellipse(37,377,0,180,25,5);
ellipse(37,360,350,190,34,5);
ellipse(37,367,350,190,34,5);
line(2,360,2,368);
line(71,360,71,367);
setfillstyle(6,15);
floodfill(40,375,15);
//+++++++++++++++++2ND STAGE++++++++++++++//
line(15,355,18,282);
line(60,355,55,282);
line(7,278,17,281);//siant
line(68,277,56,381);//siant
line(58,273,51,279);
line(46,272,45,279);//siant
line(37,272,37,277);//siant
line(15,273,22,279);
line(28,272,31,277);//siant
ellipse(37,270,360,190,30,5);
ellipse(37,277,360,190,30,5);
ellipse(37,283,0,180,18,5);
line(6,270,6,277);
line(68,270,68277);
setfillstyle(6,15);
floodfill(40,267,15);////////
setfillstyle(10,15);
floodfill(40,325,150);
//|||||||||||||||||3RD STAGE||||||||||||//
line(18,265,21,192);
line(55,265,55,192);
line(12,190,19,192);
line(60,190,53,192);
line(55,186,51,190);
line(46,185,45,190);//siant
line(37,185,37,188);//siant
line(19,187,25,191);
line(28,185,31,190);//siant
ellipse(37,184,360,190,24,5);
ellipse(37,189,360,190,24,5);
ellipse(37,194,0,170,16,5);
line(12,184,12,189);
line(61,184,61,188);
setfillstyle(6,15);
floodfill(40,180,15);
setfillstyle(10,15);
floodfill(40,180+30,15);
