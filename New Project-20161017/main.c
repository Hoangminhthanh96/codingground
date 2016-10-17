#include <stdio.h>

void F(int n,int s[]){
    if (n==0){
        printf("не существует последовательности Фибоначчи ");
    }
    if (n==1) {
        s[0]=0;
        }
    if (n>1){
        int i;
        s[0]=0;
        s[1]=1;
        for (i=2;i<n;i++){
            s[i]=s[i-1]+s[i-2];
            }
    }
}
void main(){
    int i,n;
    printf("порядковый номер числа n \n");
    scanf("%d",&n);
    printf("последовательности Фибоначчи : \n");
    int s[n];
    F(n,s);
    for (i=0;i<n;i++){
        printf("%d  ",s[i]);
    }
    printf("\n");
}

