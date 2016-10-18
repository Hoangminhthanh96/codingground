#include <stdio.h>
#include <stdlib.h>
int year = 2016;

void printAnotherBirthday(int day,int month){
    printf("Дата рождения: %d.%d \n",day,month);
    year+=1;
    printf("year=%d\n",year);
    
}

void factorial(int n){
    printf("количество чисел n= ");
    scanf("%d",&n);
    printf("\n");
    int i;
    int f=1;
    for(i=1;i<n+1;i++){
        f=f*i;
    }
    printf("Факториал числа %d = %d \n",n,f);
    
}



void Fibonaci(int k){
    int n=100;
    int *s;
    s=malloc(1000 * sizeof(int));
    if (s!=NULL){
        int i;
        s[0]=0;
        s[1]=1;
        for (i=2;i<n;i++){
            s[i]=s[i-1]+s[i-2];
            }
    }
    printf("число последовательности Фибоначчи:");
    scanf("%d",&k);
    if(k<n){
        printf("%d",s[k]);
        printf("\n");
    }
    free(s);
    s=NULL;
}








void printBirthday(int day, int month, int year) {    
    printf("Дата рождения: %d.%d.%d \n", day, month, year); }
void sum(int a, int *b) {   
    *b+=a;
    } 
void sumArray(int a[], int aLen, int b[], int bLen, int *c) { 
    if (aLen == bLen) {  
        int i = 0;        
        for (i = 0; i < aLen; i++) { 
            c[i] = a[i] + b[i];   
            }  
        } 
    
} 
void main() {   
    int dayB = 21,  
        monthB = 7,  
        yearB = 1996;   
        printBirthday(dayB,monthB,yearB);  
        int val1 = 5,    
            val2 = 8,
            *res=&val2;
        sum(val1,res);
        printf("val1 + val2 = %d \n",*res);   
        int a[5] = {1,2,3,4,5};   
        int b[5] = {6,7,8,9,10}; 
        int c[5];
        sumArray(a, 5, b, 5, c); 
int i = 0;  
for (i = 0; i < 5; i++) {  
    printf("c[%d] = %d \n",i,c[i]); 
    }
    
printf("year= %d\n",year);
printAnotherBirthday(dayB,monthB);
printf("year= %d\n",year);



int n;
factorial(n);
int k;
Fibonaci(k);


} 