#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
	{
	int i = 3, j = 6;
	int *p1, *p2;
	p1 = &i;
	p2 = &j;
//	*p2 = *p1; // thay doi gia tri con tro
	p1 = p2; // lúc này con tr? p1 ?ã b? thay ??i 
	p1 --;
	printf("%d %d\n",*p1,*p2);	
	printf("%d %d",i,j);
	}
