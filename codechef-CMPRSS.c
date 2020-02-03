#include <stdio.h>
int array[100];int N;
// Kiem tra so luong phan tu lien tuc ---- Tra ve so phan tu lien tuc---------------------------------------

int kiemTraLienTuc(int vitri)
	{
	int check=0,dem=0;
	while (check != 1)
		{
			if ((array[vitri]+1) == array[vitri+1]) {dem++; vitri++;}
			else check =1;
			if (vitri == (N-1)) check = 1;
		}
	return dem;
	}
// Xu ly them "..." va ","----------------------------------------------------------------
void xuLy()
	{	
	int count;
	for (count = 0;count <N;count++)
		{
		if (kiemTraLienTuc(count) >1) 
			{	if (count == 0)
				printf("%d...%d",array[count],array[count+kiemTraLienTuc(count)]);
				else 
				printf(",%d...%d",array[count],array[count+kiemTraLienTuc(count)]);
				count += kiemTraLienTuc(count);
			}
		else
			{	if (count != 0)
				printf(",%d",array[count]);
				else
				printf("%d",array[count]);
			}
		}
	}
// Doc du lieu vao ==============================================================================
void docDuLieu()
	{
	int count;
	for (count = 0; count <N;count++)
	scanf("%d",&array[count]);
	}
int main()
	{
	scanf("%d",&N);
	docDuLieu();
	xuLy();
	}	
