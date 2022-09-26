#include<graphics.h>
#include<cmath> //SinO AND CosO
#include<ctime> //fetch current time;

#define PI 3.14285

int main()
{
	
	int height=GetSystemMetrics(SM_CYSCREEN);
	int width=GetSystemMetrics(SM_CXSCREEN);
	initwindow(height,width,"",-3,-3);
		
		int page=0;
		
		while(1)
		{
			
			setactivepage(page);
			setvisualpage(1-page);
			cleardevice();
			setcolor(WHITE);
			circle(300,300,225);
			for(int i=200;i<=220;i++)
			{
			setcolor(WHITE);
			circle(300,300,i);
			}
			setcolor(WHITE);
			circle(300,300,195);
			circle(300,300,5); 	
			outtextxy(300+180*sin(1*PI/6)-5,300-180*cos(1*PI/6),"1");
			outtextxy(300+180*sin(2*PI/6)-5,300-180*cos(2*PI/6),"2");
			outtextxy(300+180*sin(3*PI/6)-5,300-180*cos(3*PI/6),"3");
			outtextxy(300+180*sin(4*PI/6)-5,300-180*cos(4*PI/6),"4");
			outtextxy(300+180*sin(5*PI/6)-5,300-180*cos(5*PI/6),"5");
			outtextxy(300+180*sin(6*PI/6)-5,300-180*cos(6*PI/6),"6");
			outtextxy(300+180*sin(7*PI/6)-5,300-180*cos(7*PI/6),"7");
			outtextxy(300+180*sin(8*PI/6)-5,300-180*cos(8*PI/6),"8");
			outtextxy(300+180*sin(9*PI/6)-5,300-180*cos(9*PI/6),"9");
			outtextxy(300+180*sin(10*PI/6)-5,300-180*cos(10*PI/6),"10");
			outtextxy(300+180*sin(11*PI/6)-5,300-180*cos(11*PI/6),"11");
			outtextxy(300+180*sin(12*PI/6)-5,300-180*cos(12*PI/6),"12");	
			time_t now=time(0);
			tm *ltm=localtime(&now); //now the current time is in ltm;
			
			//Hour Hand
			setcolor(RED);
			line(300,300,300+150*sin(ltm->tm_hour*PI/6),300-150*cos(ltm->tm_hour*PI/6));
			
			//Minute Hand
			setcolor(GREEN);
			line(300,300,300+160*sin(ltm->tm_min*PI/30),300-160*cos(ltm->tm_min*PI/30));
			
			//Second Hand
			setcolor(WHITE);
			line(300,300,300+170*sin(ltm->tm_sec*PI/30),300-170*cos(ltm->tm_sec*PI/30));
			
			delay(10);
			if(GetAsyncKeyState(VK_ESCAPE))
			break;
			page=1-page;
		}
	
	closegraph();
}
