#include <stdio.h>
main(){
    int i=0,
        j=0;
    for (i=0;i<5;i++) {
    printf ("цикл for: i = %d \n",i);
    }
        i=6;
        while (i<5 && j==0)
        {
            printf("цикл while: i=%d \n",i);
            i=i+1;
        }
        i=6;
        do {
            printf("цикл do: i= %d \n",i);
            i++;
        } 
       while (i<5);
}

