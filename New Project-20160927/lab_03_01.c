#include <stdio.h>
void main(){
    int a[10];
    int i,j;
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;
    for (i=5;i<10;i++){
        a[i]=i+1;
    }

    int b[10]={1,2,3,4,5,6,7,8,9};
    for (i=0;i<10;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    int arr[5][3];
    int c[2];
    for (i=0;i<5;i++){
        for (j=0;j<3;j++){
           arr[i][j]=i*j;
            if (arr[i][j]!=0 && arr[i][j]%6==0){
                c[0]=i;
                c[1]=j;
            }
    printf ("%d",arr[i][j]);
    }
    printf ("\n");
}
printf("Эл-т находится в %d строке %d столбце\n",c[0],c[1]);
int crab[3][2]={{11,12},{21,22},{31,32}};
long int rows = sizeof(crab)/sizeof(crab[0]);
long int colums= sizeof(crab[0])/sizeof(crab[0][0]);
 printf("Кол-во строк в массиве crab: %ld \n", rows); 
 printf("Кол-во столбцов в массиве crab: %ld \n", colums); 
 
 
 
 int d[30];
 d[0]=0;
 d[1]=1;
 long int sum=0;
 for (i=2;i<30;i++){
     d[i]=d[i-1]+d[i-2];
     printf("%d  ",d[i]);
     if(i%2==0){
        sum+=d[i];
 }
 }
 printf("\n");
 printf ("%ld\n",sum);
    
    
    
    
     
    int k=0;
    for (i=0;i<30;i++){
        for (j=i;j<30;j++){
            if (d[i]<d[j]){
                k=d[i];
                d[i]=d[j];
                d[j]=k;
            }
             
        }
         printf ("%d  ",d[i]);
    }
}