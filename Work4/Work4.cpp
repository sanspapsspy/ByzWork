#include <iostream>
#include <cmath>

using namespace std;

int setKthBit(int a, int k) {
    // Вычисляем маску, которая устанавливает k-ый бит в 1
    int mask = 1 << (k - 1);

    // Применяем маску к числу a, чтобы установить k-ый бит
    return a | mask;
}

int main() {
    int a, k;

    cout << "Enter the number a: ";
    cin >> a;

    cout << "Enter the position k (1-based indexing): ";
    cin >> k;

    int result = setKthBit(a, k);

    cout << "The number a with the " << k << "-th bit set is: " << result << endl;

    return 0;
}
//1. Функция setKthBit(int a, int k) принимает два аргумента : число a и позицию бита k(1 - based indexing).
//2. Внутри функции мы вычисляем маску, которая устанавливает k - ый бит в 1, используя побитовый сдвиг влево : 1 << (k - 1).
//3. Затем мы применяем эту маску к числу a с помощью побитового ИЛИ(| ), чтобы установить k - ый бит.
//4. Результат возвращается из функции.
//5. В main() мы запрашиваем у пользователя число a и позицию бита k, вызываем функцию setKthBit() и выводим результат.