#include <stdio.h>
int inte[200] = {1};
int index=0,index1=1;
void factorial()
	{
	
	for (index1--;index1>=0;index1--)
		{
		printf("%d",inte[index1]);
		}
	printf("\n");
	index1 = index;
	}
int multiply(int a)
	{
	index = 0;
	int temp=0,x;
	do
		{
		x = inte[index]*a+temp;
		inte[index] = x%10;
		temp = x/10;
		index++;
		}
	while ((temp != 0)||(index < index1));
	index1=index;
	}

int main()
	{
//	int count;
//	for (count = 2; count < 6; count ++)
//	multiply(count);
//	factorial();
	int T;
	scanf("%d",&T);
	int count, n,count2;
	for (count = 0; count < T; count ++)	
		{
		
		scanf("%d",&n);
		for ( count2 = 2; count2 < n+1;count2 ++)
			{
			multiply(count2);
			}
		factorial();
		memset(inte,0,sizeof(inte));
		inte[0]=1;
		index = 0;
		index1 = 1;
		}
	}
