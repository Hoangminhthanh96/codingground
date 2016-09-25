#include <stdio.h>
main(){
    int a=0,b=0,c=0;
    for (a=0;a<2;a++){
        for (b=0;b<2;b++){
            for (c=0;c<2;c++){
                printf ("значение логической функций при a= %d, b= %d, c= %d : %d \n",a,b,c,a*b+(-c) );
            }
        }
    }
}