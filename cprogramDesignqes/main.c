#include <stdio.h>
#include <math.h>
#include <string.h>
void f115_9();
void f115_10();
void f115_11();
void f115_12();
void f115_13();
void f115_14();
void f115_15();
void f115_16();
int main() {
//    f115_15();
//    char s[]="hello";
//    int a[10];
//    printf("sizeof(*s)=%d,strlen(s)=%d", sizeof(s),strlen(s));
    char str1[6]="hello";
    char str2[]="worldhhahhhh";
    strncpy(str1,str2,10);
    printf("%c",str1[7]);
    return 0;
}
void f115_16(){
    for(int i=1;i<=4;i++){
        for (int j=4;j>=i;j--)printf(" ");
        for(int k=1;k<i*2;k++)printf("*");
        printf("\n");
    }
    for(int i=1;i<=3;i++){
        for (int j=0;j<=i;j++)printf(" ");
        for(int k=7;k>i*2;k--)printf("*");
        printf("\n");
    }
}
void f115_15(){
    double fx0,fx1,fx2,x0,x1,x2;
    do{
        printf("enter x1,x2");
        scanf("%lf%lf",&x1,&x2);
        fx1=x1*((2*x1-4)*x1+3)-6;
        fx2=x2*((2*x2-4)*x2+3)-6;
    }while(fx1*fx2>0);
    do{
        x0=(x1+x2)/2;
        fx0=x0*((2*x0-4)*x0+3)-6;
        if(fx0*fx1<0){
            x2=x0;
//            fx2=fx0;
        }else{
            x1=x0;
            fx1=fx0;
        }
    }while(fabs(fx0)>=1e-5);
    printf("x0=%8.5f",x0);
}

void f115_14(){
    double f,f1,x0,x1;
    x1=1.5;
    do{
        x0=x1;
        f=((2*x0-4)*x0+3)*x0-6;
        f1=(6*x0-8)*x0+3;
        x1=x0-f/f1;
    }while(fabs(x1-x0)>=1e-5);
    printf("square x1=%8.5f",x1);
}

void f115_13(){
    float a,x0,x1;
    scanf("%f",&a);
    x0=a/2;
    printf("%f",a);
    x1=(x0+a/x0)/2;
    do{
        x0=x1;
        x1=(x0+a/x0)/2;
    }while(fabs(x0-x1)>=1e-5);
    printf("a=%5.2f,square a=%8.5f",a,x1);
}

void f115_12(){
    int count=1;
    for(int i=2;i<=10;i++){
        count=2*(count+1);
    }
    printf("%d",count);
}

void f115_11(){
    double sum=100,n=100;
    for(int i=2;i<=10;i++){
        n=n/2;
        sum=sum+n*2;
    }
    printf("%f\n",sum);
    printf("%f",n/2);
}

void f115_10(){
    double f1=1,f2=2;
    double sum=0;
    for(int i=1;i<=20;i++){
        sum=sum+f2/f1;
        f2=f1+f2;
        f1=f2-f1;
    }
    printf("前20项之和为：%16.10f",sum);
}

void f115_9() {
    int n = 1000;
    int  sum = 1;
    for (int j = 1; j < n; j++) {
        sum=1;
        for (int i = 2; i <=sqrt(j); i++) {
            if (j % i == 0&&j/i!=i) {
                sum = sum + i+j/i;
//                printf("%5d",i);
            }
        }

        if(sum==j&&j!=1) printf("%d\n",j);
    }
}


