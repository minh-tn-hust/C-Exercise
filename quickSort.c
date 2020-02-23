#include <stdio.h>
long array[100000];
int chiaMang(long array[],long left,long right);
void quickSort(long array[],long left,long right);
int swap(long *a,long *b)
	{
	long hold;
	hold = *a;
	*a = *b;
	*b = hold;
	}
int chiaMang(long array[],long left,long right) // a[left] ........... a[right]
// right và left là giới hạn của phần cần chia
	{
	long *pivot = &array[left + (right - left)/2]; // Lấy phần tử chốt ở giữa mảng, sử dụng con trỏ để tiện cho việc đổi chỗ
    swap(pivot,&array[right]); // đổi chỗ pivot và phần tử cuối mảng 
    pivot = &array[right];
    int count=left, hold = left; // count duyệt mảng từ left đến right -1 ; hold dùng để dữ lại phần tử lớn pivot. Nếu a[count] < pivot thì đổi chỗ a[count] và a[hold]
    while (count<right)
        {
        if (array[count] > *pivot) {count++;continue;}
        else
            {
            swap(&array[count],&array[hold]);
            count ++;
            hold ++;
            }
        }
    swap(pivot,&array[hold]);
    quickSort(array,left,hold-1); // gọi phần bên trái chạy từ left đến hold -1
    quickSort(array,hold+1,right); // gọi phần bên phải chạy từ hold + 1 đến right
	}
void quickSort(long array[],long left,long right)
    {
    if (left > right) 1; // Nếu left == right thì dừng đệ quy
    else
        {
        chiaMang(array,left,right);
        }
    }
long T;
long main()
	{
	scanf("%ld",&T);
	long count;
	for (count = 0; count < T;count ++) scanf("%ld",&array[count]);
	quickSort(array,0,T-1);
	
	for (count = 0; count < T;count ++) printf("%d\n",array[count]);
	}
