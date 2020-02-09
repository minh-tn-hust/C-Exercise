#include <stdio.h>
#include <math.h>
int cacSo[10][100];
int Array[100] = {23614,13870,15140,14258,5796,28526,
26295,
10817,
4838,
7203,
23739,
3402,
19308,
15028,
8208,
7856,
3316,
13048,
3321,
2221,
7197,
1613,
7755,
26581,
16082,
20412,
1439,
3891,
24275,
12680,
17832,
20442,
6398,
13815,
6074,
1143,2457,
21171,
11206,
7996,
28146,
5786,
3000,
9923,
21219,
12903,
23394,
4897,
29452,
10358,
12053,
29046,
28449,
16310,
23876,
27227,
4800,
1752,
10269,
15675,
16956,
2410,
27950,
19778,
6020,
26842,
3745,
29236,
12935,
24457,
22437,
2636,9891,
511,
29094,
21420,
6429,
23865,
4581,
3675,
13434,
9575,
9297,
27090,
29524,
14194,
24332,
8748,
6521,
25204,
20567,
19906,
24693,
22205,
29895,
11380,
19000,
11592,
20961,
7973};
// Radix sort demo voi so co 5 chu so, 100 phan tu
// So mu
int mu(int coSo,int soMu)
	{
	int count,s=1;;
	for (count=0;count<soMu;count++)
		{
		s*=coSo;
		}
	return s;
	}
// Lay chu so hang thu N ===============================================================
int theNumber(int So,int donVi)
    {
    return (((So-So%(mu(10,donVi-1)))/mu(10,donVi-1))%10);
    }

// ===============================================================================================
int vitri[10]={0,0,0,0,0,0,0,0,0,0};
void phanLoai(int so,int viTri)
	{
	cacSo[viTri][vitri[viTri]] = so;
	vitri[viTri]++;
	}
//Connect con loi  
// cacSo[so Ngan][Phan tu]: mang phan chia
// vitri : luwu laij soos luowngj owr mooix ngawng
void connect()
	{
	int count=0,dem=0,count2=0,demVitri = 0;
	while (count != 100)
		{
		if (vitri[dem] == 0 ) dem++;
		else
			{
			Array[count] = cacSo[dem][demVitri];
			count++;
			demVitri++;
			if (demVitri == vitri[dem]) {dem++; demVitri = 0;}
			}
		}
	for (count = 0;count<10 ; count++) vitri[count] = 0;
	}
int main()
	{
	int count = 0,count2=1,count3;
	for (count2=1;count2<=5;count2++)
	{
	for (count=0;count<100;count++) phanLoai(Array[count],theNumber(Array[count],count2));
	connect();
	for (count3=0;count3<10;count3++) vitri[count3] = 0;
	}
	printf("Minh");
	
    }

    

