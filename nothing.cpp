#include "stdio.h"
#include "math.h"
double bp(double x) /* H�m t�nh x*x */
 {
 return x*x;
 }
main()
 {
 int i,j;
 double x=1.0;
 typedef double (*ham)(double);

 ham f[6]; /* Khai bao m�ng con tr� h�m*/
 /* C� th� khai b�o nh- sau double (*f[6](double)*/
 f[1]=bp; f[2]=sin; f[3]=cos; f[4]=exp; f[5]=sqrt;
 /* G�n t�n h�m cho c�c ph�n t� m�ng con tr� h�m */
 while (x<=10.0) /* L�p b�ng gi� tr� */
 {
 printf("\n");
 for (j=1;j<=5;++j)
 printf("%10.2f ",f[j](x));
 x+=0.5;
 }
 }
 
