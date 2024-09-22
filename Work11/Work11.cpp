#include <iostream>
#include <cmath>

using namespace std;

// A) Склеить первые i битов с последними i битами
int concatenateFirstLastBits(int num, int len, int i) {
    // Маска для выделения первых i битов
    int mask1 = (1 << i) - 1;

    // Маска для выделения последних i битов
    int mask2 = mask1 << (len - i);

    // Выделяем первые i битов и последние i битов
    int first_i_bits = num & mask1;
    int last_i_bits = (num & mask2) >> (len - i);

    // Склеиваем первые i битов с последними i битами
    return (first_i_bits << (len - i)) | last_i_bits;
}

// B) Получить биты между первыми i битами и последними i битами
int getBitsBetween(int num, int len, int i) {
    // Маска для выделения битов между первыми i и последними i битами
    int mask = ((1 << (len - 2 * i)) - 1) << i;

    // Выделяем биты между первыми i и последними i битами
    return (num & mask) >> i;
}

int main() {
    int len, i, num;

    cout << "Enter the length of the integer (len): ";
    cin >> len;

    cout << "Enter the number of bits to concatenate (i): ";
    cin >> i;

    cout << "Enter the " << len << "-bit integer: ";
    cin >> num;

    // A) Склеить первые i битов с последними i битами
    int result_a = concatenateFirstLastBits(num, len, i);
    cout << "The concatenation of the first " << i << " bits and the last " << i << " bits is: " << result_a << endl;

    // B) Получить биты между первыми i битами и последними i битами
    int result_b = getBitsBetween(num, len, i);
    cout << "The bits between the first " << i << " bits and the last " << i << " bits are: " << result_b << endl;

    return 0;
}
//1. Функция concatenateFirstLastBits(int num, int len, int i) реализует задание A.Она принимает 32 - битное целое число num, длину числа len и количество битов для склеивания i.
//- Сначала мы создаем маски mask1 и mask2 для выделения первых i битов и последних i битов соответственно.
//- Затем мы выделяем первые i битов и последние i битов из числа num.
//- Наконец, мы склеиваем первые i битов с последними i битами, сдвигая первые i битов на len - i позиций влево и объединяя их с последними i битами.
//2. Функция getBitsBetween(int num, int len, int i) реализует задание B.Она принимает 32 - битное целое число num, длину числа len и количество битов для выделения i.
//- Мы создаем маску mask, которая выделяет биты между первыми i и последними i битами.
//- Затем мы выделяем эти биты из числа num и сдвигаем их на i позиций вправо.
//3. В main() мы запрашиваем у пользователя длину числа len, количество битов для склеивания / выделения i и само число num, затем вызываем обе функции и выводим результаты.
