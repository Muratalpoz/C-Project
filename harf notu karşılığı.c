#include <stdio.h>
int main(){
int not;
printf("notunuzu giriniz:");
scanf("%d",&not);
if(90<=not && not<=100){
printf("AA");
}
else if(85<=not && not<89){
  printf("BA");
}
else if(80<=not && not<84){
  printf("BB");
}
else if(70<=not && not<79){
  printf("BC");
}
else if(60<=not && not<69){
  printf("CC");
}
else if(55<=not && not<59){
  printf("CD");
}
else if(50<=not && not<54){
  printf("DD");
}
else if (0<=not && not<=49){
  printf("FF");
}
return 0;
}