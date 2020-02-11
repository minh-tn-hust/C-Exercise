#include <stdio.h>
int thongTin[4][4] = {0};
int result[150];
int T,N;
#define MAX 20 
int n;
int Bool[20] = { 0 };//Ðánh d?u chua có ph?n t? nào s? d?ng h?t
int A[20],B[20];//LuBu hoán v? vào m?ng A
int money[24];
int dem=0;
void reset()
	{
	int hello = 0,hello2;
		for (hello = 0;hello < 20;hello ++) {A[hello] = 0;B[hello] = 0;Bool[hello] = 0;}
		for (hello = 0;hello < 4;hello++)
		for (hello2 = 0;hello2<4;hello2++)
		thongTin[hello][hello2]=0;
	for (hello  = 0;hello <24;hello++) money[hello] =0;
	dem=0;
	}
// Dau vao o day
void put()
	{
	B[0]=thongTin[A[1]][0];
	B[1]=thongTin[A[2]][1];
	B[2]=thongTin[A[3]][2];
	B[3]=thongTin[A[4]][3];
	}
void sort()
	{
	int count1,count2,hold;
	for (count1 = 0;count1<4;count1++)
	for (count2 = 0;count2<4;count2++)
		{
		if (B[count1] < B[count2])
			{
			hold = B[count1];
			B[count1] = B[count2];
			B[count2] = hold;
			}
		}
	}
int max()
	{
	int count=0,max1=money[0];
	for (count = 0;count <24;count++)
		{
		if (money[count] > max1 ) max1 = money[count];
		}
	return max1;
	}
int checked()
	{
	int count1,count2,dem1=0,check=0;
	for (count1 = 0;count1 < 4;count1 ++) if (B[count1] == 0)dem1++;
	return dem1;
	}	
void Try(int k) {
	int i;
    for (i = 1; i <= 4; i++) {
        //Ki?m tra n?u ph?n t? chua du?c ch?n thì s? dánh d?u
        if (!Bool[i]) 
		{
            A[k] = i-1; // Luu m?t ph?n t? vào hoán v?
            Bool[i] = 1;//Ðánh d?u dã dùng
            if (k == 4)//Ki?m tra n?u dã ch?a m?t hoán v? thì xu?t
                	{
                	put();
                	sort();
                	money[dem] = B[3]*100+B[2]*75+B[1]*50+B[0]*25-checked()*100;
                	dem++;
					}
            else
                Try(k + 1);
            Bool[i] = 0;
        }
    }
}
	
void dauVao()
	{
	scanf("%d",&T);
	int countT,countN;
	int hour,ifilm;
			char film;
	for (countT=0;countT<T;countT++)
		{
		
		scanf("%d",&N);
//  	Make a matrix to process
		for (countN=0;countN<N;countN++) 
			{
		    fflush(stdin);
			scanf("%s",&film);
			scanf("%d",&hour);
			ifilm = film;
			thongTin[ifilm-65][hour/3-1]++;
			}           
		Try(1);
		result[countT] = max() ;
		reset();
		}
	}
int main()
	{
	dauVao();
	int count;
	long long dem = 0;
	for (count = 0;count<T;count++) {printf("%d\n",result[count]);dem+=result[count];}
	printf("%lli",dem);
	}
