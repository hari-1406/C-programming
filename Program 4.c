#include<stdio.h>
int main(){
    int weight,height,boys,count=0,num,i;
    
    printf("How many boys are check:");
    scanf("%d",&boys);
    
    if(num>0) {
        for(i=1;i<=boys;i++){
            printf("Plese enter your weight:\n");
            scanf("%d",&weight);
            printf("Plese enter your height");
            scanf("%d",&height);
            
            if(weight<50 && height>170){
                count ++;
            } 
        }
            printf("boys :%d",count);
        
    } else {
        printf("Plese enter valid input");
    }
        return 0;    
}