
#include <stdio.h>

int main(){
int i,j,artisayisi,yildizsayisi,boyut;
boyut=9;
artisayisi=boyut/2;
yildizsayisi=1;
for(i=0;i<9;i++){
	for(j=0;j<artisayisi;j++)
			printf("+");
	 for(j=0; j<yildizsayisi; j++)
            printf("*");
     for(j=0;j<artisayisi;j++)
			printf("+");
  if(i < boyut/2){
            artisayisi--;
            yildizsayisi+=2;
        }
  else{
            artisayisi++;
            yildizsayisi-=2;
            }
    printf("\n");  
}          
      
     return 0;
}








