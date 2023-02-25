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

int main(){
	 

	int size = 9;
	int sayilar[] = {1, 24, 21, 8, 13, 5, 132, 46, 35};
	int arraySortlandiMi = 0;
	
	
	while(!arraySortlandiMi){
		
		arraySortlandiMi = 1;
	
		for(int i = 0; i < size-1; i++){
			
			
			if(sayilar[i] > sayilar[i+1]){
				
				int gecici = sayilar[i];
				
				sayilar[i] = sayilar[i+1];
				
				sayilar[i+1] = gecici;
				
				arraySortlandiMi = 0;
				
			}
			
		}
	}
	
	
	arrayYazdir(sayilar, size);
	
	return 0;
}

