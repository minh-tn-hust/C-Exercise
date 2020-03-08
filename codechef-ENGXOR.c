#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int T;
long N,Q,P,odd=0,even=0; // even chan; odd le;
long A[100000];

void process()
	{
	char counter;
	long count,temp;
	char bitwise[40]; 
	for (count = 0; count < N; count++)
		{
		temp = P^A[count];
		itoa(temp,bitwise,2);
		temp = 0;
		for (counter = 0; counter < strlen(bitwise);counter++)
		if (bitwise[counter] == 49) temp++;	
		if (temp%2 == 1) odd++;
		else even++;
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
			printf("%ld %ld",even,odd);
			even = 0; odd = 0;
			}
		}
	}
