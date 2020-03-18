#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
	{
	int T;
	char c[100];
	scanf("%d",&T);
	int count;
	for (count = 0; count <T;count ++)
		{
		fflush(stdin);
		gets(c);
		int cLength;
		for (cLength = strlen(c)-1;cLength>=0;cLength--)
			{
			if ((c[cLength] == '0')&&(c[cLength+1]== '0')) continue; //Loi phep so sanh "=="
			else printf("%c",c[cLength]);
			}
		}
	}
