#include <stdio.h>

int main(){
    int i,j;
    
        for(i=5;i>=1;i--) {
            for(j=i;j<=5;j++) {
                printf("%d",j);
            }
            printf("\n");
        }
        for(i=2;i<=5;i++) {
            for(j=i;j<=5;j++) {
                printf("%d",j);
            }
            printf("\n");
        }
    return 0;
}
/*5
45
345
2345
12345
2345
345
45
5*/