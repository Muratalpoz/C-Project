#include <stdio.h>

int main(){
    FILE *DOSYA;
    FILE *DOSYA2;
    char t;
    DOSYA=fopen("dosya1.txt","a");
    DOSYA2=fopen("dosya2.txt","r");
    fprintf(DOSYA,"\n");
    while((t=fgetc(DOSYA2))!=EOF){
      fputc(t,DOSYA);
    }
    if(remove("dosya2.txt")==0)
    printf("Deleted successfully");
    else
    printf("Unable to delete the file");
    fclose(DOSYA);
    fclose(DOSYA2);
return 0;
}