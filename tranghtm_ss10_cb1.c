#include <stdio.h>

int main(){
	int arr[] = {12,1,7,-9,20,1, 66,77,1,22};
	int num, count =0;
	int n = sizeof(arr)/sizeof(int);
	
	printf("Nhap phan tu muon tim: ");
	scanf("%d", &num);
	
	printf("Phan tu xuat hien o vi tri: ");
	for ( int i =0; i< n; i++){
		if ( arr[i] == num){
			count++;
			printf("\t%d", i+1);
		}
	}
	if ( count == 0){
		printf("k xuat hien trong mang!");
	}
	
	return 0;
}
