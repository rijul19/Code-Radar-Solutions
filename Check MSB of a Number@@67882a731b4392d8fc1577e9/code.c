#include <stdio.h>


int main() {
    int rijul;
    scanf("%d",&rijul);
    if (rijul &(1 << 31))
    printf("Set");
    else
    printf("Not Set");
    return 0;
}