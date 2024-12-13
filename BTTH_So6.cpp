#include <stdio.h>
#include <math.h>
int main() {
    int n,num=2,check,count=0;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);
	while (count<n) {
        check=0;
        int i=2;
        while (i<=sqrt(num)) {
            if (num % i==0) {
                check=1;
                break;
            } i++;
        } if (check==0) {
            printf("%d\n", num);
            count++;
        } num++;
    } return 0;
}
