#include <stdio.h>
char kitu[] = " abcdefghijklmnopqrstuvwxyz";
int n;
void ingach(int soluonggach)
	{
	int count;
	for (count = 0; count <soluonggach;count++)
	printf("-");
	}
void inhang(int hangthu)
	{
	ingach((4*n-3-(hangthu*4-3))/2);
	int congtac=1,count,vitri=n;
	for (count = 0; count < hangthu*2-1;count++)
		{
		printf("%c",kitu[vitri]);
		if (count != hangthu*2-2 ) printf("-");
		if (congtac == 1) vitri--;
		if (congtac == 0) vitri++;
		if (vitri == 1) congtac = 0;
		}
	ingach((4*n-3-(hangthu*4-3))/2);
	printf("\n");
	}
int main()
	{
	scanf("%d",&n);
	int count;
	for (count = 1; count <= 2*n-1; count ++)
	if (count <= n) inhang(count);
	else inhang(2*n-count);
	}
