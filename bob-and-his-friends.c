#include <stdio.h>
#include <math.h>
int main()
    {
        short T;int N;long long a,b,c,friends;
        long long timeFromThisToA,min;
        long long result[10];
        scanf("%hi",&T);
        int count;
        for (count=0;count<T;count++)
            {
                scanf("%d%lli%lli%lli",&N,&a,&b,&c);
                int count2,check=0,checknon=0;
                for (count2=0;count2<N;count2++)
                    {
                        scanf("%li",&friends);
                         // Tat ca moi tang deu su dung con thuc nay de tinh
                        timeFromThisToA = abs(b-friends)+abs(friends-a)+c;
                        if (count2==0) min = timeFromThisToA;
                        // Tim min luon
                        if (timeFromThisToA < min) min = timeFromThisToA;
					      
                    }
                result[count] = min;
            }
        for (count = 0;count<T;count++) printf("%lli\n",result[count]);
	
    }
