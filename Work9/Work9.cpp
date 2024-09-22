#include <iostream>
#include <cmath>

using namespace std;

int xorAllBits(int n, int p) {
    // Вычисляем маску, которая выделяет все биты
    int mask = (1 << p) - 1;

    // "Поксориваем" все биты
    int result = 0;
    for (int i = 0; i < p; i++) {
        result ^= (n & (1 << i));
    }

    return result;
}

int main() {
    int p;

    cout << "Enter the number of bits (p): ";
    cin >> p;

    int n;

    cout << "Enter the " << p << "-bit integer: ";
    cin >> n;

    int result = xorAllBits(n, p);

    cout << "The result of XORing all bits of the " << p << "-bit integer " << n << " is: " << result << endl;

    return 0;
}
//1. Функция xorAllBits(int n, int p) принимает два аргумента : n - 2 ^ p - разрядное целое число, и p - количество битов в числе.
//2. Внутри функции мы вычисляем маску mask, которая выделяет все p битов числа n(с помощью выражения(1 << p) - 1).
//3. Затем мы инициализируем переменную result значением 0 и последовательно "поксориваем" все биты числа n с помощью цикла for.На каждой итерации мы выделяем бит с помощью побитового И(&) и побитового исключающего ИЛИ(^) добавляем его к результату.
//4. Результат возвращается из функции.
//5. В main() мы запрашиваем у пользователя количество битов p и само число n, вызываем функцию xorAllBits() и выводим результат.