#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1,j<=n-i;i++){
                printf(" ");
            }
        for(j=1;j<=i;j++){
            printf("* ");
        }

            printf("\n");
        }
    }
return 0;
}