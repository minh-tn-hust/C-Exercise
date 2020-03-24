#include <stdio.h>
long max(int A,int B)
	{
	return (A>B)?A:B;
	}
int main()
	{
	int T;
	scanf("%d",&T);
	while (T--)
		{
			long A,B;
			scanf("%ld%ld",&A,&B);
			printf("%ld %ld",max(A,B),A+B);
		}
	}

