#include <stdio.h>
#include <math.h> 
#define PI 3.14159265358979323846 



void StriangleArea(int a,int b,int c){
        printf("стороны треугольника:");
        scanf("%d %d %d",&a,&b,&c);
        if((a+b-c>0)&(a-b+c>0)&(-a+b+c>0)){
        double result1;
        result1=sqrt((a+b+c)*(a+b-c)*(a-b+c)*(-a+b+c))/4;
        printf(" площадь треугольника %.2lf :\n",result1);
    }
}


void Findside(int a,int b,double aDeg){
    printf("стороны 2-o треугольника и угол между ними:");
    scanf("%d %d %lf ",&a,&b,&aDeg);
    double aPi;
    aPi=PI*aDeg/180;
    double c;
    c=sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(aPi));
    printf("c= %.1lf",c);
    printf("\n");
}


int main() { 
    double alphaDeg = 45,   
           alpha = PI*alphaDeg/180;
           printf("alphaDeg = %.0lf, alpha = %lf\n", alphaDeg, alpha);   
           printf("sin(alpha) = %lf\n", sin(alpha)); 
           printf("cos(alpha) = %lf\n", cos(alpha)); 
           printf("tan(alpha) = %lf\n", tan(alpha));  
           printf("atan(tan(alpha)) = %lf\n", atan(tan(alpha)));  
           printf("floor(alpha) = %lf\n", floor(alpha));
           printf("ceil(alpha) = %lf\n", ceil(alpha)); 
           double a = 5, b = 3;    
           printf("exp(a) = %lf\n", exp(a)); 
           printf("log(a) = %lf\n", log(a));
           printf("log10(a) = %lf\n", log10(a));
           printf("pow(a,b) = %lf\n", pow(a,b));
           printf("sqrt(a) = %lf\n", sqrt(a));  
           printf("fabs(a) = %lf\n", fabs(-alpha));
           
           
           
           int m,n,p;
           StriangleArea(m,n,p);
           int q,r;
           double t;
           Findside(q,r,t);
           
           int result3;
        result3=log(exp(7));
        printf("log(exp(7))= %d\n",result3);
        
        return 0;
}