#include <stdio.h>
#include <math.h>
long long result[50];
long long A[2][10000];
long long phanChia[10][10000];
long long locate[10] = {0,0,0,0,0,0,0,0,0,0};
int N;
int soMu(int coso) // Ham lay so mu =================================================================================================
	{
	int count,tich=1;
	for (count = 0;count < coso;count++) tich*=10;
	return tich;
	}
int layChuSoThuN(long long radix,int n) // Ham tra ve chu so thu N ==================================================================
	{	
	return (radix/soMu(n-1))%10;
	}
long long maxArray(int AorB) // Tra ve phan tu lon nhat trong 
	{
	int count,max = A[AorB][0];
	for (count = 0;count < N;count ++)
		{
		if (A[AorB][count] > max) max = A[AorB][cout];
		}
	return max;	
	}
int soChuSo(int checked)
	{
	int dem;
	while (checked > 1)
		{
		c
		}
	}
//void sortA(int soLuong) 
//	{
//	int count,vitri;
//	for (vitri = )
//	for (count=0;count<N;count++)
//		{
//		
//		}
//	}
int main()
	{
	
//	long long s=0;
//	int T,N;
//	scanf("%d",&T);
//	int count1,count2;
//	for (count1=0;count1<T;count1++)
//		{
//		scanf("%d",&N);
//		for (count2 = 0;count2<N;count2++) scanf("%d",&A[count2]);
//		for (count2 = 0;count2<N;count2++) scanf("%d",&B[count2]);
//		sort(N);
//		for (count2=0;count2<N;count2++)
//			{
//			if (A[count2] < B[count2]) s+= A[count2];
//			else (s+= B[count2]);
//			}
//		result[count1] = s;
//		s=0;
//		}
//	for (count1=0;count1<T;count1++) printf("%lli\n",result[count1]);
	}
