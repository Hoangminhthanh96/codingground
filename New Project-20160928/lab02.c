#include <stdio.h>
void main(){
    int a,b,c,d;
    a=0;
    while (a<2){
         b=0; 
        while (b<2){
            c=0;
            while (c<2){
        if((a==1)&&(b==1)||(c==0)){
            d=1;  
        } 
        else {d=0;}
            printf ("значение логичуской функций a^bv-c при a= %d,b=%d,c=%d:  %d \n",a,b,c, d);   
            c++;
                
            }
           b++;
        }
           a++;
    }
    
}