#include <stdio.h>

#define MAX 50

void arrayYazdir(int arr[], int size) {
	
	printf("{");
	
	for(int j=0 ; j<size ; j++){
		
		if(j == size-1){
			printf("%d", arr[j]);
		}
		else{
			printf("%d, ", arr[j]);
				
		}
	}

	printf("}");

}


void selectionSort(int arr[], int size){
	int i, j;
	int minimumIndex;
	
	// En küçük sayıyı bulma işlemini size kadar tekrar ettiren for
	for(i=0; i<size-1;i++){
		
		minimumIndex = i;
		
		 
		// En küçük sayıyı bulma
		for(j=i; j<size; j++){
			
			if(arr[j]<arr[minimumIndex]){
				
				minimumIndex = j;
				}
			
			}
			
			int temp =  arr[i];
			
			arr[i] = arr[minimumIndex];
			
			arr[minimumIndex] = temp;
		
		}
	}

int main(){
	
	int array[MAX], size;
	int i;
	
	printf("kac elemanli: \n");
	
	scanf("%d", &size);
	
	for(i=0; i<size ; i++){
		
		scanf("%d", &array[i]);		
		
		}
		
		selectionSort(array, size);
		
	arrayYazdir(array, size);
	
	return 0;
}

