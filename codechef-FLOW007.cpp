#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
	{
	int T;

	scanf("%d",&T);
	int count;
	for (count = 0; count <T;count ++)
		{
		char c[100];
		int check =0 ;
		fflush(stdin);
		gets(c);
		int cLength;
		for (cLength = strlen(c)-1;cLength>=0;cLength--)
			{
			if ((c[cLength] == '0')&& (check == 0)) continue;
			if (c[cLength] != '0') check = 1;
			if ((c[cLength] == '0')&& (check == 1))
			{
			printf("0");
			continue;
			}
			if (c[cLength] != 0) printf("%c",c[cLength]);
			
			}
		printf("\n");
		
		}
	}
