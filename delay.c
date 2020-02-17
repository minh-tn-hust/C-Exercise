#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
int y = 10,x = 20;
int keyBoardHit;
long long point;
int r,xr,yr;
int playzone[20][40] = {0};// 1-19 ; 1 - 39;
void food()
	{
	
    srand((int)time(0));
    xr = rand()%39+1;
    yr = rand()%19+1;
    playzone[yr][xr] = 2;
	}
void printPlayZone()
	{
	int count1,count2;
	for (count1 = 0;count1<20;count1++)
		{
		printf("\n");
		for (count2=0;count2<40;count2++)
			{
			if ((count1 == 0)||(count1 == 19)) printf("_");
			else
				{
				if ((count2 == 0 )||(count2 == 39)) printf("|");
				else
					{
					if (playzone[count1][count2] == 0) printf(" ");	
					else 
						{
						if (playzone[count1][count2] == 2) printf("*");
						else printf("0");
						}
					} 
				} 
			}	
		}
	printf("\n%lli",point);
	}
void moveD()
	{
	playzone[y][x] = 0;
	x++;
	if (x == 39) keyBoardHit = 113;
    else
    {
    playzone[y][x] = 1;
    }
	}
void moveW()
	{
	playzone[y][x] = 0;
	y--;
	if (y == 0) keyBoardHit = 113;
    else
    {
    playzone[y][x] = 1;
    }
	}
void moveS()
	{
	playzone[y][x] = 0;
	y++;
	if (y == 20) keyBoardHit = 113;
    else
    {
    playzone[y][x] = 1;
    }
	}
void moveA()
	{
	playzone[y][x] = 0;
	x--;
	if (x == 0) keyBoardHit = 113;
    else
    {
    playzone[y][x] = 1;
    }
	}

int main()
	{
	
	playzone[y][x] = 1;
	int count;
	food();
	keyBoardHit = 100;
	while (keyBoardHit !=113)
	{
			do
			{
			fflush(stdin);
			system("cls");
			printPlayZone();
			usleep(100);
		
// =============Ðây là ph?n ki?m tra keyboard d?u vào============================================
			if (keyBoardHit == 97) moveA();
            else
            {
                if (keyBoardHit == 100) moveD();
                else
                {
                    if (keyBoardHit == 115) moveS();
                    else
                    {
                        if (keyBoardHit == 119) moveW();
                    }
                    
                }
                
            }
            if ((x == xr)&&(y==yr)) 
            	{
            	food();
            	point += 1000;
				}
// =============================================================================================
            if (keyBoardHit == 113 ) break;
			}
			while (!kbhit());
			if (keyBoardHit == 113 ) break;
			else
			keyBoardHit = getch();
	}
	}
