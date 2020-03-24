#include <stdio.h>

int main()
	{
	int T;
	int count;
	scanf("%d",&T);
	for (count = 0; count <T;count++)
		{
		long N,check;
		scanf("%ld",&N);
		check = N/2;
		if (N == 1) printf("2\n");
		else printf("%ld\n",check+1);
		}
	}
