#include <stdio.h>
int sumDigit(long X)
	{
	int S = 0;
	S += (X%10);
	while ( X >=10)
		{
		X /= 10;
		}
	return S+X;

	}
int main()
	{
	int T,count;
	long N;
	scanf("%d",&T);
	for (count = 0; count < T; count++)
		{
		scanf("%ld",&N);
		printf("%d\n",sumDigit(N));
		}
	}
