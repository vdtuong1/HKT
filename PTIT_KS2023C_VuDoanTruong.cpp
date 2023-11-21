#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, m;
	printf("nhap vao so dong cua mang 2 chieu");
	scanf("%d", &n);
	printf("nhap vao so cot cua mang 2 chieu");
	scanf("%d", &m);
	int numbers[n][m];
	int keynumbers;
    
do{
	printf("************************MENU**************************\n");
	printf("1. Nhap gia tri cua mang\n");
	printf("2. In cac phan tu trong mang theo ma tran\n");
	printf("3. Tinh gia tri cac phan tu chia het cho 2 va 3 trong mang\n");
	printf("4. In cac phan tu va tong cac phan tu nam tren duong bien, duong cheo chinh va duong cheo phu\n");
	printf("5. Su dung thuat toan sap xep va lua chon sap xep cac phan tu tang dan theo cot cua mang\n");
	printf("6. In ra cac phan tu la so nguyen trong mang\n");
	printf("7. Su dung thuat toan noi bot sap xep cac phan tu tren duong cheo chinh cua mang giam dan\n");
	printf("8. Nhap gia tri 1 mang 1 chieu gom m phan tu va chi so dong muon chen vao mang, thuc hien chen vao mang 2 chieu\n");
	printf("9. Thoat\n");
	printf("Lua chon cua ban");
	int choice;
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("Nhap gia tri cac phan tu mang\n");
			for(int i=0;i<n;i++){
			    for(int j=0;j<m;j++){
					printf("numbers[%d][%d]=", i, j);
					scanf("%d", &numbers[i][j]);
				}
			}
			break;
		case 2:
			printf("gia tri cac phan tu trong mang\n");
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					printf("%d\t", numbers[i][j]);
				}
				printf("\n");
			}
			printf("\n");
		    break;
		case 3:
			printf("Cac phan tu chia het cho 2 va 3 trong mang la");
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(numbers[i][j]%2==0 && numbers[i][j]%3==0){
						printf("%d\t\n",numbers[i][j]);
					}
				}
			}
		    break;
		case 4:
			printf("cac phan tu nam tren duong bien:\n");
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(i==0 || i== n-1 || j==0 || j== m-1){
						printf("%d\t", numbers[i][j]);
					}
				}
			}
			if(n==m){
				printf("\nCac phan tu nam tren duong cheo chinh:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==j){
							printf("%d\t",numbers[i][j]);
						}
					}
				}
				printf("\ncac phan tu nam tren duong cheo phu:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i+j==n-1){
							printf("%d\t",numbers[i][j]);
						}
					}
				}
			}else{
				printf("Day la ma tran vuong khong co cheo chinh va cheo phu\n");
			}
		    break;
		case 5:
			printf("phan tu sap xep theo thu tu tang dan");
			for (int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(numbers[i] > numbers[j]){
						int temp = numbers[i];
						numbers[i] = numbers[j];
						numbers[j] = temp;
					}
				}
			}
		    break;
		case 6:
		    break;
		case 7:
		    break;
		case 8:
		    break;
		case 9:
		    exit(0);
			default:
			 printf("vui long nhap tu 1-9");								
	}
}while(1==1);
	
	
	
	
}	
