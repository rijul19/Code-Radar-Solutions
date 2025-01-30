#include <stdio.h>

int main() {
    int money,heist;
    scanf("%d %d", &money,&heist);
    printf("%u", heist&(1 << money));
    return 0;
}