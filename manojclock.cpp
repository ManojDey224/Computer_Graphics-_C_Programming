#include<stdio.h>
#include<conio.h>
int main()
{	
	int h=0,m=0,s=0;
	printf("enter time in format hh mm ss");
	scanf("%d%d%d",&h,&m,&s);
	start:;
	clrscr;
	for(h;h<24;h++)
	{
		for(m;m<60;m++){
			for(s;s<60;s++){
				printf("%d%d%d",h,m,s);
				for(double i=0;i<9999999;i++){
					i++;
					i--;
				}
			 }
		s=0;}
m=0;	}
	return 0;
}