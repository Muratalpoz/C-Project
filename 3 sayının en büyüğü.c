#include <stdio.h>
int main(){
int a,b,c,enb;

printf("uc sayi giriniz:\n");

scanf("%d %d %d",&a,&b,&c);
 
 if(a>b){
   if(b>c)
   {
     enb=a;
   }
  else{
    enb=c;
    
  }
 }
 else{
   if(b>c)
 {
enb=b;
 }
 else{
   enb=c;
 }
 }
 printf("en buyuk sayi %d",enb);
return 0;
}