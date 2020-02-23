#include <stdio.h>
int T,N; // 1<=T<=10^4 ; 1<=N<=10^3
long long P, menhGia[1000]; // m?nh gi� vao m?ng n�y
long long soLuong[1000] = {0};  // so luong tung dong tien vao mang nay, mang nay can reset truoc moi lan su dung

int checkQuanHeMenhGia() // Xem m?nh gi� l?n hon c� ph?i l� b?i c?a m?nh gi� b� hon hay kh�ng
    {
    int count,dem=0;
    for (count = 0;count < N-1;count++)
        {
	        if (menhGia[count+1]%menhGia[count] == 0) dem++;
        }
    return dem; // dem = N-1 th� t?t c? c�c ph?n t? d?u c� quan h? v?i nhau
    }
int checkMenhGia()
	{
	int count =0;
	for (count;count<N;count++) 
	if (menhGia[count] > P) return count; // return 0: t?t c? c�c m?nh gi� d?u l?n hon P
	return N; // T?t c? c�c m?nh gi� d?u b� hon P
	}
void yes()
	{
	int vitri1 =N-1,dem = 0; 
	for (vitri1;vitri1>=0;vitri1--)
		if(P%menhGia[vitri1] != 0) {soLuong[vitri1] = P/menhGia[vitri1]+1;break;}
	vitri1 = N-1;
	while (P>0)
		{
		if ((P - menhGia[vitri1]) ==0) {soLuong[vitri1] = dem;vitri1--;dem=0;}
		else
			{
			P-= menhGia[vitri1];
			dem++;
			}
		}
	soLuong[vitri1] = dem;vitri1--;dem=0;
	}
void input()
	{
	scanf("%d",&T);
	int countT,countN,vitri,demSoLuong=0;
	for (countT=0;countT<T;countT++)
		{
		memset(soLuong, 0, sizeof(soLuong));
		scanf("%d%lli",&N,&P);
		for (countN=0;countN<N;countN++) scanf("%lli",&menhGia[countN]);
			{
			vitri = checkMenhGia();
			if (vitri<N) // T�m v? tr� ph?n t? l?n hon d?u ti�n v� in ra n?u c�
				{ 
	 			printf("YES ");
				soLuong[vitri] = 1; 
				for (demSoLuong = 0;demSoLuong<N;demSoLuong++) 
				printf("%lli ",soLuong[demSoLuong]);
				printf("\n");
				}
			else // Kh�ng c� ph?n t? n�o l?n hon th� m?i t?i d�y
				{
				if ((checkQuanHeMenhGia() == N-1) && (P%menhGia[N-1] == 0)) printf("NO\n");
				else
					{
					yes();
					int demm;
					printf("YES ");
					for (demm = 0;demm<N;demm++) printf("%lli ",soLuong[demm]);
					printf("\n");
					}
				}
			}
		}
	}
int main()
	{
	input();	
	}
