#include <stdio.h>
char kitu[] = " abcdefghijklmnopqrstuvwxyz";
int n;
void ingach(int soluonggach) //in gạch và biến vào là số lượng gạch
	{
	int count;
	for (count = 0; count <soluonggach;count++)
	printf("-");
	}
void inhang(int hangthu) // in hàng và biến vào là vị trí của hàng
	{
	ingach((4*n-3-(hangthu*4-3))/2); // in các gạch đầu dòng
	int congtac=1,count,vitri=n;
	for (count = 0; count < hangthu*2-1;count++)
		{
		printf("%c",kitu[vitri]);
		if (count != hangthu*2-2 ) printf("-");
		if (congtac == 1) vitri--; // công tác để in ngược hoặc in thuận
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
	if (count <= n) inhang(count); // bé hơn n thì hàng thứ ứng với biến đếm
	else inhang(2*n-count); // lớn hơn n thì hàng thứ = 2n- biến đếm
	}
