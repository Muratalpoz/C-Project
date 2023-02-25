#include <stdio.h>

int main(){

int size, max;

	
	printf("Array size belirle: \n");

	scanf("%d", &size);
	
	int array[size];
	
	printf("Max deger giriniz: \n");
	
	scanf("%d", &max);	
	
	printf("Dizinin elemanlarini giriniz: \n");
	
	for(int i = 0; i<size; i++){
		
		scanf("%d", &array[i]);
		
		if(max < array[i]){
			
			array[i] = max;
			
			}
		}
	for(int j=0; j<size; j++){
		
		printf("%d ", array[j]);
		}

	return 0;
}

