#include <stdio.h>
int studentMark[100];
int result[100][3];
int T,N;
// Ham sap xep mang==========================================
void sort()
	{
	int num1,num2,tam;
	for (num1 =0;num1<N;num1++)
	for (num2 = num1;num2<N;num2++)
	if (studentMark[num1] > studentMark[num2])
		{
		tam = studentMark[num1];
		studentMark[num1] = studentMark[num2];
		studentMark[num2] = tam;
		}
	}
//============================================================
int check()
	{
	int S=0;
	if (studentMark[N/4-1] != studentMark[N/4]) S++;
	if (studentMark[2*N/4-1] != studentMark[2*N/4]) S++;
	if (studentMark[3*N/4-1] != studentMark[3*N/4]) S++;
	return S;
	}
int main()
	{
// T la so test, N la so luong phan tu		

// count: dem test, count2: dem phan tu 
	int count2,count;
// Nhap du lieu ===============================================
	scanf("%d",&T);
	for (count=0;count<T;count++)
		{
		scanf("%d",&N);
		for (count2 = 0;count2<N;count2++)
			{
			scanf("%d",&studentMark[count2]);
			}
		sort();
		if (check() ==3) 
		{ 
		result[count][0] = studentMark[N/4];
		result[count][1] = studentMark[2*N/4];
		result[count][2] = studentMark[3*N/4];
		}
		else result[count][0] = -1; 
		}
//================================================================
	for (count=0;count<T;count++)
		{
		if (result[count][0] == -1) printf("-1 \n");
		else printf("%d %d %d \n",result[count][0],result[count][1],result[count][2]);
		}
	}
