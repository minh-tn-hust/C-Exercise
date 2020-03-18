#include "stdio.h"
#include "math.h"
double bp(double x) /* Hµm tİnh x*x */
 {
 return x*x;
 }
main()
 {
 int i,j;
 double x=1.0;
 typedef double (*ham)(double);

 ham f[6]; /* Khai bao m¶ng con trá hµm*/
 /* Cã thÓ khai b¸o nh- sau double (*f[6](double)*/
 f[1]=bp; f[2]=sin; f[3]=cos; f[4]=exp; f[5]=sqrt;
 /* G¸n tªn hµm cho c¸c phÇn tö mÈng con trá hµm */
 while (x<=10.0) /* LËp b¶ng gi¸ trŞ */
 {
 printf("\n");
 for (j=1;j<=5;++j)
 printf("%10.2f ",f[j](x));
 x+=0.5;
 }
 }
 
