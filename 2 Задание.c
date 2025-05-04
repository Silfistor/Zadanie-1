//2 Задание
#include <stdio.h>

void print_binary(int num) {
    int bits = sizeof(num) * 8;
    printf("Двоичное представление числа: \n", num);
    for (int i = bits - 1; i >=0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
        
        if (i % 8 == 0 && i !=0)
           printf(" ");
    }
    printf("\n");
}
int main(){
    int num;
    printf("Введите целое отрицательное число: ");
    scanf("%d", &num);
    print_binary(num);
    return 0;
}
