#include <stdio.h>
#include <string.h>
int main(){
    char str1[7];
    str1[0]='w';
    str1[1]='o';
    str1[2]='r';
    str1[3]='l';
    str1[4]='d';
    str1[5]='!';
    printf ("%s \n",str1);
    char str2[20]="hello, ";
    printf("%s \n",str2);
    char str3[7];
    strcpy(str3,str1);
    printf("%s \n",str3);
    if (strcmp(str1,str3)==0){
        printf("Строка 1 полностью совпадает со строкой 3 \n");
    }
    else {
        printf("Строка 1 не совпадает со строкой 3 \n");
    }
    strcat(str2,str1);
    printf("%s \n",str2);
    int i=0;
    for (i=0;i<strlen(str2);i++){
        printf("%c",str2[i]);
    }
    printf("\n");
    
    
    
    
    
    
    
    char s1[20]="good morning",
         s2[30]="Good evening";
    int compared;
    compared= strcmp(str2,str1);
    printf("%d \n",compared);
    
    
    char name[10]="thanh";
    strcat(s1,name);
    printf("%s \n",s1);
     
     
    strncat(s2,name,3);
    printf("%s \n",s2);
    
    
    
    int j=0;
    for (j=0;j<strlen(str2);j++){
        if (str2[j]=='r') {
            printf("индекс символа 'r' : %d \n",j);
        }
    }





    int z;
    char str4[300]="Люблю тебя, Петра творенье; Люблю твой строгий, стройный вид; Невы державное теченье; Береговой ее гранит.";
    char stringArray[20][4];
    i=0;
    j=0;
    z=0;
    for (i=0;i<strlen(str4);i++){
       if (str4[i]==';'){
            z++;
            j=i;
            printf("\n");
       }
        else if ((str4[i]!=';')&& (j==0)){
            stringArray[z][i]=str4[i];
            printf("%c ",stringArray[z][i]);
        }
         
        
        
        else {
            stringArray[z][i-j-1]=str4[i];
            printf("%c ",stringArray[z][i-j-1]);
    }

}


printf("\n");
}

