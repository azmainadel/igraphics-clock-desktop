//final digital+analog clock 
#include "iGraphics.h"
#include "gl.h"
#include<math.h>
#include<time.h>

int H, M, S, X=75, Y=155;
double o,x=500,y=360+250,sx,sy,ps;
double xm=500,ym=360+220,mx,my,pm;
double xh=500,yh=360+200,hx,hy,ph;
int i,j,k,h1,h2,m1,m2,s1,s2,q,I;
unsigned char key1='d';

void iDraw()
{
	if(key1=='d'){
		iClear();
		iSetColor(70,70,70);
		iFilledRectangle(80,190,850,300);
		
		for(j=1,I=40;j<9;j++,I+=97){
			if((j%3)==0){
				iSetColor(0,255,0);
				iFilledCircle(I+45+X,150+Y,10);
				iFilledCircle(I+45+X,230+Y,10);
			}
			else{
				if(j==1) q=h1;
				else if(j==2) q=h2;
				else if(j==4) q=m1;
				else if(j==5) q=m2;
				else if(j==7) q=s1;
				else q=s2;
				
				if(q==0){
					iSetColor(0,255,0);
					iFilledRectangle(I+X,80+Y,10,110);//vert left bottom
					iFilledRectangle(I+X,180+Y,10,105);//vert left top
					//iFilledRectangle(I+10+X,180+Y,70,10);//horiz mid
					iFilledRectangle(I+10+X,280+Y,70,10);//horiz top
					iFilledRectangle(I+10+X,75+Y,70,10);//horiz bottom
					iFilledRectangle(I+80+X,80+Y,10,110);//vert right bottom
					iFilledRectangle(I+80+X,180+Y,10,105);//vert right top
				}
				else if(q==1){
					iSetColor(0,255,0);
					//iFilledRectangle(I+X,80+Y,10,110);//vert left bottom
					//iFilledRectangle(I+X,180+Y,10,105);//vert left top
					//iFilledRectangle(I+10+X,180+Y,70,10);//horiz mid
					//iFilledRectangle(I+10+X,280+Y,70,10);//horiz top
					//iFilledRectangle(I+10+X,75+Y,70,10);//horiz bottom
					iFilledRectangle(I+80+X,80+Y,10,110);//vert right bottom
					iFilledRectangle(I+80+X,180+Y,10,105);//vert right top
				}
				else if(q==2){
					iSetColor(0,255,0);
					iFilledRectangle(I+X,80+Y,10,110);//vert left bottom
					//iFilledRectangle(I+X,180+Y,10,105);//vert left top
					iFilledRectangle(I+10+X,180+Y,70,10);//horiz mid
					iFilledRectangle(I+10+X,280+Y,70,10);//horiz top
					iFilledRectangle(I+10+X,75+Y,70,10);//horiz bottom
					//iFilledRectangle(I+80+X,80+Y,10,110);//vert right bottom
					iFilledRectangle(I+80+X,180+Y,10,105);//vert right top
				}
				else if(q==3){
					iSetColor(0,255,0);
					//iFilledRectangle(I+X,80+Y,10,110);//vert left bottom
					//iFilledRectangle(I+X,180+Y,10,105);//vert left top
					iFilledRectangle(I+10+X,180+Y,70,10);//horiz mid
					iFilledRectangle(I+10+X,280+Y,70,10);//horiz top
					iFilledRectangle(I+10+X,75+Y,70,10);//horiz bottom
					iFilledRectangle(I+80+X,80+Y,10,110);//vert right bottom
					iFilledRectangle(I+80+X,180+Y,10,105);//vert right top
				}
				else if(q==4){
					iSetColor(0,255,0);
					//iFilledRectangle(I+X,80+Y,10,110);//vert left bottom
					iFilledRectangle(I+X,180+Y,10,105);//vert left top
					iFilledRectangle(I+10+X,180+Y,70,10);//horiz mid
					//iFilledRectangle(I+10+X,280+Y,70,10);//horiz top
					//iFilledRectangle(I+10+X,75+Y,70,10);//horiz bottom
					iFilledRectangle(I+80+X,80+Y,10,110);//vert right bottom
					iFilledRectangle(I+80+X,180+Y,10,105);//vert right top
				}
				else if(q==5){
					iSetColor(0,255,0);
					//iFilledRectangle(I+X,80+Y,10,110);//vert left bottom
					iFilledRectangle(I+X,180+Y,10,105);//vert left top
					iFilledRectangle(I+10+X,180+Y,70,10);//horiz mid
					iFilledRectangle(I+10+X,280+Y,70,10);//horiz top
					iFilledRectangle(I+10+X,75+Y,70,10);//horiz bottom
					iFilledRectangle(I+80+X,80+Y,10,110);//vert right bottom
					//iFilledRectangle(I+80+X,180+Y,10,105);//vert right top
				}
				else if(q==6){
					iSetColor(0,255,0);
					iFilledRectangle(I+X,80+Y,10,110);//vert left bottom
					iFilledRectangle(I+X,180+Y,10,105);//vert left top
					iFilledRectangle(I+10+X,180+Y,70,10);//horiz mid
					iFilledRectangle(I+10+X,280+Y,70,10);//horiz top
					iFilledRectangle(I+10+X,75+Y,70,10);//horiz bottom
					iFilledRectangle(I+80+X,80+Y,10,110);//vert right bottom
					//iFilledRectangle(I+80+X,180+Y,10,105);//vert right top
				}
				else if(q==7){
					iSetColor(0,255,0);
					//iFilledRectangle(I+X,80+Y,10,110);//vert left bottom
					//iFilledRectangle(I+X,180+Y,10,105);//vert left top
					//iFilledRectangle(I+10+X,180+Y,70,10);//horiz mid
					iFilledRectangle(I+10+X,280+Y,70,10);//horiz top
					//iFilledRectangle(I+10+X,75+Y,70,10);//horiz bottom
					iFilledRectangle(I+80+X,80+Y,10,110);//vert right bottom
					iFilledRectangle(I+80+X,180+Y,10,105);//vert right top
				}
				else if(q==8){
					iSetColor(0,255,0);
					iFilledRectangle(I+X,80+Y,10,110);//vert left bottom
					iFilledRectangle(I+X,180+Y,10,105);//vert left top
					iFilledRectangle(I+10+X,180+Y,70,10);//horiz mid
					iFilledRectangle(I+10+X,280+Y,70,10);//horiz top
					iFilledRectangle(I+10+X,75+Y,70,10);//horiz bottom
					iFilledRectangle(I+80+X,80+Y,10,110);//vert right bottom
					iFilledRectangle(I+80+X,180+Y,10,105);//vert right top
				}
				else{
					iSetColor(0,255,0);
					//iFilledRectangle(I+X,80+Y,10,110);//vert left bottom
					iFilledRectangle(I+X,180+Y,10,105);//vert left top
					iFilledRectangle(I+10+X,180+Y,70,10);//horiz mid
					iFilledRectangle(I+10+X,280+Y,70,10);//horiz top
					iFilledRectangle(I+10+X,75+Y,70,10);//horiz bottom
					iFilledRectangle(I+80+X,80+Y,10,110);//vert right bottom
					iFilledRectangle(I+80+X,180+Y,10,105);//vert right top
				}
			}
		}
		iSetColor(255,0,0);
		iText(340,20,"Press A for Analog Clock",GLUT_BITMAP_HELVETICA_18);
	}
	
	else if(key1=='a'){
		iClear();
		iSetColor(10,10,10);
		iFilledCircle(500,360,300);//Large
		iSetColor(70,70,70);
		iCircle(500,360,305);//out
		iSetColor(70,70,70);
		iFilledCircle(500,360,265);//nextout
		iSetColor(255,0,0);
		for (i=1,o=(6/57.29);i<=60;i++,o+=(6/57.29)){
			if(i%5!=0)
			iFilledCircle(500+295*cos(o),360+295*sin(o),4);
			if (i%5==0)
			iFilledCircle(0,0,0);
		}

		iSetColor(255,0,0);
		iLine(500,360,x,y);///second
		iSetColor(0,120,120);
		iLine(500,360,xm,ym);///minit
		iSetColor(20,200,40);
		iLine(500,360,xh,yh);//HR
		iSetColor(255,0,0);
		iText(500+244,360-150,"IV");//4(500+259,360-150)point
		iText(500+145,360-256,"V");//	iFilledCircle(500+150,360-260,5);//60
		iText(495,67,"VI");//iFilledCircle(500,65,5);//lower
		iText(500-155,360-257,"VII");//iFilledCircle(500-150,360-260,5);//120
		iText(200,360,"IX");//iFilledCircle(205,360,5);//left
		iText(500-255,360+145,"X");//iFilledCircle(500-260,360+150,5);//150
		iText(500+240,360+150,"II");//iFilledCircle(500+259,360+150,5);//330
		iText(500+140,360+252,"I");//	iFilledCircle(500+150,360+260,5);//300
		iText(490,650,"XII");//	iFilledCircle(500,655,5);//upper
		iText(777,360,"III");//	iFilledCircle(795,360,5);//right
		iText(500-150,360+250,"XI");//	iFilledCircle(500-150,360+260,5);//240
		iText(500-260,360-150,"VIII");//	iFilledCircle(500-260,360-150,5);//210
		iSetColor(20,50,210);
		iFilledCircle(500,360,20);//small

		iSetColor(255,0,0);
		iText(340,20,"Press D for Digital Clock",GLUT_BITMAP_HELVETICA_18);
	}
	iSetColor(255,0,0);
	iText(550,20," | Press Z to Exit",GLUT_BITMAP_HELVETICA_18);
}


void iMouseMove(int mx, int my)
{
	//place your codes here
}
void iMouse(int button, int state, int mx, int my)
{
	if(button== GLUT_LEFT_BUTTON && state== GLUT_DOWN){
		//place 
	}
	if(button == GLUT_RIGHT_BUTTON && state== GLUT_DOWN){
		//place
	}
}
void iKeyboard(unsigned char key)
{
	if(key=='z'){
		exit(0);
	}
	else key1=key;
}
void iSpecialKeyboard(unsigned char key)
{
	if(key== GLUT_KEY_END){
		exit(0);
	}

}
void second()
{
	  sx=250*cos(ps/57.29);
	  sy=250*sin(ps/57.29);
	  x=500+sx;
	  y=360+sy;
      ps=ps-6;
}
void minute()
{
      mx=220*cos(pm/57.29);
	  my=220*sin(pm/57.29);
	  xm=500+mx;
	  ym=360+my;
	  pm=pm-.1;
}
void hour()
{
	hx=200*cos(ph/57.29);
	hy=200*sin(ph/57.29);
	xh=500+hx;
	yh=360+hy;
	ph=ph-1/600;
}
void update()
{
	time_t rawtime;
	tm * ptm;
	time(&rawtime);

	ptm = gmtime( &rawtime);
	H=(ptm->tm_hour+6)%24;
	M=ptm->tm_min;
	S=(ptm->tm_sec);

	h2=H%10;
	H=H/10;
	h1=H%10;
	m2=M%10;
	M=M/10;
	m1=M%10;
	s2=S%10;
	S=S/10;
	s1=S%10;
	if(s1==6) s1=0;
}
int main()
{
	time_t rawtime;
	tm * ptm;
	time(&rawtime);

	ptm = gmtime(&rawtime);
	H=(ptm->tm_hour+6)%24;
	M=ptm->tm_min;
	S=(ptm->tm_sec);
	
	ph =(3-H)*30.0-30*M/60.0-30*S/3600.0+.1/600+270+90 ;
    pm= (15-M)*6.0-S/60.0+.1+270+90 ;
	ps = (15-S)*6.0+6+270+90 ;

    second();
    minute();
    hour();

	iSetTimer(1000,update);
	iSetTimer(1000,second);
	iSetTimer(1000,minute);
	iSetTimer(1000,hour);
	iInitialize(1000,700,"Digital Clock (Analog+Digital) ");
	return 0;
}