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
long long maxArray(int AorB) // Tra ve phan tu lon nhat trong =======================================================================
	{
	int count,max = A[AorB][0];
	for (count = 0;count < N;count ++)
		{
		if (A[AorB][count] > max) max = A[AorB][count];
		}
	return max;	
	}
int soChuSo(long long checked) // Tra ve so chu so ==================================================================================
	{
	int dem=0;
	while (checked >= 1)
		{
		dem++;
		checked = checked/10;
		}
	return dem;
	}
void connect(int AorB) // Ket noi cac phan tu mang= =================================================================================
	{
	int count=0,dem=0,vitri=0;
	while (count != N)
		{
			if (locate[vitri] == 0) vitri++;
			else
			{	if (dem == locate[vitri]) {vitri++;dem=0;}
				else
				{
				A[AorB][count] = phanChia[vitri][dem];
				dem++;
				count++;
				}
			}
		}
	for (count = 0;count<10;count++) locate[count] = 0;
	}
void divAorB(int AorB) // Chia cac phan tu mang =====================================================================================
	{
	int count1,count2,chuSo,vitri = soChuSo(maxArray(AorB));  // count : dem phan tu mang ;  vitri : dem vi tri cua chu so
	for (count1 = 1;count1 <=vitri;count1++)
	{
	for (count2=0;count2<N;count2++)
		{
		chuSo = layChuSoThuN(A[AorB][count2],count1);
		phanChia[chuSo][locate[chuSo]] = A[AorB][count2];
		locate[chuSo]++;		
		}
	connect(AorB);
	}
	}
int main()
	{
	int T;
	long long s=0,result[50];
	scanf("%d",&T);
	int count;
	for (count = 0;count < T; count++)
		{
		scanf("%d",&N);
		int count2;
		for (count2 = 0; count2 < N ;count2 ++) scanf("%lli",&A[0][count2]);
		for (count2 = 0; count2 < N ;count2 ++) scanf("%lli",&A[1][count2]);
		divAorB(0);
		divAorB(1);
		for (count2=0;count2<N;count2++)
			{
			if (A[0][count2] < A[1][count2]) s+= A[0][count2];
			else (s+= A[1][count2]);
			}
		result[count] = s;
		s=0;
		}
	for (count=0;count<T;count++) printf("%lli\n",result[count]);

	}
