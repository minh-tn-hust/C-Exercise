#include<stdio.h>
#define max 10
void hoanvi(int &a,int &b)
{
	int temp;
	     temp = a;
         a = b;
         b = temp;
}
void kichco(int &hang,int &cot)
{
	printf("Nhap so hang: ");
	scanf("%d",&hang);
	printf("Nhap so cot: ");
	scanf("%d",&cot);
}
void nhapmatran(int a[][max],int hang, int cot)
{
	printf("Nhap cac gia tri :\n");
	for(int m=0;m<hang;m++)
	{
		for(int p=0;p<cot;p++)
		{
			scanf("%d",&a[m][p]);
		}
	}
}
void xuatmatran(int a[][max],int hang, int cot)
{
	printf("Day la ma tran cua ban :\n");
	for(int m=0;m<hang;m++)
	{
		for(int p=0;p<cot;p++)
		{
			printf("%d   ",a[m][p]);
		}
		printf("\n");
	}
}
void chuyenvi(int a[][max],int hang ,int cot)
{
	for(int m=0;m<hang;m++)
	{
		for(int n=m;n<cot;n++)
		{
			hoanvi(a[m][n],a[n][m]);
		}
	}
}
int main()
{
	int a[max][max], hang, cot;
	kichco(hang,cot);
	nhapmatran(a,hang,cot);
	xuatmatran(a,hang,cot);
	chuyenvi(a,hang,cot);
	xuatmatran(a,hang,cot);
	return 0;
}
