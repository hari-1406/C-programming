#include <stdio.h>
int subtotal(int a,int b) {
    int mul;
    
    mul = a*b;
    
    return mul;
}

int finaltotal(int a,int b, int c) {
    int ans;
    
    ans = a+b+c;
    
    return ans;
}

int Bill(int p, int q) {
    int total=0;
    
    total = p + q + 50;
    
    return total;
}

int FinalBill(int a, int b){
        int c,discountvalue;
    if(a == 1011) {
        
        discountvalue = b * 0.01;
    }
    c = b - discountvalue;
    return c;
}

int main()
{
    int p,b,d,ans,total1=0,total2=0,total3=0,GST,total=0,cc,FinalAmount;
    
    printf("How many pizza you want:");
    scanf("%d",&p);
    printf("How many Burger you want:");
    scanf("%d",&b);
    printf("How many Dosa you want:");
    scanf("%d",&d);
   
    total1 = subtotal(p,250);
    total2 = subtotal(b,100);
    total3 = subtotal(d,130);
    
    printf("Pizza \t %d \t   %d\n" ,p,total1);
    printf("Burger \t %d \t   %d\n" ,b,total2);
    printf("Dosa \t %d \t   %d\n" ,d,total3);
    printf("\n----------------------\n");
    
    ans = finaltotal(total1,total2,total3); 
    printf("Final Total:       %d\n",ans);
     
    GST = ans*0.18;
    printf("GST is:            %d\n",GST);
    printf("Delivery chaarge:  50");
    printf("\n-----------------------\n");
    
    total = Bill(GST,ans); 
    
    printf("Yor bill is:       %d\n",total);
    
    printf("coupen code:   ");
    scanf(" %d",&cc);
    printf("\n-----------------------\n");
    
    FinalAmount = FinalBill(cc,total);

    printf("Final Amount:      %d",FinalAmount);
    return 0;
    
}