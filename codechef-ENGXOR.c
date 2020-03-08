#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int T;
long N,Q,P,odd=0,even=0; // even chan; odd le;
long A[100000];
void process()
	{
	long count,temp,counter=0,hold;
	for (count = 0; count < N; count++)
		{
		temp = P^A[count];	
		while (temp>=1)
			{
			if (temp%2 == 1) counter++;
			temp/=2;
			}
		if (counter%2 == 1) odd++;
		else even++;
		counter = 0;
		}
	}
int main()
	{
	int countT;
	long count;
	scanf("%d",&T);
	for (countT= 0; countT<T;countT++)
		{
		scanf("%ld%ld",&N,&Q);
		for (count = 0; count <N; count ++)
		scanf("%ld",&A[count]);
		for (count = 0; count < Q; count ++)
			{
			scanf("%ld",&P);
			process();
			printf("%ld %ld\n",even,odd);
			even = 0; odd = 0;
			}
		}
	}
