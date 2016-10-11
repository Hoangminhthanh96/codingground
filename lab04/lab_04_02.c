#include <stdio.h>
#include <string.h>
void main() {    
    char name[20], surname[50], group[6];  
    int day, month, year;    
    printf("Введите ваше имя и фамилию: ");   
    scanf("%s %s", name, surname);   
    printf("Введите дату вашего рождения (DD.MM.YYYY): "); 
    scanf("%d.%d.%d", &day, &month, &year);   
    printf("Введите номер группы: "); 
    scanf("%s", group);    
    printf("\n--АНКЕТА--\n"); 
    printf("%s %s\n", name, surname);    
printf("%d.%d.%d \n", day, month, year); 
printf("%s \n", group); 
    
    
    
    
  int a[10];
 int i;
  for (i=0;i<10;i++){
    printf("впиши a[%d] \n",i);  
    scanf("%d",&a[i]);
    printf("a[%d]= %d \n",i,a[i]);
  }
  
  
  
 char s[30]="hello ";
 char d[10];
 printf("впишите  %s:\n",s);
 scanf("%s",d);
 strcat(s,d);
 printf("s= %s \n",s);
 
 
 
 double expnum[10];
  for (i=0;i<10;i++){
    printf("впиши expnum[%d] \n",i);  
    scanf("%lf",&expnum[i]);
    printf("a[%d]= %.10lf \n",i,expnum[i]);
  }
 

} 

