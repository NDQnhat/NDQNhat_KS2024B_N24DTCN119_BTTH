#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c;
	printf("nhap vao a,b,c de giai pt bac 2: ax^2+bx+c=0\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("phuong trinh vua nhap: %dx^2+%dx+%d\n", a, b, c);
	if(a==0) {
		printf("phuong trinh bac 1 co nghiem: %.2f", -(float)c/(float)b);
	} float denta=b*b-4*a*c;
	if(denta>0) {
		printf("phuong trinh cp 2 nghiem  pb: %.2f, %.2f", (-(float)b+sqrt(denta))/2.0*(float)a, (-(float)b-sqrt(denta))/2.0*(float)a);
	} else {
		if(denta==0) {
			printf("phuong trinh co nghiem keep: %.2f", -(float)b/2.0*(float)a);
		} else {
			printf("phuong trinh k co nghime thuc");
		}
	} return 0;
} 
