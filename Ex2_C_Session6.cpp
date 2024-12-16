#include <stdio.h>
int main () {
	int countChan=0,countLe=0,num;
	printf("nhap 5 songuyen: \n");
	for(int i=1;i<6;i++) {
		scanf("%d", &num);
		if(num%2==0) {
			countChan+=1;
		} else {
			countLe+=1;
		}
	} printf("so luong so chna: %d\n", countChan);
	printf("so luong so le: %d\n", countLe);
	return 0;
} 
