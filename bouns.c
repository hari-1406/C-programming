#include<stdio.h>
int main() {
    char g;
    int sal,total,bonus,ebonus,fsal,fbonus,febonus,ftotal;
    
    printf("Plese enter your gender in M or F:");
    scanf("%c",&g);
    printf("Plese enter your salary:");
    scanf("%d",&sal);
    
    if (g == 'M' || g == 'm') {
        bonus = sal*=0.1;
        printf("Salary is:%d \n",bonus);
    } else if (sal<10000){
        ebonus = sal*0.02;
        printf("Increse salary is:%d \n",ebonus);
    }    
        total = bonus + ebonus+sal;
        printf("total salary is:%d",total);
    if (g == 'F' || g == 'f') {
        bonus = fsal*0.12;
        printf("Salary is:%d \n",fbonus);
    } else if (sal<10000){
        febonus = sal*0.03;
        printf("Increse salary is:%d \n",febonus); 
    }
        ftotal = fbonus + febonus + sal;
        printf("total salary is:%d",ftotal);
    
    
    return 0;
} 
