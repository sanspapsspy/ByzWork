#include <iostream>
#include <cmath>

using namespace std;

int swapBits(int a, int i, int j) {
    // Получаем значения i-го и j-го битов
    bool bit_i = (a >> (i - 1)) & 1;
    bool bit_j = (a >> (j - 1)) & 1;

    // Если биты различаются, меняем их местами
    if (bit_i != bit_j) {
        // Устанавливаем i-ый бит в значение j-го бита
        a ^= (1 << (i - 1));

        // Устанавливаем j-ый бит в значение i-го бита
        a ^= (1 << (j - 1));
    }

    return a;
}

int main() {
    int a, i, j;

    cout << "Enter the number a: ";
    cin >> a;

    cout << "Enter the position i (1-based indexing): ";
    cin >> i;

    cout << "Enter the position j (1-based indexing): ";
    cin >> j;

    int result = swapBits(a, i, j);

    cout << "The number a with the " << i << "-th and " << j << "-th bits swapped is: " << result << endl;

    return 0;
}
//1. Функция swapBits(int a, int i, int j) принимает три аргумента : число a и позиции битов i и j(1 - based indexing).
//2. Внутри функции мы получаем значения i - го и j - го битов числа a с помощью побитовых операций.
//3. Если биты различаются, мы меняем их местами, используя побитовое исключающее ИЛИ(^).
//4. Результат возвращается из функции.
//5. В main() мы запрашиваем у пользователя число a, позиции битов i и j, вызываем функцию swapBits() и выводим результат.