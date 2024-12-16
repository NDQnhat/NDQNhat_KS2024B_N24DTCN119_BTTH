#include <stdio.h>
int main() {
	int num,sum=0;
	for(int i=1;i<6;i++) {
		printf("nhap so nguyen thu %d\n", i);
		scanf("%d", &num);
		if(num%2!=0) {
			sum+=num;
		}
	} printf("tong cav sole trong so vua nhap: %d", sum);
	return 0;
}

