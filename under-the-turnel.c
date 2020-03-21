#include <stdio.h>
#include <string.h>
int main()	
	{
	short 	T;
	int N,K;
	short Matran[1000][1000];
	char str[1000];
	int count1,count2;
	// Nhap du lieu dua ve ma tran
	scanf("%d%d",&N,&K);
	for (count1 = 0;count1<N;count1++)
		{
		gets(str);
		for (count2 = 0; count2 < strlen(str);count2++)
			{
			int c;
			c = str[count2];
			Matran[count2][count1] = c-48;
			}
		}
	for (count1 =0;count1<N;count1++)
	{
	for (count2 =0;count2<N;count2++)
	printf("%hi",Matran[count2][count1]);
	printf("\n");
	}
	
	}
