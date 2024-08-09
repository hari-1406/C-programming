##include<stdio.h>
int main(){
    int sal,n, month,i,Expense,E_Month,Total_Expense=0;
    
    printf("Plese enter how many month electricitiy:");
    scanf("%d",&n);
   
    printf("Plese enter your salary:");
    scanf("%d",&sal);
    
    for (i=1;i<=n;i++) {
    printf("Plese enter month:\n");
    scanf("%d",&month);
    
    switch(month) {
        case 1:
            printf("january\n");
            break;
        case 2:
            printf("Fabruary\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("Jun\n");
            break;
        case 7:
            printf("Julie\n");
            break;
        case 8:
            printf("Augest\n");
            break;
        case 9:
            printf("september\n");
            break;
        case 10:
            printf("Octomber\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;    
    
        
    }
         printf("How much exense of electricity:");
         scanf("%d",&Expense);
          
          Total_Expense = Total_Expense +Expense;
    }
       
        printf("your total expense is:%d",Total_Expense);
        
        return 0;
}
