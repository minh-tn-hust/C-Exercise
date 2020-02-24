#include <stdio.h>

int dayofweek(int y, int m, int d)	/* 1 <= m <= 12,  y > 1752 (in the U.K.) */
    {
        
        return (d+=m<3?y--:y-2,23*m/9+d+4+y/4-y/100+y/400)%7  ;
    }
int main()
	{
	printf("%d",dayofweek(2020,2,17));
	}
