#include<stdio.h>
int main() {
    int pay1=0,pay2=0,pay3=0,pay4=0,final_amount=0;
    char fac1,fac2,fac3,fac4;
   
    printf("Do you want to swming pool:");
    scanf("%c %c %c %c",&fac1,& fac2,& fac3,&fac4);
    
     if(fac1 == 'y'){
         pay1 = 1000;
     } else if (fac2 == 'y'){
         pay2 = 500;
     } else if (fac3 == 'y'){
         pay3 = 300;
     } else if (fac4 == 'y'){
         pay4 = 1800;     
     } else if (fac1 == 'n') {
         printf("select another facility");
     } else if (fac2 == 'n') {
        printf("select another facility");
     } else if (fac3 == 'n') {
         printf("select another facility");
     } else if (fac4 == 'n') {
         printf("select facility");
     }     
     
     final_amount = 5000+ pay1+pay2+pay3+pay4;
     printf("your final amount is:%d",final_amount);

    return 0;
    
}