#include <stdio.h>

void createArray(char *file1){
       FILE *f1=fopen(file1,"r");
        if(!f1) printf("Ошибка чтения файла"); 
    else{
        int a,b,i,j;
        fscanf(f1,"%d",&a);
        fgetc(f1);
        fscanf(f1,"%d",&b);
        printf("%d строк %d столбец \n",a,b);
        double arr[a][b];
        for (i=0;i<a;i++){
            for(j=0;j<b;j++){
                fscanf(f1,"%lf",&arr[i][j]);
                fgetc(f1);
                printf("%10.2lf",arr[i][j]);
            }
            printf("\n");
        }
    }
}



void main(){
    char *file1="lab_06_f01.txt";
    createArray(file1);
    printf("\n");
}