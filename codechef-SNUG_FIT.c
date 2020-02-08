#include <stdio.h>
long long result[50];
long long A[10000],B[10000];
void sort(int soLuong)
	{
	int dem1,dem2,tam;
	for (dem1=0;dem1<soLuong;dem1++)
	for (dem2=dem1;dem2<soLuong;dem2++)
		{
			if (A[dem1] > A[dem2]) 
				{
				tam= A[dem1];
				A[dem1] = A[dem2];
				A[dem2] = tam;	
				}
			if (B[dem1] > B[dem2])
				{
				tam = B[dem1];
				B[dem1] = B[dem2];
				B[dem2] = tam;
				}
		}
	}
int main()
	{
	long long s=0;
	int T,N;
	scanf("%d",&T);
	int count1,count2;
	for (count1=0;count1<T;count1++)
		{
		scanf("%d",&N);
		for (count2 = 0;count2<N;count2++) scanf("%d",&A[count2]);
		for (count2 = 0;count2<N;count2++) scanf("%d",&B[count2]);
		sort(N);
		for (count2=0;count2<N;count2++)
			{
			if (A[count2] < B[count2]) s+= A[count2];
			else (s+= B[count2]);
			}
		result[count1] = s;
		s=0;
		}
	for (count1=0;count1<T;count1++) printf("%lli\n",result[count1]);
	}
