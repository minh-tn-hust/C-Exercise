#include <stdio.h>
#include <math.h>
#define MAX 100000
int T;long long N,K;
long long coins[MAX]; // Đây là mảng chứa số lượng coin trong các bag ===================================================================
long long soDu[MAX];  // Đây là mảng chứa số dư của mỗi túi cho K =======================================================================
long long soThem[MAX] = {0}; // Đây là mảng chứa số lượng coin thêm vào để túi đó có số lượng coin chia hết cho K========================
long long result[1000]; // Đây là mảng kết quả
void laySoDu() // Hàm lấy số dư từ mảng coin rồi cho vào mảng soDu[MAX], số coint cần thêm vào mảng soThem[MAX] =================================================================
	{
	int countN;
	for (countN = 0;countN<N;countN++)
		{
		soDu[countN] = coins[countN]%K;// Lấy số dư
		if (soDu[countN] != 0)
		soThem[countN] = K-soDu[countN]; // Lấy số thêm
		}
	}
int checkC() // Hàm tìm kiếm vị trí C, nếu như số lượng coin lấy ra trong C túi đầu tiên (lấy ra số dư) có tổng lớn hơn số lượng cần thêm vào từ c trở đi thì break, vị trí gặp đầu tiên này sẽ cho R min ==
	{
	long long tongDu2=0,tongThem1=0,tongThem2=0,countDu;
	for (countDu = 0; countDu < N;countDu++)
		{
		tongThem1+=soThem[countDu]; // Tổng số thêm của tất cả các túi
		}
	for (countDu = 0;countDu<N;countDu++)
		{
		tongThem2+=soThem[countDu]; // Tổng số thêm của C túi đầu tiên
		tongDu2+=soDu[countDu];     // Tổm số dư của C túi đầu tiến (số coin lấy ra)
		if (tongDu2 >= (tongThem1-tongThem2))  // tongThem1-tongThem2 : tổng số coin cần thêm vào từ túi c trở đi
		return tongDu2-(tongThem1-tongThem2);
		}
	}
void input() // Nhập dữ liệu đầu vào
	{
	int check;
	int countT;
	long long countN;
	scanf("%d",&T);
	for (countT=0;countT<T;countT++)
		{
		for (countN  = 0;countN<N;countN++) soThem[countN] = 0;
		scanf("%lli",&N);scanf("%lli",&K);
		for (countN=0;countN<N;countN++)
			{
			scanf("%lli",&coins[countN]);
			}
// Xu ly bai toan bat dau tu day =====================================				
		laySoDu(); // Gọi hàm để đẩy số dư, số thêm vào mảng
		result[countT] = checkC();  // Kết quả
		}

	}
int main()
	{
	input();
	int count;
	for (count = 0;count<T;count++) printf("%lli\n",result[count]);	
	}
