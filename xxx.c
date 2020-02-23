#include <stdio.h>
#include <windows.h>
#include <conio.h>
int y = 10,x = 20;
int playzone[20][40] = {0};// 1-19 ; 1 - 39;
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
					else printf("0");
					} 
				} 
			}	
		}
	}
void moveD()
	{
	playzone[y][x] = 0;
	x++;
	if 
	}
void moveW()
	{
		
	}
void moveS()
	{
		
	}
void moveA()
	{
		
	}
char keyBoardHit;
int main()
	{
	
	playzone[y][x] = 1;
	int count;
	while (keyBoardHit == "q")
	{
		while (!kbhit())
			{
			system("cls");
			printPlayZone();
			usleep(1000);
			keyBoardHit = getch();
			move();
			if (keyBoardHit)
			}
	}
	}