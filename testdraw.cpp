#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;


void plotgraph(int screenheight, int screenwidth){

    for(int i=screenwidth/2;i<=screenwidth;i+=50){
        for(int j=screenheight/2;j<=screenheight;j+=50){
            setcolor(WHITE);
            //line(x0,y0, x1,y1)
            line(0,j,screenwidth,j);
            line(i,0,i,screenheight);
        }
    }
    for(int i=screenwidth/2;i>=0;i-=50){
        for(int j=screenheight/2;j>=0;j-=50){
            setcolor(WHITE);
            //line(x0,y0, x1,y1)
            line(0,j,screenwidth,j);
            line(i,0,i,screenheight);
        }
    }

    //plotting the axes

    setcolor(RED);
    line(0,screenheight/2,screenwidth,screenheight/2);

    line(screenwidth/2,0,screenwidth/2,screenheight);


}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");
    setbkcolor(BLACK); //current background color


    //window size
    DWORD screenheight= GetSystemMetrics(SM_CYSCREEN);
    DWORD screenwidth=GetSystemMetrics(SM_CXSCREEN);

    initwindow(screenwidth,screenheight, "", -3, 3);

    plotgraph(screenwidth,screenheight);

    //text writing

    outtextxy((screenwidth/2)+100,(screenheight/2)+100,"firstpoint");
    outtextxy((screenwidth/2)+10,(screenheight/2)+10,"Last point");
    outtextxy((screenwidth/2)+5,(screenheight/2)+5,"0,0");

    delay(500);
    getch();
    closegraph();
}