#include <stdio.h>
int thongTin[4][4] = {0}; // Thông tin đầu vào được biến thành ma trận
int result[150]; // Mảng dùng để lưu kết quả
int T,N;
#define MAX 20 
int Bool[20] = { 0 }; // Mảng boolean dùng trong việc tạo hoán vị
int A[20],B[20]; // mảng A dùng để chứa hoán vị, mảng B dùng để chứa thongTin[hoán vị][cột] 
int money[24]; // Mảng dùng để chứa kết quả của 24 hoán vị
int dem=0;
// Reset lại mảng và hệ thống đếm ================================================================================
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
// Ép dữ liệu vào mảng B ( Thủ công vcl) ===========================================================================
void put()
	{
	B[0]=thongTin[A[1]][0];
	B[1]=thongTin[A[2]][1];
	B[2]=thongTin[A[3]][2];
	B[3]=thongTin[A[4]][3];
	}
// Sắp xếp các phẩn từ trong mảng B ==============================================================================
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
// Dùng để tìm max trong 24 hoán vị, đó là kết quả cuối cùng của 1 test case
int max()
	{
	int count=0,max1=money[0];
	for (count = 0;count <24;count++)
		{
		if (money[count] > max1 ) max1 = money[count];
		}
	return max1;
	}
// Check xem có bộ phim nào không được chiếu hay không
int checked()
	{
	int count1,count2,dem1=0,check=0;
	for (count1 = 0;count1 < 4;count1 ++) if (B[count1] == 0)dem1++;
	return dem1;
	}	
// Hàm tạo hoán vị, mỗi khi tạo được 1 hoán vị sẽ xử lý trực tiếp cho ra số tiền mà Chef kiếm được ===================================
void Try(int k) {
	int i;
    for (i = 1; i <= 4; i++) {
        if (!Bool[i]) 
		{
            A[k] = i-1; 
            Bool[i] = 1;
            if (k == 4)//
                	{
                	put();// Ép thongtin vào mảng B
                	sort(); // Sort mảng B
                	money[dem] = B[3]*100+B[2]*75+B[1]*50+B[0]*25-checked()*100; // Tính tiến từ mảng B và checked()
                	dem++; // Bộ đếm mảng money
					}
            else
                Try(k + 1);
            Bool[i] = 0;
        }
    }
}
// Nhập input ở đây, chuyển input -> ma trận =======================================================================================
void dauVao()
	{
	scanf("%d",&T);
	int countT,countN;
	int hour,ifilm;
	char film;
	for (countT=0;countT<T;countT++)
		{
		
		scanf("%d",&N);
//  Ép thông tin vào ma trận
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
// Cuối cùng nè ==========================================================================================
int main()
	{
	dauVao();
	int count;
	long long dem = 0;
	for (count = 0;count<T;count++) {printf("%d\n",result[count]);dem+=result[count];}
	printf("%lli",dem);
	}
