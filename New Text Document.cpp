#include <iostream>
#include <graphics.h>
using namespace std;
void print(float x,float y, float len, bool col);
void game(float x,float y, float len, bool col,int n);
main()
{
    initwindow(800,800);
   
    game(400.,400.,100.,1,3);
	getch();
}
void print(float x,float y, float len, bool col)
{
    setfillstyle(1,col);
    fillellipse(x,y-len-len/2,len/2,len/2);
    fillellipse(x, y, len, len);
    setfillstyle(1,-1*col);
    fillellipse(x-len/4,y-len-len/2-len/4,len/8,len/8);
    fillellipse(x+len/4,y-len-len/2-len/4,len/8,len/8);
    bar(x-len/2-len/4, y-2*len,x+len/2+len/4,y-2*len+len/8);
    bar(x-len/2+len/8,y-2.5*len,x+len/2-len/8,y-2*len);
}
void game(float x,float y, float len, bool col,int n)
{
    if(n==1)
    {
        print(x,y,len,col);
        cout<<"y";
    }
    else
    {
        cout<<"x";
        print(x,y,len,col);
        game(x+len,y+len/2,len/2,-1*col,n-1);
        game(x-len,y+len/2,len/2,-1*col,n-1);
    }
}
