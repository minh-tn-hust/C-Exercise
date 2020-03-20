#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
	{
	int c=0;
	long T,s=0,N,hold;
	scanf("%ld",&T);
	long count;
	for (count = 0; count <T;count ++)
		{
		int c=0;
		s=0;
		scanf("%ld",&N);
		hold = N;
		while (hold > 0)
		    {
		    c++;
		    hold/=10;
		    }
		c--;
		while (N>0)
		    {
		    hold = N%10;
		    s+= hold*((int)pow(10,(float)c));
		    N/=10;
		    c--;
		    }
		 printf("%ld\n",s);
		}
	}
