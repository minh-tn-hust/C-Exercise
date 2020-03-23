#include <stdio.h>
#include <string.h>
char input[1002];
int T,N;
int chuanhoa()
	{
	int i=0,x=0,y=0,toadox=0,toadoy=0;
	for (i = 0; i< N; i++)
		{
			if (input[i] == 'U'&&y==0)
						{
						toadoy++;
						y++;
						x = 0;
						}
			if (input[i] == 'D'&&y==0)
						{
						toadoy--;
						y++;
						x = 0;
						}
					
			if (input[i] == 'L'&&x==0)
						{
						toadox--;
						x++;
						y = 0;
						}
						
			if(input[i] == 'R'&&x==0)
						{
						toadox++;
						x++;
						y = 0;
						}
						
		}
		printf("%d %d\n",toadox,toadoy);

 	}

int main()
{
scanf("%d",&T);
int count;
for (count = 0; count < T;count++)
	{
	scanf("%d",&N);
	scanf("%s",input);
	chuanhoa();
	}

}
