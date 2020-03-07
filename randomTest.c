 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(){
    long long rN,rP,rDi,demT,demDi;
    long long T,N,P;
    srand((long long)time(0));
    printf("Nhap T = ");scanf("%lli",&T);
    printf("\n%lli\n",T);
    for (demT = 0 ; demT<T;demT++)
    	{
    	rN = rand()%50+1;
    	rP = rand()%50+1;
    	printf("%3lli %3lli\n",rN,rP);
    	for (demDi= 0;demDi<rN;demDi++)
    	printf("%3lli ",rand()%50+1);
    	printf("\n");
    	for (demDi= 0;demDi<rN;demDi++)
    	printf("%3lli ",rand()%50+1);
    	}
//    for( i = 0; i < 5; ++i){
//        r = rand();
//        printf("Rand %d is %d\n",i, r);
    }    

