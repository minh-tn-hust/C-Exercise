#include <stdio.h>
#include <string.h>
char available[11] = "0123456789";
char D[8];
int n;
void clear()
	{
	int countD,countAvailable;
	for (countAvailable =0;countAvailable <10;countAvailable++ )
		{
		for (countD = 0; countD<n;countD++)
			{
			if (D[countD] == available[countAvailable]) available[countAvailable] = ' ';
			}
		}
	}
void tang(char *Xi)
	{
	
	}
int main()
	{
	int count;	
	scanf("%d",&n);
	for (count =0 ; count < n;count++)
		{
		fflush(stdin);
		scanf("%c",&D[count]);
		}
	fflush(stdin);
	char X[254];
	gets(X);
	clear();
	puts(D);
	puts(available);
	
	}
