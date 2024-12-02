#include <stdio.h>

int main(){
	int arr[] = {1,56,2,-9,90,44,66,77};
	int n = sizeof(arr)/sizeof(int);
	
	printf("Mang ban dau: ");
	for ( int i =0; i< n; i++){
		printf("\t%d", arr[i]);
	}

	//insertion sort
	for ( int i = 0; i< 8; i++){
		int key = arr[i];
		int j = i-1;
		while( j >= 0 && key < arr[j] ){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}

	printf("\nKq: \t");
	for ( int i =0; i< 8; i++){
		printf("\t%d", arr[i]);
	}
	
	return 0;
}
