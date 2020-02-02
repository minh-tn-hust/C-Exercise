
#include <stdio.h>
// 9 phan tu dau tien cua mang
int voHan[128] = {0, 0, 1, 0, 2, 0, 2, 2, 1};

int main()
	{
	int count,max=0,check=0,count2,count3;
	for (count =9;count<128;count++)
		{	count2 = count-1;
			check = 0;max=0;
			for (count3=0;count3<count-1;count3++)
			if (voHan[count3] == voHan[count-1]) {max = 1;break;}
			if (max == 0) {voHan[count] = 0; max = voHan[count-1]; max = 1;}
			else
				{
					while (check != 1)
						{
						count2--;
						if (voHan[count2] == voHan[count-1]) { voHan[count] = (count-1) - count2;check = 1;}
						}
				}	
		}
	int T,N;
	int result[128];
	for (count=0;count<T;count++)
		{
		scanf("%d",&N);
		result[count] = voHan[N];
		}
	for (count =0;count<T;count++) printf("%d",result[count]);
	}

