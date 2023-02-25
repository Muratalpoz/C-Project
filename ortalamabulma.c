#include <stdio.h>

int main()
{
    int n;
    float ort;
    float sum=0.0;
    
    float sayilar[100]; 
    
    printf("dizi eleman sayısını giriniz: ");
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        
        printf("%d. eleman giriniz: ",i+1);
        scanf("%f", &sayilar[i]);
        
        sum +=sayilar[i];
    }
    
    ort = sum/n;
    
    printf("Ortalama= %.2f", ort);
     

    return 0;
}
