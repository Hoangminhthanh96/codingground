#include<stdio.h>
#include<stdlib.h>


#indef XMTRIX_H_INCLUDE
#define XMATRIX_H_INCLUDE
double * readMatrix (char *filename){
FILE *f1;
f1=fopen(filename,"r");
if(!f1){
    printf("open file %s failed",filename);
}
else
{
    int a,b;
    char *c;
    fscanf("%d %s %d",&a,c,&b);
    double * Matrix;
    Matrix=(double*)malloc((a*b+2)*sizeof(double));
    int i=0;
    fgetc(f1);
    while (!feof(f1)){
        fscanf(f1,"%d",matrix+i);
        fgetc(f1);
        i++;
    }
}
return * Matrix;
}
#endif