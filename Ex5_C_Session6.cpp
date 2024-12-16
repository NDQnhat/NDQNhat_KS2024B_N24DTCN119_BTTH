//doi lai tu ex9 session4
#include <stdio.h>
int main() {
	int day,month,year;
	printf("nhap vao thang, nam:\n");
	scanf("%d", &month);
	scanf("%d", &year);
	if(year<0) {
		printf("nam khong hop le");
		return 1;
	} else {
		printf("nam hop le\n");
		switch(month) {
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
				printf("thang %d cua nam %d co 31ngay", month, year);
				break;
			case 4:case 6:case 9:case 11:
				printf("thang %d cua nam %d co 30 ngay", month, year);
				break;
			case 2:
				if((year%4==0&&year%100!=0) ||(year%100==0 && year%400==0)) {
					printf("thang %d cua nam %d co 29 ngay", month, year);
					break;
				} else {
					printf("thnagn %d cua nam %d co 28 ngay", month, year);
					break;
				}
			default:
				printf("thang khong hop le");
				break;
		}
	} return 0; 
}	
