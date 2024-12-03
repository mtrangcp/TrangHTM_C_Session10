#include <stdio.h>

int main(){
	int n;
	printf("Nhap so hang va cot cho mang: ");
	scanf("%d", &n);
	
	if ( n < 1 ){
		printf("\nDu lieu ban nhap khong hop le. Vui long nhap so nguyen duong!");
		return 1;
	}
	
	int arr[n][n] ;
	
	for ( int i = 0 ; i < n ; i++){
		for ( int j = 0 ; j < n ; j++){
			printf(" Nhap phan tu thu %d cua hang %d: ",j+1, i+1);
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nKq nhap: \n");
	for ( int i = 0 ; i < n ; i++){
		for ( int j = 0 ; j < n ; j++){
			printf ( "\t%d", arr[i][j] );
		}
		printf("\n");
	}
	
	printf("\nDuong cheo phu ban dau: \n");
	for ( int i = 0 ; i < n ; i++){
		for ( int j = 0 ; j < n ; j++){
			if ( j + i == n-1 ){
				printf ( "\t%d", arr[i][j] );
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
	
	printf("\nDuong cheo phu da sap xep: \n");
	for ( int k =0; k< n; k++){
		for ( int i = 0 ; i < n ; i++){
			for ( int j = 1 ; j < n ; j++){
				if ( ( j + i == n-1 ) && arr[i][j] < arr[i+1][j-1]){
					int temp = arr[i][j];
					arr[i][j] = arr[i+1][j-1];
					arr[i+1][j-1] = temp;
				}
			}
		}
	}
	
	for ( int i = 0 ; i < n ; i++){
		for ( int j = 0 ; j < n ; j++){
			if ( j + i == n-1 ){
				printf ( "\t%d", arr[i][j] );
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
	return 0;
}
