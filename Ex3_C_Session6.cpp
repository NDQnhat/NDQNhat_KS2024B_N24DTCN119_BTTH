#include <stdio.h>
int main() {
	char pass[100]="qwerty";
	char input[100];
	printf("nhap mat khau: ");
	gets(input);
	int flag=1;
	for(int i=0;pass[i]!='\0' ||input[i]!='\0';i++) {
		if(pass[i]!=input[i]) {
			flag=0;
			break;
		} else {
			flag=1;
		}
	} if(flag==0) {
		printf("mat khau sai roi");
	} else {
		printf("mat khau dung");
	}
	return 0;
}
