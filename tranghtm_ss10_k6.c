#include <stdio.h>

int main(){
	int arr[] = {12,1,7,-9,20,1, 66,77,1,22};
	int num, count =0;
	int n = sizeof(arr)/sizeof(int);
	int appear[n] ;
	
	printf("Nhap phan tu muon tim: ");
	scanf("%d", &num);
	
	for ( int i =0; i< n; i++){
		if ( arr[i] == num){
			count++;
			appear[i] = arr[i];
		}else{
			appear[i] = -1;
		}
	}
	if ( count == 0){
		printf("k xuat hien trong mang!");
	}else{
		printf("Phan tu xuat hien o vi tri: ");
		for ( int i =0; i< n; i++){
			if ( appear[i] != -1 ){
				printf("\t%d", i+1);
			}
		}
		
	}
	
	return 0;
}
