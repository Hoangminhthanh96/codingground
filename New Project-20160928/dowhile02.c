#include <stdio.h>

int main()
{ 
  int a,b,c,d;
   a=0; 
    do{
        b=0;
        do{
            c=0;
        do{
            if((a==1)&&(b==1)||(c==0))
            {
            d=1;  
            } 
        else {
            d=0;
             }
            printf ("значение логичуской функций a^bv-c при a= %d,b=%d,c=%d:  %d \n",a,b,c, d);
            c++;
        }
         while (c<2)  ;  
         b++;
    }while(b<2);
    a++;
}while(a<2);
}

