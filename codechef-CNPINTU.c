#include <stdio.h>
#include <string.h>
int T,N,M;
int P[100] = {0},F[100] = {0};
int process[100] = {0};
int processer()
	{
	int count,min;

	for (count = 0; count < N;  count++)
		{
		process[F[count]] += P[count]; 
		}
	min = process[F[0]];
	for (count = 0; count < N; count++)
		{
		if (process[P[count]] < min) min = process[P[count]];
		}
	return min;
	}
int main()
	{
	scanf("%d",&T);
	int count,countT;
	for (countT = 0; countT<T ; countT++)
		{
		scanf("%d%d",&N,&M);
		for (count = 0; count < N;count++) scanf("%d",&F[count]);
		for (count = 0; count < N;count++) scanf("%d",&P[count]);
		printf("%d\n",processer());
		memset(P,0,sizeof(P));
		memset(F,0,sizeof(F));
		memset(process,0,sizeof(process));
		}
	}
