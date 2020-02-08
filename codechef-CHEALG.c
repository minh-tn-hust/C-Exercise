#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main()
	{
	int T;
	scanf("%d",&T);
	fflush(stdin);
	int count;
	for (count=0;count<T;count++)
		{	char S[1000],maHoa[10];
			gets(S);
			int count2,dem=1;
			for (count2=0;count2<strlen(S);count2++)
				{
					if (S[count2] == S[count2+1]) dem++;
					else 
						{
						char chuyen[10],kitu[1];
						itoa(dem,chuyen,10);
						strcat(maHoa,chuyen);
						kitu[0] = S[count2];
					//	strcat(maHoa,kitu);
						dem=1;
						}
			
				}
			printf("%d",strlen(maHoa));
		}
	}
