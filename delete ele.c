#include<stdio.h>
int main() {
    int arr[50],i,n,pos=0;
    
    printf("Plese enter size of array:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    
    printf("Plese enter position:");
    scanf("%d",&pos);
    
     pos = pos-1;
    for(i=0;i<n;i++){
        pos = pos-1;
        
    }
   printf("%d",arr[i]);
    
    
    return 0;
}

