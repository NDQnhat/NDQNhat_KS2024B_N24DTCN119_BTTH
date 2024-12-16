#include <stdio.h>
int main() {
	int tien,soThang;
	float lai;
	printf("nhap vao tien gui ban dau: ");
	scanf("%d", &tien);
	printf("nhap lai saut thnag: ");
	scanf("%f", &lai);
	printf("nhap so thang guii: ");
	scanf("%d", &soThang);
	int tienNhan=tien;
	for(int i=1;i<=soThang;i++) {
		tienNhan=tienNhan*lai+tienNhan;
	} printf("tien lai: %d\n", tienNhan-tien);
	printf("tien nhan duoc: %d", tienNhan);
	return 0;
}
