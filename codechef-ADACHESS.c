#include <stdio.h>
int field[8][8] = {
//   0 1 2 3 4 5 6 7              
	{1,0,1,0,1,0,1,0}, // 0
	{0,1,0,1,0,1,0,1}, // 1
	{1,0,1,0,1,0,1,0}, // 2
	{0,1,0,1,0,1,0,1}, // 3 
	{1,0,1,0,1,0,1,0}, // 4
	{0,1,0,1,0,1,0,1}, // 5
	{1,0,1,0,1,0,1,0}, // 6
	{0,1,0,1,0,1,0,1}  // 7
};
void bringToTheMainCross()
	{
		
	}
void begin()
	{
	printf("2 2\n");
	printf("3 1\n");
	printf("1 3\n");
	printf("2 4\n");
	printf("1 5\n");	
	printf("5 1\n");
	printf("6 2\n");
	printf("7 1 \n");
	printf("1 7\n");
	printf("2 8\n");
	printf("8 2\n");
	printf("7 3\n");
	printf("8 4\n");
	printf("4 8\n");
	printf("5 7\n");
	printf("6 8\n");
	printf("8 6\n");
	printf("7 7\n");
	printf("8 8\n");

	
	}
int main()
	{
	int T,r0,c0;
	scanf("%d",&T);
	int countT;
	for (countT=0;countT<T;countT++)
		{
		scanf("%d%d",&r0,&c0);
		if (r0 == c0)
			{
			if ((r0 ==1)&&(c0 ==1))
			    {
			       printf("19\n");
			       begin();
			    }
			if ((r0 == c0)&&(r0 !=1))
			    {
			    printf("20\n");
			    printf("1 1\n");
			    begin();
			    }
			}
		if (r0 != c0)
			{
			printf("21\n");
			printf("%d %d\n",(r0+c0)/2,(r0+c0)/2);
			printf("1 1\n");
			begin();
			}
		
		
		}
	}
