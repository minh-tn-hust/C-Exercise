#include <stdio.h>

int main()
	{
	int T;
	long  A,B,C;
	scanf("%d",&T);
	int count;
	for (count = 0 ; count < T; count++)
		{
		scanf("%ld%ld%ld",&A,&B,&C);
		if ((A-B)*(A-C)<0) printf("%ld\n",A);
		if ((B-A)*(B-C)<0) printf("%ld\n",B);
		if ((C-B)*(C-A)<0) printf("%ld\n",C);
		}
	}
