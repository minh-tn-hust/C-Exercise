#include <stdio.h>
#include <string.h>
int T,N,M;
int P[100] = {0},F[100] = {0};
int process[100] = {0};
int processer()
	{
	int count,min;
	process[F[0]] += P[0];
	min = process[F[0]];
	for (count = 1; count < N;  count++)
		{
		process[F[count]] += P[count]; 
		}
	for (count = 1; count <= M; count++)
		{
		if ((process[F[count]] < min)&&(process[F[count]] != 0)) min = process[F[count]];
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
		memset(P,0,sizeof(F));
		memset(P,0,sizeof(process));
		}
	}
