#include <stdio.h>
int main() {
	int time,basicSalary;
	float phuCap, salary;
	printf("nhap vao so gio lam viec trong thang: ");
	scanf("%d", &time);
	printf("nhap vao muc luong theo gip: ");
	scanf("%d", &basicSalary);
	if(time>160) {
		phuCap=0.1;
		salary=basicSalary*time+basicSalary*time*phuCap;
	} else {
		phuCap=0;
		salary=basicSalary*time;
	} printf("tong tien luong la: %f\n", salary);
	printf("luong co ban la:%d,phu cap la:%f\n", basicSalary, phuCap);
	return 0;
}
