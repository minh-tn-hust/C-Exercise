#include <stdio.h>
#include <math.h>
int array[3401];
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
void assign(void)
	{
		int count,dem = 0;
		
		for (count = 2; count < 31608;count++)
			{
				
				if (!check(count)) 
				{
				    array[dem] = count;
					dem++;
				}
			}
	}
int main()
	{
		
		int T;
		assign();
		scanf("%d",&T);
		while (T--)
		    {	int count=1,dem=0;
		        long X,K;
		        scanf("%ld%ld",&X,&K);
		        while (X!=1||dem<=3400)
		            {
		                if (X%array[dem] == 0)
		                    {
		                        count++;
		                        X/= array[dem];
		                        if (count >= K) break;       
		                    }
		                else 
							{	
								if (array[dem] > sqrt(X)) break;
								dem++;
							}
		                
		            }
		        if (count >= K) printf("1");
		        else printf("0");
		    }
		
	}


