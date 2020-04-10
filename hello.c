#include <stdio.h>
#include <math.h>
int check(int N)
	{
		int count,check1 = 0;
		for (count = 2; count <= sqrt(N);count++)
			{
				if (N%count==0)
				{	check1 = 1;
					return 1;
				}  
				
			}
		return check1;
	}
int main()
	{
		int count,dem = 0;
		int array[3401];
		for (count = 2; count < 31608;count++)
			{
				
				if (!check(count)) 
				{
				    array[dem] = count;
					dem++;
				}
			}
		int T;
		count = 0; dem = 0;
		scanf("%d",&T);
		while (T--)
		    {
		        long X,K;
		        scanf("%ld%ld",&X,&K);
		        while (dem<=3400||X!=1)
		            {
		                if (X%array[dem] == 0)
		                    {
		                        count++;
		                        X/= array[dem];
		                        if (count >= K) break;
		                    }
		                else dem++;
		            }
		        if (count >= K) printf("1");
		        else printf("0");
		    }
		
	}


