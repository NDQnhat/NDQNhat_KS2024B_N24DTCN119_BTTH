#include <stdio.h>
#include <math.h>
int main() {
	int num, test=1;
	printf("nhap vao 1 so nguyen duong: ");
	scanf("%d", &num);
	for(int i=2;i<=sqrt(num);i++) {
		if(num%i==0) {
			test=0;
		} 
	} if(test!=1) {
		printf("%d khong phai so nguyen to", num);
	} else {
			printf("%d la so nguyen to", num);
	} return 0;
}
