#include <stdio.h>
#include <math.h>
#define MAX 100000
int T;long long N,K;
long long coins[MAX];
long long soDu[MAX];
long long soThem[MAX] = {0};
long long result[1000];
void laySoDu()
	{
	int countN;
	for (countN = 0;countN<N;countN++)
		{
		soDu[countN] = coins[countN]%K;
		if (soDu[countN] != 0)
		soThem[countN] = K-soDu[countN];
		}
	}
int checkC()
	{
	long long tongDu2=0,tongThem1=0,tongThem2=0,countDu;
	for (countDu = 0; countDu < N;countDu++)
		{
		tongThem1+=soThem[countDu];
		}
	for (countDu = 0;countDu<N;countDu++)
		{
		tongThem2+=soThem[countDu];
		tongDu2+=soDu[countDu];
		if (tongDu2 >= (tongThem1-tongThem2)) 
		return tongDu2-(tongThem1-tongThem2);
		}
	}
void input()
	{
	int check;
	int countT;
	long long countN;
	scanf("%d",&T);
	for (countT=0;countT<T;countT++)
		{
		scanf("%lli",&N);scanf("%lli",&K);
		for (countN=0;countN<N;countN++)
			{
			scanf("%lli",&coins[countN]);
			}
// Xu ly bai toan bat dau tu day =====================================				
		laySoDu();
		result[countT] = checkC();
		}

	}
int main()
	{
	input();
	int count;
	for (count = 0;count<T;count++) printf("%lli\n",result[count]);	
	}
