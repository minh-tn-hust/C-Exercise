#include <stdio.h>
int T,N; // 1<=T<=10^4 ; 1<=N<=10^3
long long P, menhGia[1000]; // menh gia vao mang nay
int soLuong[1000] = {0};  // so luong tung dong tien vao mang nay, mang nay can reset truoc moi lan su dung
int checkPvaMenhGia() // check xem P có chia hết cho các phần tử hay không
	{
	int count;
	for (count = 0;count < N;count++) 
		if ((P%menhGia[count]) != 0) return count; // 0<count<N
	return -1; // P đều chia hết cho tất cả các phần tử 
	}
int checkMenhGia()
	{
	int count =0;
	for (count;count<N;count++) 
	if (menhGia[count] > P) return count; // return 0: tất cả các mệnh giá đều lớn hơn P
	return N; // Tất cả các mệnh giá đều bé hơn P
	} 
void input()
	{
	scanf("%d",&T);
	int countT,countN,vitri,demSoLuong=0;
	for (countT=0;countT<T;countT++)
		{
		for (vitri = 0;vitri<N;vitri ++) soLuong[vitri] = 0;
		scanf("%d%d",&N,&P);
		for (countN=0;countN<N;countN++) scanf("%d",&menhGia[countN]);
			{
			vitri = checkMenhGia();
			if (vitri<N) // Tìm vị trí phần tử lớn hơn đầu tiên và in ra nếu có
				{ 
				printf("YES ");
				soLuong[vitri] = 1; 
				for (demSoLuong = 0;demSoLuong<N;demSoLuong++) 
				printf("%d ",soLuong[demSoLuong]);
				}
			else // Không có phần tử nào lớn hơn thì mới tới đây
				{
				if ()
				}
		}
	}	
int main()
	{
	input();	
	}