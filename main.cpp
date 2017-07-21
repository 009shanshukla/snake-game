 #include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include"global.h"
#include"util.cpp"
#include"move.cpp"
#include"misc.cpp"
#include"newinit.cpp"

using namespace std;
int main()
{
		GAME g;
		g.l=2;
		g.level=1;
		g.temp1=0;
		g.temp2=0;
		printf("\tEnter Y or y to start the game level %d : ",g.level);
		while(1)
		{
		g.init();
		int t;
		char x;
	
		x=getchar();
		if(x== 'y' || x=='Y')
		{
			while(1)
			{
				g.print_map();
				t=GetTickCount();
				while(GetTickCount() - t <= g.diff)
				{
						if(kbhit())
						{
							g.inp=getch();
							break;
						}
				}
				g.move();
				system("cls");
		        if(g.score>=250 && g.score<500 && g.temp1==0)
		{
			g.level=2;
			g.temp1=1;
			cout<<"\tGOOD ONE \n\tNEW LEVEL :: "<<g.level<<endl<<"\tenter 'y' to start game :";
			break;
		}
		else if(g.score>=500 && g.score<750 && g.temp2==0)
		{
			g.level=3;
			g.temp2=1;
			cout<<"\tGREAT JOB\n\tNEW LEVEL :: "<<g.level<<endl<<"\tenter 'y' to start game :";
			break;
		}
				
			}
		}
/*		else
		{
		printf("Exiting\n");
		exit(1);
	    }*/
    }
}
