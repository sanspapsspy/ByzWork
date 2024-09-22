#include <iostream>
#include <cmath>

using namespace std;

int clearLowerBits(int a, int k) {
    // Вычисляем маску, которая обнуляет младшие k бита
    int mask = ~((1 << k) - 1);

    // Применяем маску к числу a, чтобы обнулить младшие k бита
    return a & mask;
}

int main() {
    int a, k;

    cout << "Enter the number a: ";
    cin >> a;

    cout << "Enter the number of lower bits to clear: ";
    cin >> k;

    int result = clearLowerBits(a, k);

    cout << "The number a with the lower " << k << " bits cleared is: " << result << endl;

    return 0;
}
//1. Функция clearLowerBits(int a, int k) принимает два аргумента : число a и количество младших битов k, которые нужно обнулить.
//2. Внутри функции мы вычисляем маску, которая обнуляет младшие k бита, используя побитовые операции.Сначала мы создаем маску, состоящую из k единиц(1 << k), а затем инвертируем ее с помощью побитового отрицания(~).
//3. Затем мы применяем эту маску к числу a с помощью побитового И(&), чтобы обнулить младшие k битов.
//4. Результат возвращается из функции.
//5. В main() мы запрашиваем у пользователя число a и количество младших битов k, вызываем функцию clearLowerBits() и выводим результат.