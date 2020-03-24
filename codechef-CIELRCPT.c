#include <stdio.h>
#include <math.h>
long price[40];
int phantich(long p,long last)
	{	int count = 0;
		while (p)
		{
			if (price[last] > p ) last--;
			else
			{
				p-= price[last];
				count++;
			}
		}
		return count;
	}
int main()
	{
		int T;
		scanf("%d",&T);
		int count;
		for (count = 0; count <= 11; count ++)
			price[count] = (long)pow(2,(float)count);
		while (T--)
			{
				long p;
				scanf("%ld",&p);
				int theMaxPrice = (int) (log(p)/log(2));
				printf("%d\n",phantich(p,11));
			}
	}

