#include <stdio.h>

int main()
	{
	long long n,k,input,count=0,count1 = 0 ;
	scanf("%lli%lli",&n,&k);
	for (count; count < n;count++)
		{
		scanf("%lli",&input);
		if (input%k == 0) count1 ++;
		}
	printf("%lli",count1);
	}