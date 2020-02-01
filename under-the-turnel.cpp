#include <stdio.h>
#include <string.h>
void input()
	{
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
	}
int main()	
	{
	short 	T;
	int N,K;
	short Matran[1000][1000];
	char str[1000];
	int count1,count2;
	// Nhap du lieu dua ve ma tran
	input();
	
	
	}
