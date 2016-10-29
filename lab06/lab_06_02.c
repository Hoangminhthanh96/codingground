#include <stdio.h>
void main()
{ 

 void createArray(double *file1){
    FILE *f1=fopen(file1,"r");
    if(!f1) printf("Ошибка чтения файла"); 
    else{
        int a,b;
        int c=fgetc(file1);
        while(c!="\n")){
            a=c;
            c=fgetc(file1);
        }
    }
 }








   
}