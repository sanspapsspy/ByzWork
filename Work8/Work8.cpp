﻿#include <iostream>
#include <cmath>

using namespace std;

int maxPowerOf2(int n) {
    // Если число 0, то нет максимальной степени 2
    if (n == 0) {
        return 0;
    }

    // Находим максимальную степень 2, на которую делится число
    int power = 0;

    // Проверяем младший бит
    if ((n & 1) == 0) {
        power++;
        n >>= 1;
    }

    // Рекурсивно проверяем следующий бит
    if ((n & 1) == 0) {
        power++;
        n >>= 1;
    }

    // Рекурсивно проверяем следующий бит
    if ((n & 1) == 0) {
        power++;
        n >>= 1;
    }

    // Рекурсивно проверяем следующий бит
    if ((n & 1) == 0) {
        power++;
        n >>= 1;
    }

    // Рекурсивно проверяем следующий бит
    if ((n & 1) == 0) {
        power++;
        n >>= 1;
    }

    // Рекурсивно проверяем следующий бит
    if ((n & 1) == 0) {
        power++;
        n >>= 1;
    }

    // Рекурсивно проверяем следующий бит
    if ((n & 1) == 0) {
        power++;
        n >>= 1;
    }

    // Рекурсивно проверяем следующий бит
    if ((n & 1) == 0) {
        power++;
        n >>= 1;
    }

    return power;
}

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    int result = maxPowerOf2(n);

    cout << "The maximum power of 2 that divides " << n << " is: " << result << endl;

    return 0;
}
//
//1. Функция maxPowerOf2(int n) принимает целое число n и возвращает максимальную степень 2, на которую делится это число.
//2. Если n равно 0, то нет максимальной степени 2, поэтому возвращаем 0.
//3. Для нахождения максимальной степени 2 мы используем следующий алгоритм :
//-Инициализируем переменную power значением 0, которая будет хранить максимальную степень 2.
//- Последовательно проверяем младший бит числа n.Если он равен 0 (то есть число делится на 2), мы увеличиваем power на 1 и сдвигаем n вправо на 1 бит(n >>= 1).
//- Затем мы рекурсивно вызываем эту проверку для следующего бита.
//- Когда младший бит станет равен 1 (число больше не делится на 2), мы возвращаем power как максимальную степень 2.
//4. В main() мы запрашиваем у пользователя целое число, вызываем функцию maxPowerOf2() и выводим результат.