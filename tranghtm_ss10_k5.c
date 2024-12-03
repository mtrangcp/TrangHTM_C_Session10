#include <stdio.h>

int main(){
	int arr[8] = {1,56,2,-9,90,44,66,77};
	int num, start = 0, mid;
	int end = sizeof(arr)/ sizeof(int);
	
	printf("Mang ban dau: ");
	for ( int i =0; i< 8; i++){
		printf("\t%d", arr[i]);
	}
	
	//bubble sort
	for ( int i = 0; i< 7; i++){
		for ( int j = 0; j< 7-i; j++){
			if ( arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printf("\nKq: \t");
	for ( int i =0; i< 8; i++){
		printf("\t%d", arr[i]);
	}
	
	printf("\n\nNhap so muon tim: ");
	scanf("%d", &num);
	
	while( start <= end){
		mid = ( start + end)/2 ;
		if ( arr[mid] == num){
			printf("\nVi tri phan tu muon tim: %d", mid+1);
			return 1;
			
		}else if ( arr[mid] > num){
			end = mid -1;
		}else{
			start = mid+1;
		}
	}
	
	printf("\nKhong tim thay phan tu muon tim!");
	
	return 0;
}
