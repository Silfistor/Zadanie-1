//1 Задание
#include <stdio.h>

int main() {
    unsigned int num;
    printf("Введите целое положительное число: ");
    scanf("%u", &num);
    
    int bits = sizeof(num) * 8;
    printf("Двоичное представление числа:\n", num);
    for (int i = bits - 1; i >= 0; i--) {
        unsigned int mask = 1 << i;
        if (num & mask)
            printf("1");
        else
            printf("0");
        if (i % 8 == 0 && i != 0)
            printf(" ");
    }
    printf("\n");
    return 0;
}
