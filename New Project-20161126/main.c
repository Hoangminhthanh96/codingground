#include <stdio.h>
#include <stdlib.h>
#include "xmatrix.h"
int main(){
    char *filename="thunghiem.txt";
    double *Matrix=(double *)malloc(100*sizeof(double));
    Matrix=readMatrix(filename);
}