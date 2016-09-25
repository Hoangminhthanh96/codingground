#include <stdio.h>
 main(){
     int a=0,
     b=0,
     c=0;
    int d=0;
     for (a=0;a<2;a++){
         for (b=0;b<2;b++){
          for (c=0;c<2;c++){
            if((c!=1)||(a*b!=0))
            {
                d=1 ;
            }
               else {
                   d=0;
               }
               
             printf ("значение логической функций a^bv-c при a= %d, b= %d, c= %d : %d \n",a,b,c,d) ;
            
            }
        }
   }
 }
