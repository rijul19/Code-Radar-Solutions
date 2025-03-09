#include <stdio.h>

int getNthBit(int number, int n) {
    return (number >> n) & 1;
}

int main() {
    int number = 29; 
    int n = 3;       
    
    int bit = getNthBit(number, n);
    printf("%d\n", n, number, bit);
    
    return 0;
}
  