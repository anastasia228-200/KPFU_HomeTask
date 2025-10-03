#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //1
    /*double y = 0.0;
    int n;

    do
    {
        cout << "введите число n: " << endl;
        cin >> n;
        if (n <= 0)
        {
            cout << "число должно быть больше 0!" << endl;
        }
    } while (n <= 0);

    for (int i = 1; i <= n; i++) {
        y = y + 1.0 / i;
    }

    cout << "ряд y = ";
    cout << y;
    */


    //2
    /*double y = 0.0;
    int n;

    do
    {
        cout << "введите число n: " << endl;
        cin >> n;
        if (n <= 0)
        {
            cout << "число должно быть больше 0!" << endl;
        }
    } while (n <= 0);

    for (int i = 1; i <= n; i++) {
        y = sqrt(y + 2);
    }

    cout << "ряд y = ";
    cout << y;
    */

    //3
    /*double y = 1.0;
    int n,a;

    do
    {
        cout << "введите число n: " << endl;
        cin >> n;
        if (n <= 0)
        {
            cout << "число должно быть больше 0!" << endl;
        }
    } while (n <= 0);

    cout << "введите число a: " << endl;
    cin >> a;

    for (int i = 1; i < n; i++) {
        y = y * (a + i);
    }

    cout << "ряд y = ";
    cout << y;
    */

    //4
    /*int number;
    cout << "Введите число: ";
    cin >> number;

    int original = number;
    if (number < 0) {
        number = -number; //если число отрицательное
    }

    int temp = number;
    int count = 0;
    while (temp > 0) { //ищем кол-во цифр
        count++;
        temp = temp / 10;
    }
    if (count <= 1) {
        cout << "Результат: " << original << endl; //если в числе 1 цифра
        return 0;
    }
    int cop = number;
    int first = 0;
    while (cop > 0)
    {
        int d = cop % 10; //запомнить последнюю цифру
        cop /= 10; //отбросить последнюю цифру
        first = d * 10 + cop;
        first /= 10;
    }

    int last = number % 10;

    int middlePart = number;

    int power = 1;
    for (int i = 1; i < count; i++) {
        power = power * 10;
    }
    middlePart = middlePart % power; //убрать первую цифру
    middlePart = middlePart / 10; //убрать последнюю цифру

    int result = last; // ставим последнюю цифру на первое место

    // Добавляем среднюю часть
    if (count > 2) {
        result = result * power + middlePart * 10;
    }
    else {
        result = result * 10;
    }

    // Добавляем первую цифру на последнее место
    result = result + first;

    if (original < 0)
        result = -result;

    cout << "новое число = ";
    cout << result;
    */

    //5
    
    /*int number;
    cout << "Введите число: ";
    cin >> number;

    int original = number;
    if (number < 0) {
        number = -number; // если число отрицательное
    }

    int temp = number;
    int count = 0;
    while (temp > 0) { // ищем кол-во цифр
        count++;
        temp = temp / 10;
    }
    
    // Если число 0, то результат будет 10
    if (number == 0) {
        if (original < 0) {
            cout << "новое число = -10" << endl;
        } else {
            cout << "новое число = 10" << endl;
        }
    }

    int power = 1;
    for (int i = 1; i <= count; i++)
        power = power * 10;

    // Добавляем 1 в начало и 0 в конец
    int result = (number + power) * 10;

    if (original < 0)
        result = -result;

    cout << "новое число = ";
    cout << result;
    */
}

