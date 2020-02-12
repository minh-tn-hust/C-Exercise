#include <stdio.h>
int T,N; // 1<=T<=10^4 ; 1<=N<=10^3
long long P, menhGia[1000]; // menh gia vao mang nay
int soLuong[1000] = {0};  // so luong tung dong tien vao mang nay, mang nay can reset truoc moi lan su dung
int checkMenhGia()
	{
	int count =0;
	for (count;count<N;count++) 
	if (menhGia[count] > P) return count; // return 0: tat cac menh gia lon hon P
	return N; // Tat ca cac menh gia deu be hon P
	} 
void input()
	{
	scanf("%d",&T);
	int countT,countN,vitri,demSoLuong=0;
	for (countT=0;countT<T;countT++)
		{
		for (vitri = 0;vitri<N;vitri ++) soLuong[vitri] = 0;
		scanf("%d%d",&N,&P);
		for (countN=0;countN<N;countN++) scanf("%d",&menhGia[couuntN]);
			{
			vitri = checkMenhGia()-1;
			while ((vitri != 0)||(P > 0))
				{
				P-=menhGia[vitri];
				demSoLuong++;
				if (P < menhGia[vitri] )
					{
					soLuong[vitri] = demSoLuong;
					demSoLuong = 0;
					vitri--;
					}
				}
			if (P == 0) printf("NO\n");
			else
				{
				printf("YES ");
				for (vitri = 0; vitri < N;vitri++) printf("%d ",soLuong[vitri]);
				printf("\n");
				}
			}
		}
	}
int main()
	{
	input();	
	}
