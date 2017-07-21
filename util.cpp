void GAME::print_map()
{
	score=(l-2)*50;
	printf("Score = %d\n",score);
	
		for(int i=0;i<SIZE;i++)
			{
				for(int j=0;j<SIZE;j++)
				{
						if(j == hx && i==hy)
						printf("0");
						else if(mp[i][j].v ==1)
						printf("O");
						else if(mp[i][j].v == 3)
						printf("-");
						else if(mp[i][j].v == 4)
						printf("|");
						else if(mp[i][j].v == 5)
						printf("*");
						else
						printf(" ");
				}
				printf("\n");
			}
		//printf("tx = %d ty =%d \nhx = %d hy =%d\n",tx,ty,hx,hy);
		if(mp[hy][hx].v > 1)
		{
			printf("GAME OVER  \n");
			exit(1);
		}
		
		
		
		
}

void GAME::init()
{
		for(int i=0;i<SIZE;i++)
			{
				for(int j=0;j<SIZE;j++)
				{
					mp[i][j].v=0;
					mp[i][j].d=NULL;
				}
			}
			
		/*	for(int i=0;i<SIZE;i++)
			{
				mp[0][i].v=3;
				mp[SIZE-1][i].v=3;
				mp[i][0].v=4;
				mp[i][SIZE-1].v=4;
			}			
			mp[1][1].v=1;
			mp[1][2].v=1;*/
			hx=2;
			hy=1;
			tx=1;
			ty=1;
			diff=1000;
			inp='d';
			hd='d';
			mp[hy][hx].d='d';
			mp[ty][tx].d='d';
			newiniti();
			
			
			
}


