#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    char direction;
    int length;

    // Получаем направление линии от пользователя
    cout << "Введите направление линии (вверх - 'u', вниз - 'd', влево - 'l', вправо - 'r'): ";
    cin >> direction;


    // Получаем длину линии от пользователя
    cout << "Введите длину линии (целое число > 0): ";
    cin >> length;


    // Выводим линию
    if (direction == 'u') {
        for (int i = 0; i < length; ++i) {
            cout << "*" << endl;
        }
    }
    else if (direction == 'd') {
        for (int i = 0; i < length; ++i) {
            cout << endl << "*";
        }
    }
    else if (direction == 'l') {
        for (int i = 0; i < length; ++i) {
            cout << "*";
        }
        cout << endl;
    }
    else { // direction == 'r'
        for (int i = 0; i < length; ++i) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}