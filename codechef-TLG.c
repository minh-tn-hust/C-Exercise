#include <stdio.h>
#include <math.h>
int main()
	{
	long round,stPoints,ndPoints,stTotal=0,ndTotal=0,max,hold,winner;
	scanf("%ld",&round);
	int count=0;
	do
		{
		scanf("%ld%ld",&stPoints,&ndPoints);
		stTotal += stPoints;
		ndTotal += ndPoints;
		hold = stTotal - ndTotal;
		if (count == 0) 
			{
			max = abs(hold);
			if (hold > 0) winner = 1;
			if (hold < 0) winner = 2;
			}
		if (abs(hold)> max)
			{
			max = abs(hold);
			if (hold > 0) winner = 1;
			if (hold < 0) winner = 2;
			}
		count++;
		}
	while (count < round);
	printf("%ld %ld",winner,max);
	}
//	5
//
//89 134
//140 82
//90 110
//112 106
//88 90
