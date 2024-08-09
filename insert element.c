#include<stdio.h>
int main() {
    int a[50],n,i,pos=0,newele=0;
    
    printf("Plese eneter size of array:");
    scanf("%d",&n);
    
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    
    printf("Plese enter position:");
    scanf("%d",&pos);
    
    printf("Plese enter new element");
    scanf("%d",&newele);
    
    n++;
   
     a[i]=a[i-1];
    for(i=pos;i<n;i++){
    }
    
    
     a[pos]=newele;
    for(i=pos;i<n;i++){
    }
    
    for (i=0;i<n-1;i++) {
        printf("%d\n",a[i]);
    }
    
}
