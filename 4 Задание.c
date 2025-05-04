//4 задание
#include <stdio.h>

int main() {
    int num;
    int new_byte;
    printf("Введите целое положительное число: ");
    scanf("%d", &num);
    printf("Введите новое значение для 3-го байта (0-255): ");
    scanf("%d", &new_byte);
    num = num & ~(0xFF << 16); 
    num = num | (new_byte << 16); 
    printf("Обновлённое число: %d\n", num, num);
    
    return 0;
}
