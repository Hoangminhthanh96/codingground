#include <stdio.h>

void createArray(FILE *f1){
    f1=fopen("lab_06_f01.txt","r");
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
    fclose(f1);
}


void createCSV(FILE *f1,FILE *f2){
    f2=fopen("lab_06_f01.csv","w");
    f1=fopen("lab_06_f01.txt","r");
    if((!f1)||(!f2)) printf("Ошибка чтения файла"); 
    else{
        int a,b,i,j;
        fscanf(f1,"%d",&a);
        fgetc(f1);
        fscanf(f1,"%d",&b);
        double arr[a][b];
        for (i=0;i<a;i++){
            for(j=0;j<b;j++){
                fscanf(f1,"%lf",&arr[i][j]);
                fgetc(f1);
                fprintf(f2,"%10.2lf",arr[i][j]);
            }
            fprintf(f2,"\n");
        }
    }
    fclose(f1);
    fclose(f2);
}
        
   
           


void main(){
    FILE *f1,*f2;
    createArray(f1);
    printf("\n");
    createCSV(f1,f2);
}