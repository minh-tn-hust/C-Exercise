
#include <iostream>
#define MAX 20
using namespace std;
 
int n;
int Bool[MAX] = { 0 };//��nh d?u chua c� ph?n t? n�o s? d?ng h?t
int A[MAX];//LuBu ho�n v? v�o m?ng A
 
void xuat() {
    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";
    cout << endl;
}
 
void Try(int k) {
    for (int i = 1; i <= n; i++) {
        //Ki?m tra n?u ph?n t? chua du?c ch?n th� s? d�nh d?u
        if (!Bool[i]) 
		{
            A[k] = i-1; // Luu m?t ph?n t? v�o ho�n v?
            Bool[i] = 1;//��nh d?u d� d�ng
            if (k == n)//Ki?m tra n?u d� ch?a m?t ho�n v? th� xu?t
                xuat();
            else
                Try(k + 1);
            Bool[i] = 0;
        }
    }
}
 
int main() {
    n=4;
    Try(1);
}
