#include <stdio.h>
#include <string.h>
void createArray(FILE *f1){
    f1=fopen("lab_06_f01.txt","r");
    if(!f1) printf("Ошибка чтения файла"); 
    else{
        int a,b,i,j;
        fscanf(f1,"%d",&a);
        fgetc(f1);
        fscanf(f1,"%d",&b);
        printf("%d строк %d столбец \n",a,b);
        double arr[a][b];
        for (i=0;i<a;i++){
            for(j=0;j<b;j++){
                fscanf(f1,"%lf",&arr[i][j]);
                fgetc(f1);
                printf("%10.2lf",arr[i][j]);
            }
            printf("\n");
        }
    }
    fclose(f1);
}




void createCSV(FILE *f1,FILE *f2){
    f2=fopen("lab_06_f01.csv","w");
    f1=fopen("lab_06_f01.txt","r");
    if((!f1)||(!f2)) printf("Ошибка чтения файла"); 
    else{
        int a,b,i,j;
        fscanf(f1,"%d",&a);
        fgetc(f1);
        fscanf(f1,"%d",&b);
        double arr[a][b];
        for (i=0;i<a;i++){
            for(j=0;j<b;j++){
                fscanf(f1,"%lf",&arr[i][j]);
                fgetc(f1);
                fprintf(f2,"%10.2lf",arr[i][j]);
            }
            fprintf(f2,"\n");
        }
    }
    fclose(f1);
    fclose(f2);
}
        
   
           
           
           
void greetMe(char name[10]){
    char greeting[100];
    int i=0;
	FILE *f3=fopen("lab_06_f02.txt","r");
	if(!f3) printf("Ошибка чтения файла");
	else {
		printf("name :");
		scanf("%s",name);
		printf("name : %s \n",name);
		char c=fgetc(f3);
		while(!feof(f3)){
			if(c=='_'){
				strcat(greeting,name);
				i=i+strlen(name);
				c=fgetc(f3);
			}
			greeting[i]=c;
			c=fgetc(f3);
			i++;
		}
	}
	printf("Greeting!! \n");
	for (i=0;i<strlen(greeting);i++){
        printf("%c",greeting[i]);
	}
	printf("\n");
fclose(f3);
}           
           
           


void deleteFile(char *filename){
	filename="lab_06_f02.txt";
	if (remove(filename)==0){
		printf("удалел %s \n",filename);
	}
	else {
		printf("ошибка удаления %s \n",filename);
	}
}












int main(){
    FILE *f1,*f2;
    createArray(f1);
    printf("\n");
    createCSV(f1,f2);
    char name[10];
    greetMe(name);
    
    
    int c;
    FILE *fp=fopen("lab_06_f02.txt","r");
    FILE *f=fopen("lab_06_f03.txt","a");
    if (!f) printf("Ошибка чтения файла");
    else {
    	c=fgetc(fp);
    	while(!feof(fp)){
    		fputc(c,f);
    		c=fgetc(fp);
    	}
    	printf("скопировал файл \n");
    }
    fclose(fp);
    fclose(f);
    
    int a;
    char *filename="lab_06_f02.txt";
    printf("Вы действительно хотите удалить файл %s ?",filename);
    scanf("%d",&a);
    if(a==1){
    	deleteFile(filename);
    }
    return 0;
}
