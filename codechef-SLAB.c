#include <stdio.h>
#define LEVEL 250000
float tax[6] = {0.0,0.05,0.10,0.15,0.20,0.25,0.30};
int main()
    {
    int T;
    scanf("%d",&T);
    long N,salaryTax=0;
    int taxCount,countT,countN;
    for (countT = 0; countT < T;countT ++)
        {
        scanf("%ld",&N);
        taxCount = N/LEVEL;
        if (taxCount > 6) taxCount = 6;
        for (countN = 0; countN < taxCount;countN++)
            {
            salaryTax += LEVEL*tax[countN]; 
            }
        if (countN == 0) printf("%ld",N);
        else
        {
		salaryTax += (N%(LEVEL*countN))*tax[countN];
        printf("%ld\n",N-salaryTax);
    	}
        salaryTax = 0;
        }



    }
