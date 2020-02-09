#include <stdio.h>
int thongTin[4][4] = {0};
int result[150];
int T,N;
/* Clear column and rows if the film is selected */

void lock(int hang, int cot)
	{
	thongTin[hang][0] = 0;
	thongTin[hang][1] = 0;
	thongTin[hang][2] = 0;
	thongTin[hang][3] = 0;
	thongTin[0][cot] = 0;
	thongTin[1][cot] = 0;
	thongTin[2][cot] = 0;
	thongTin[3][cot] = 0;
	}
/*/ Find the max ==================================================================================== */
int max()
	{
	int count1,count2,max1=thongTin[0][0];
	for (count1 = 0;count1<4;count1++)
	for (count2 = 0;count2<4;count2++)
	if (thongTin[count1][count2] > max1) max1 = thongTin[count1][count2];
	return max1;
	}
	
/*/ CHeck if Chef loss ==============================================================*/
int checked()
	{
	int count1,count2,dem=0,check=0;
	for (count1 =0;count1<4;count1++)
	{
	for (count2 = 0;count2<4; count2++)
		{
		if (thongTin[count1][count2] == 0) dem++;
		}
		if (dem == 4) check++;
		dem = 0;
	}
	return check;
	}
/*/ Process until thongTin = {0} */
int xuly()
	{
	int check =checked();
	int count1,count2,max1 = max(),tien = 0,dem=4;
	while (max1 != 0)
		{		
		for (count1 = 0;count1 <4;count1++)
		for (count2 = 0;count2<4;count2++)
			{
			if (thongTin[count1][count2] == max1) 
				{
				tien += dem*25*max1;
				dem--;
				lock(count1,count2);
				max1 = max();
				}
			}
			if (dem == 0) break;
		}
	return tien-check*100;
	}
	
/*/ Input here ===============================================================*/
void dauVao()
	{
	scanf("%d",&T);
	int countT,countN;
	for (countT=0;countT<T;countT++)
		{
		scanf("%d",&N);
		
		for (countN=0;countN<N;countN++) /*/ Make a matrix */
			{
			fflush(stdin);
			int hour,ifilm;
			char film;
			scanf("%c",&film);
			scanf("%d",&hour);
			ifilm = film;
			thongTin[ifilm-65][hour/3-1]++;
			}
		result[countT] = xuly(); /*/ Result of the testcase */
		}
	}
int main()
	{
	dauVao();	
	int count,dem=0;
	for (count = 0;count<T;count++) {printf("%d\n",result[count]);dem+=result[count];}
	printf("%d",dem);
	}
