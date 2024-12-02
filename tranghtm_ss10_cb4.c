#include <stdio.h>

int main(){
	int arr[8] = {1,56,2,-9,90,44,66,77};
	
	printf("Mang ban dau: ");
	for ( int i =0; i< 8; i++){
		printf("\t%d", arr[i]);
	}

	//selection sort
	for ( int i = 0; i< 8; i++){
		int minIndex = i;
		for ( int j = i+1; j< 8; j++){
			if ( arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		if ( minIndex != i){
			int temp = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = temp;
		}
	}

	printf("\nKq: ");
	for ( int i =0; i< 8; i++){
		printf("\t%d", arr[i]);
	}
	
	return 0;
}
