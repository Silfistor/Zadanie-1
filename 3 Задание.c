// 3 задание
#include<stdio.h>

int main(){
    unsigned int num;
    printf("Введите целое положительное число: ");
    scanf("%u", &num);
    int count = 0;
    int bits = sizeof(num) * 8;
    
    for (int i = 0; i < bits; i++){
        if ((num >> i) & 1)
        count++;
    }
    printf("Количество едениц в числе: %d\n", count);
    return 0;
}
