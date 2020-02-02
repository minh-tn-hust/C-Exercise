
#include <stdio.h>
// 9 phan tu dau tien cua mang---------------------------------------------
int voHan[128] = {0, 0, 1, 0, 2, 0, 2, 2, 1};

int main()
	{
// Tim tat ca cac phan tu cua mang------------------------------------------------------------
	int count,max=0,check=0,count2,count3;
	for (count =9;count<128;count++)
		{	count2 = count-1;
			check = 0;max=0;
			//kiem tra co phai la an dau tien hay k
			for (count3=0;count3<count-1;count3++)
			if (voHan[count3] == voHan[count-1]) {max = 1;break;}
//-------------------------------------------------------------------------------------------
			if (max == 0) {voHan[count] = 0; max = voHan[count-1]; max = 1;}
			else
				{	// Tim phan tu gan nhat----------------------------------------------
					while (check != 1)
						{
						count2--;
						if (voHan[count2] == voHan[count-1]) { voHan[count] = (count-1) - count2;check = 1;}
						}
				}	
		}
// Doc du lieu va in ket qua--------------------------------------------------------------------
	int T,N;
	int result[128];
	scanf("%d",&T);
	for (count=0;count<T;count++)
		{
		scanf("%d",&N);
		int ketqua,l=0;
		ketqua = voHan[N-1];
		for (count2 =0;count2<N;count2++)
		if (voHan[count2] == ketqua) l++;
		result[count] = l;
		}
	for (count =0;count<T;count++) printf("%d\n",result[count]);
	}

