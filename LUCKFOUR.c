#include <stdio.h>
#include <string.h>
int main()
	{
		int T,count,N=0;
		char str[15];
		scanf("%d",&T);
		for (count = 0; count < T; count++)
			{	
				fflush(stdin);
				gets(str);
				for (count = 0; count < strlen(str);count++)
				if (str[count] == '4') N++;
				printf("%d\n",N);
				N= 0;
			}
	}
