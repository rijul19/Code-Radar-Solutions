#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char c;
    scanf("%d %d",&a,&b,&c);
    switch(c)
    {
        case'+':
        printf("%d",a+b);
        break;
        case'-':
        printf("%d",a-b);
        break;
        case'*':
        printf("%d",a*b);
        break;
        {
        case'/':
        if(b!=0)
        printf("%d",a/b);
        else
        printf("error");
        break;
        }
        default:
        printf("error");
        }
        return 0;

    }
    return 0;
}