#include<stdio.h>
int main() {
    int num,i,flag=1;
    
    printf("Plese enter number:");
    scanf("%d",&num);
    
    if (num>0) {
        if(num==2){
            printf("number is prime");
        } else {
            for (i=2;i<num;i++) {
                if (num%2==0) {
                    flag=0;
                    break;
                }   
            } if (flag=1) {
                printf("%d is prime",num);
            } else {
                printf("%d is not prime",num);
            }
        }
    } else {
        printf("Not decidable");
    }
    
    return 0;
}