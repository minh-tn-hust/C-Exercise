#include <stdio.h>
#include <conio.h>
int main()	
	{
	typedef struct 
		{
		int ngay,thang,nam;
		} date;
	typedef struct
		{
		char hoten[30];
		date ngaysinh;
		} nhanvien;
	nhanvien c,*poiter;
	poiter = &c;
	printf("Nhap ho va ten thi sinh ");gets(poiter->hoten);
	printf("Nhap ngay sinh (nn tt nn) "); scanf("%d%d%d",poiter->ngaysinh.ngay,poiter->ngaysinh.thang,poiter->ngaysinh.nam);
	printf("Thong tin thi sinh :");
	printf("Ho va ten : ");puts(c.hoten);
	printf("Ngay sinh :%d/%d/%d",poiter->ngaysinh.ngay,poiter->ngaysinh.thang,poiter->ngaysinh.nam);
	}
