#include <stdio.h>
#include <stdlib.h> 
void main() {    
int value = 101;  
int *pValue = &value;    
printf("value = %d \n", value);   
printf("*pValue = %d \n", *pValue);    
printf("*(&value) = %d \n", *(&value));  
printf("value address = %p \n", &value);  
printf("pValue = %p \n", pValue); 
printf("pValue address = %p \n", &pValue);    
int a[6] = {9,8,7,6,5,4};  
printf("a[0] = %d \n", a[0]);   
printf("a[0] = %d \n", *a);   
printf("a[1] = %d \n", *(a+1)); 
 int *arr;     arr = malloc(1000 * sizeof(int)); 
 if (arr != NULL) {  
    int i;        
    for (i = 0; i < 100; i++) { 
    arr[i] = i;        
    }    
}   
    free(arr);  
    arr = NULL;
    
    
    
    
    
    
    
    
    int i;
    double *ptr;
    ptr=malloc(1000*sizeof(double));
    if (ptr!=NULL){
        for (i=0;i<130;i++){
            ptr[i]=i/100;
            
        }
    }
      free(ptr);
     ptr=NULL;
  
    for (i=0;i<130;i++){
        printf("[%d] : %lf \n",i,ptr[i]);
     }
    
       
    }
