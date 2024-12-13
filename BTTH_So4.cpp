#include <stdio.h>
int main() {
	int n;
	printf("nhap vao so nguyen duong n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		if(n%i==0) {
			printf("%d la uoc cua %d\n", i, n);
		}
	} return 0;
}
