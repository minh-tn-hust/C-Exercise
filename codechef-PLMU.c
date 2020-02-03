#include <stdio.h>

int main()
	{	long long result[20];
		int T;// 1<T<20
		long long check,tong0,tong2,tong; 
// countZero : dem so phan tu = 0
// countTwo : dem so phan tu = 2
// check : dung de doc phan tu mang
		unsigned countZero,countTwo,N,countArray; // N <40000
		scanf("%d",&T);
		int countTest;
		for (countTest=0;countTest<T;countTest++)
			{
			countZero =0; countTwo = 0;
			scanf("%u",&N);
			for (countArray=0;countArray<N;countArray++)
				{
				scanf("%lli",&check);
				if (check == 0) countZero++;
				if (check == 2) countTwo++;
				}
			if (countZero < 2) tong0 = 0; else tong0 = countZero*(countZero-1)/2;
			if (countTwo < 2) tong2 = 0; else tong2 = countTwo*(countTwo-1)/2;
			result[countTest] = tong0+tong2;
			}
			for (countTest=0;countTest<T;countTest++) printf("%lli \n",result[countTest]);
	}
