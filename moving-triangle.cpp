#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int screenWidth = GetSystemMetrics(SM_CXSCREEN);
int screenHeight = GetSystemMetrics(SM_CYSCREEN);

void body() //figure
{
    
    setbkcolor(WHITE);
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
 
}
int ball(int j,int k,int l)   //ball
{
	setcolor(GREEN);
    rectangle(j,k,l);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(j+1,k+1,GREEN);
}

int start(int *p)
{
   setbkcolor(WHITE);
    int i,j=50,k=250,l=50,m=10;
    char c;
    cleardevice();
    setbkcolor(WHITE);
    body();           
    ball(j,k,l);     
    setcolor(RED);
    line(50,310, 400, 310);
    for(i=0; i<m++; i++)
    {
      
        c=getch();
        cleardevice();
        if(c==75||c=='a') j-=10;
        if((k+l+10)<=310)
        if(c==80||c=='s') k+=10;
        if(c==77||c=='d') j+=10;
        
        if(c==72||c=='w') k-=10;
        if(c==' ') return 0;
        
        cout<<j<<" "<<k<<endl;
        body();        //draw the figure
        ball(j,k,l);   //draw the ball
        setcolor(RED);
        line(50,310, 400, 310);
       
   
    }

    return 1;
}
int main()
{
   
    int d=DETECT,g;
    int flag,point=0;
    initgraph(&d,&g,(char*)"");
     setbkcolor(WHITE);
    flag=start(&point);

    getch();
    closegraph();
    return flag;
}