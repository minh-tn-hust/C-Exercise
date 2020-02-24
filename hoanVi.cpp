
#include <iostream>
#define MAX 20
using namespace std;
 
int n;
int Bool[MAX] = { 0 };//Ðánh d?u chua có ph?n t? nào s? d?ng h?t
int A[MAX];//LuBu hoán v? vào m?ng A
 
void xuat() {
    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";
    cout << endl;
}
 
void Try(int k) {
    for (int i = 1; i <= n; i++) {
        //Ki?m tra n?u ph?n t? chua du?c ch?n thì s? dánh d?u
        if (!Bool[i]) 
		{
            A[k] = i-1; // Luu m?t ph?n t? vào hoán v?
            Bool[i] = 1;//Ðánh d?u dã dùng
            if (k == n)//Ki?m tra n?u dã ch?a m?t hoán v? thì xu?t
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
