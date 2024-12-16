#include <stdio.h>
int main() {
	int n;
	printf("nhap 1 so ngnyr bat ky: ");
	scanf("%d", &n);
	for(int i=n;i>=1;i--) {
		if(n%i==0) {
			printf("%d\n", i);
		}
	} return 0;
}
