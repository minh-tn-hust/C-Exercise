#include <stdio.h>
int taoso[100] = {0,0,0,0,0} ;
int n;
//sinh so co 5 chu so
int count =0;

void check() // hàm kiểm tra xem có thể chia số thành 2 phần bằng nhau được hay không
	{
	if (taoso[n-1] != 0)
	{
	int i,s=0,hold;
	for (i = 0; i < n;i++) s+= taoso[i];
	if (s%2 == 0) 	
		{
		hold = s/2;
		s=0;
		for (i = 0; i < n;i++) 
			{
			s+= taoso[i];
			if (s == hold) 
			{
				int count;
				for (count = n-1;count >= 0;count--) 
					{
					printf("%d",taoso[count]);
					}
				printf("\n");
			}
			}
		}
	}
	
	}
int sinhso(int vitri) // hàm sinh số có n chữ số
	{
	
	int i;
	for (i=0;i<10;i++)
		{
		taoso[vitri] = i;
		if (vitri == 0) check();
		else sinhso(vitri-1);
		}
	if (taoso[n-1] == 9) return 1;
	
	}
	
int main()
	{
	scanf("%d",&n);
	sinhso(n-1);

	}
