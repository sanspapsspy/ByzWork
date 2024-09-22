#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Функция шифрования/дешифрования
void encrypt_decrypt(string input_file, string output_file, string key) {
    ifstream in_file(input_file, ios::binary);
    ofstream out_file(output_file, ios::binary);

    // Проверяем, что файлы открылись успешно
    if (!in_file.is_open() || !out_file.is_open()) {
        cout << "Error opening files." << endl;
        return;
    }

    // Получаем размер ключа
    int key_size = key.length();

    // Считываем данные из входного файла и шифруем/дешифруем их
    char byte;
    while (in_file.get(byte)) {
        out_file.put(byte ^ key[0]); // Применяем "xor" с первым символом ключа
        key = key.substr(1) + key[0]; // Циклический сдвиг ключа влево на 1 символ
    }

    in_file.close();
    out_file.close();
}

int main() {
    string input_file, output_file, key, action;

    cout << "Enter the input file name: ";
    cin >> input_file;

    cout << "Enter the output file name: ";
    cin >> output_file;

    cout << "Enter the encryption/decryption key: ";
    cin >> key;

    cout << "Enter 'encrypt' to encrypt the file or 'decrypt' to decrypt the file: ";
    cin >> action;

    if (action == "encrypt") {
        encrypt_decrypt(input_file, output_file, key);
        cout << "File encrypted successfully." << endl;
    }
    else if (action == "decrypt") {
        encrypt_decrypt(input_file, output_file, key);
        cout << "File decrypted successfully." << endl;
    }
    else {
        cout << "Invalid action. Please enter 'encrypt' or 'decrypt'." << endl;
    }

    return 0;
}
//1. Функция encrypt_decrypt(string input_file, string output_file, string key) выполняет шифрование / дешифрование файла.
//- Открываем входной и выходной файлы в двоичном режиме.
//- Получаем размер ключа key_size.
//- Считываем байты из входного файла, применяем "xor" с первым символом ключа и записываем результат в выходной файл.
//- Циклически сдвигаем ключ влево на 1 символ.
//- Закрываем файлы.
//2. В main() мы запрашиваем у пользователя :
//-Имя входного файла
//- Имя выходного файла
//- Ключ для шифрования / дешифрования
//- Действие : "encrypt" или "decrypt"
//3. Вызываем функцию encrypt_decrypt() с полученными параметрами и выводим сообщение об успешном выполнении операции.
//
//Пример использования :
//
//1. Запускаем программу.
//2. Вводим имя входного файла, например "input.txt".
//3. Вводим имя выходного файла, например "output.txt".
//4. Вводим ключ, например "mykey".
//5. Вводим "encrypt" для шифрования или "decrypt" для дешифрования.
//6. Программа зашифрует / расшифрует файл и выведет сообщение об успешном выполнении операции.
