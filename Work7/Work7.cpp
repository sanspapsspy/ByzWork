#include <iostream>
#include <cmath>

using namespace std;

int swapBytes(int a) {
    // Маска для выделения отдельных байтов
    int mask_byte1 = 0xFF; // 0b11111111
    int mask_byte2 = 0xFF00; // 0b11111111 00000000
    int mask_byte3 = 0xFF0000; // 0b11111111 00000000 00000000
    int mask_byte4 = 0xFF000000; // 0b11111111 00000000 00000000 00000000

    // Выделяем отдельные байты
    int byte1 = a & mask_byte1;
    int byte2 = (a & mask_byte2) >> 8;
    int byte3 = (a & mask_byte3) >> 16;
    int byte4 = (a & mask_byte4) >> 24;

    // Меняем местами байты
    return (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;
}

int main() {
    int a;

    cout << "Enter a 32-bit integer: ";
    cin >> a;

    int result = swapBytes(a);

    cout << "The number with the bytes swapped is: " << result << endl;

    return 0;
}
//1. Функция swapBytes(int a) принимает 32 - битное целое число a и меняет местами его байты.
//2. Внутри функции мы определяем маски для выделения отдельных байтов из 32 - битного числа.
//3. Используя побитовые операции, мы выделяем значения отдельных байтов из числа a.
//4. Затем мы меняем местами байты, собирая их обратно в 32 - битное число в обратном порядке.
//5. Результат возвращается из функции.
//6. В main() мы запрашиваем у пользователя 32 - битное целое число, вызываем функцию swapBytes() и выводим результат.