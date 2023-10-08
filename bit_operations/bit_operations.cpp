#include <iostream>
#include <cmath>
using namespace std;

int mer(uint32_t a, uint32_t mask, int N, int K) {
    mask = mask | 31;
    //Сдвиг маски влево на N-позиций
    mask = mask << N;
    //Обнуление переменной, равной числу в двоичной системе счисления
    a = a & mask;
    cout << "Результат операций в десятичной системе счисления=\t\t\t\t" << (int)a << endl;
    cout << "Результат операций в двоичной системе счисления=\t\t\t\t";
    for (int i = 31; i >= K; i--) {
        if (a & (1 << i))
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;
    return 0;
}

int main() {
    setlocale(LC_ALL, "ru");
    int f, K, N;
    cout << "Введите целое число=\t\t\t\t\t\t\t\t ";
    cin >> f;
    cout << "Введите номер бита, с которого начнется побитовое обнуление целого числа=\t";
    cin >> N;
    K = 0;
    cout << "Конечный номер бита, до которого будет происходить побитовое обнуление числа=\t" << K << endl;
    uint32_t a = f;
    uint32_t mask = 0;
    try {
        if (f == 0)
            throw "Ошибка!";
        mer(f, 0, N, K);
    }
    catch(...) {
        cout << "Произвести побитовое обнуление числа невозможно" << endl;
    }
    system("pause");
    return 0;
}
