#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //СОРТИРОВКИ
    /*
    srand(time(NULL));
    const int n = 5;
    int mas[n];
    for (int i = 0; i < n; i++)
        //cin >> mas[i];
        mas[i] = rand() % 10; //рандомайзер

    cout << "print mas: " << endl;
    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";
    cout << endl;

    //сортировка пузырьком
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (mas[j] > mas[j + 1]) //чтобы было в обратном порядке, надо поменять знак
            {
                int temp = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = temp;
            }
    cout << "print sort mas: " << endl;

    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";
    cout << endl;

    //сортировка выбором
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (mas[i] > mas[j]) //чтобы было в обратном порядке, надо поменять знак
                swap(mas[i], mas[j]);

    cout << "print sort mas: " << endl;

    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";
    cout << endl;

    //сортировка вставкой
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        while (j >= 0 && mas[j] > mas[j + 1]) //чтобы было в обратном порядке, надо поменять знак
            swap(mas[i], mas[j]);
        {
            swap(mas[j], mas[j + 1]);
            j--;
        }
    }

    cout << "print sort mas: " << endl;
    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";
    cout << endl;
    */

    //ЗАДАЧИ 1,3,
    setlocale(LC_ALL, "");
    srand(time(NULL));
    const int n = 5;
    int mas[n];

    cout << "enter mas: " << endl;

    for (int i = 0; i < n; i++)
        cin >> mas[i];
    cout << "print mas: " << endl;
    for (int i = 0; i < n; ++i)
    {
        //mas[i] = rand() % 10 + 1;
        //mas[i] = i + 1;
        cout << mas[i] << " ";
    }
    cout << endl;


    //ПРОВЕРКА НА ВОЗРАСТАНИЕ
    /*
    bool b = true;
    for (int i = 0; i < n - 1 && b; i++)
    {
        if (mas[i] > mas[i + 1])
            b = false;
    }

    if (b)
        cout << "массив возрастает" << endl;
    else
        cout << "массив не возрастает" << endl;
    */

    //ПРОВЕРКА, ЯВЛЯЕТСЯ ЛИ МАССИВ СИММЕТРИЧНЫМ (ПАЛИНДРОМ)
    /*
    bool b = true;
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        if (mas[i] != mas[j])
            b = false;
    }

    if (b)
        cout << "массив симметричный" << endl;
    else
        cout << "массив несимметричный" << endl;
    */

    //МАКСИМАЛЬНАЯ ВОЗРАСТАЮЩАЯ ПОДПОСЛЕДОВАТЕЛЬНОСТЬ В МАССИВЕ


    /*
    int maxLength = 1;  // минимальная длина - 1 элемент
    int currentLength = 1;
    int startIndex = 0;  // начало текущей последовательности
    int maxStartIndex = 0;  // начало максимальной последовательности

    for (int i = 1; i < n; i++) {
        if (mas[i] > mas[i - 1]) {
            currentLength++;
        }
        else {
            // Проверяем, не нашли ли мы более длинную последовательность
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIndex = startIndex;
            }
            // Начинаем новую последовательность
            currentLength = 1;
            startIndex = i;
        }
    }

    // Проверяем последнюю последовательность
    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStartIndex = startIndex;
    }

    // Выводим результат
    cout << "Возрастающая подпоследовательность максимальной длины ("
        << maxLength << " элементов): ";
    for (int i = maxStartIndex; i < maxStartIndex + maxLength; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
    */

    //МАКСИМАЛЬНАЯ СИММЕТРИЧНАЯ ПОДПОСЛЕДОВАТЕЛЬНОСТЬ В МАССИВЕ

    /*
    int maxLength = 1;
    int maxStart = 0;

    // Ищем симметричные подпоследовательности нечетной длины
    for (int center = 0; center < n; center++) {
        int left = center, right = center;
        while (left >= 0 && right < n && mas[left] == mas[right]) {
            int length = right - left + 1;
            if (length > maxLength) {
                maxLength = length;
                maxStart = left;
            }
            left--;
            right++;
        }
    }

    // Ищем симметричные подпоследовательности четной длины
    for (int center = 0; center < n - 1; center++) {
        int left = center, right = center + 1;
        while (left >= 0 && right < n && mas[left] == mas[right]) {
            int length = right - left + 1;
            if (length > maxLength) {
                maxLength = length;
                maxStart = left;
            }
            left--;
            right++;
        }
    }

    // Выводим результат
    cout << "Симметричная подпоследовательность максимальной длины ("
        << maxLength << " элементов): ";
    for (int i = maxStart; i < maxStart + maxLength; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
    */

    //СОРТИРОВКА 2 МАССИВОВ + СЛИЯНИЯ В ТРЕТИЙ МАССИВ + ЕГО СОРТИРОВКА

    //1 2 3 4 5 9
    //1 4 6 7 8 9 10 15 16
    //1 1 2 3 4 4 5 6 7 8 9 9 10 15 16

    /*const int n1 = 5, n2 = 8;
    int mas1[n1], mas2[n2], mas3[n1 + n2];
    cout << "print mas1: " << endl;
    for (int i = 0; i < n1; ++i)
    {
        mas1[i] = rand() % 20 + 1;
        cout << mas1[i] << " ";
    }
    cout << endl;
    cout << "print mas2: " << endl;
    for (int i = 0; i < n2; i++)
    {
        mas2[i] = rand() % 20 + 1;
        cout << mas2[i] << " ";
    }
    cout << endl;

    sort(mas1, mas1 + n1);
    sort(mas2, mas2 + n2);

    cout << "print sorted mas1: " << endl;
    for (int i = 0; i < n1; ++i)
        cout << mas1[i] << " ";
    cout << endl;
    cout << "print sorted mas2: " << endl;
    for (int i = 0; i < n2; i++)
        cout << mas2[i] << " ";

    cout << endl;

    int k = 0; //индексов 3-го массива
    for (int i = 0; i < n1; ++i) //1...n1....n1+n2-1
    {
        mas3[k] = mas1[i];
        k++;
    }

    for (int i = 0; i < n2; ++i)
    {
        mas3[k] = mas2[i];
        k++;
    }
    cout << "print mas3: " << endl;
    for (int i = 0; i < n1 + n2; ++i)
        cout << mas3[i] << " ";
    cout << endl;

    sort(mas3, mas3 + n1 + n2);
    cout << "print sorted mas3: " << endl;
    for (int i = 0; i < n1 + n2; i++)
        cout << mas3[i] << " ";

    cout << endl;
    */
}

