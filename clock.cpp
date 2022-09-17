 #include<graphics.h>
 #include<stdio.h>
 #include<conio.h>
 #include<time.h>
 #include<dos.h>
 #include<string.h>
 #ifdef __unix__
# include <unistd.h>
#elif defined _WIN32
# include <windows.h>
#define sleep(x) Sleep(1000 * (x))
#endif

int main(){
 int gd=DETECT,gm;
 initgraph(&gd, &gm, "");

 int midx, midy, err=graphresult(); ;
 long currtime;
  char date[256];

 if (err != 0)
  {
  printf("Graphics Error: %s\n",
  grapherrormsg(err));
  return 0;
  }

 midx = getmaxx() / 2;
 midy = getmaxy() / 2;

 while (!kbhit())
 {
  cleardevice();
  currtime = time(NULL);

  strcpy(date, ctime(&currtime));

  settextjustify(CENTER_TEXT, CENTER_TEXT);
  settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 5);
  moveto(midx, midy);
  outtext(date);

  sleep(1);
 }

 getch();
 closegraph();
 return 0;
  }