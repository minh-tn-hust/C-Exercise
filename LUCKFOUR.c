#include <stdio.h>
#include <string.h>
int T,N; // 1<=T<=10^4 ; 1<=N<=10^3
long long P, D[1000]; 
long long C[1000] = {0}; 

int checkQuanHeD() // // this function check that the denomination Di was a multiples of the Di-1
    {
    int count,dem=0;
    for (count = 0;count < N-1;count++)
        {
        if (D[count+1]%D[count] == 0) dem++;
        }
    return dem;
    }
int checkBigger() //this function check to see if there's any elements which is bigger than P. If it is, return the position.
	{
	int count =0;
	for (count;count<N;count++) 
	if (D[count] > P) return count; 
	return N; // all elements of D[] is smaller then P
	}
void yes() // this funtion use to print the result if the answer is YES (begin at line 61)
	{
	int position1 =N-1,dem = 0; // N-1 is the number of denomination
	for (position1;position1>=0;position1--)                         //
	if(P%D[position1] != 0) {C[position1] = P/D[position1]+1;break;} // Use if checkQuanHeD() == N-1 wrong
	// the following lines use to print Ci if P%D[N-1] == 0 wrong
	position1 = N-1; 
	while (P>0)
		{
		if ((P - D[position1]) ==0) {C[position1] = dem;position1--;dem=0;}
		else
			{
			P-= D[position1];
			dem++;
			}
		}
	C[position1] = dem;position1--;dem=0;
	}
void input() 
	{
	scanf("%d",&T);
	int countT,countN,position,demC=0;
	for (countT=0;countT<T;countT++)
		{
		memset(C, 0, sizeof(C)); // reset C array to begin a new test
		scanf("%d%lli",&N,&P);
		for (countN=0;countN<N;countN++) scanf("%lli",&D[countN]);
			{
			position = checkBigger(); 
			if (position<N) // check the bigger element, print it out
				{ 
	 			printf("YES ");                       // Ex: 1
				C[position] = 1;                      // 	 2 6
				for (demC = 0;demC<N;demC++)          //     1 7
				printf("%lli ",C[demC]);              //output :  YES 0 1
				printf("\n");
				}
			else
				{
				if ((checkQuanHeD() == N-1) && (P%D[N-1] == 0)) printf("NO\n"); // if all Di was a multiples of the Di-1 and P%D[max] == 0 printf("NO");
				else
					{
					yes(); 
					int demm;
					printf("YES ");
					for (demm = 0;demm<N;demm++) printf("%lli ",C[demm]);
					printf("\n");
					}
				}
			}
		}
	}
int main()
	{
	input();	
	}