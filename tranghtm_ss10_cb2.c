#include <stdio.h>

int main(){
	int arr[8] = {1,56,2,-9,90,44,66,77};
	
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

	printf("\nKq: ");
	for ( int i =0; i< 8; i++){
		printf("\t%d", arr[i]);
	}
	
	return 0;
}
