#include <stdio.h>
int main() {
	int stt, tien;
	printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
	printf("1. USD to VND\n");
	printf("2. EUR to VND\n");
	printf("3. GBP to VND\n");
	printf("4. JPY to VND\n");
	printf("5. VND to USD\n");
	printf("6. VND to EUR\n");
	printf("7. VND to GBP\n");
	printf("8. VND to JPY\n");
	printf("Nhap don vi tien te ban muon chuyen doi (1-8)?");
	scanf("%d", &stt);
	printf("nhap vao so tien can chuyen doi: ");
	scanf("%d", &tien);
	switch(stt) {
		case 1:
			printf("%d usd bang %d vnd", tien, tien*23500);
			break;
		case 2:
			printf("%d eur bang %d vnd", tien, tien*25000);
			break;
		case 3:
			printf("%d gbp bang %d vnd", tien, tien*28000);
			break;
		case 4:
			printf("%d jpy bang %d vnd", tien, tien*180);
			break;
		case 5:
			printf("%d vnd bang %d usd", tien, tien/23500);
			break;
		case 6:
			printf("%d vnd bang %d eur", tien, tien/25000);
			break;
		case 7:
			printf("%d vnd bang %d gbp", tien, tien/28000);
			break;
		case 8:
			printf("%d vnd bang %d jpy", tien, tien/180);
			break;
	} return 0;
}
