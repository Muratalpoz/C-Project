#include <stdio.h>
int main(){
int a=18;
int i=0;
long int fact=1;
while(i<a){
i++;
fact=fact*i;
}
printf("%d nin faktoriyeli: %ld.\n", a, fact);
return 0;
}