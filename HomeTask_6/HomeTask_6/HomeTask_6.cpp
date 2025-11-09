#include <iostream>
using namespace std;

int main()
{
    //1, 2, 3, 4, 5, 6, 7, 

    const int n = 5;
    int mas[n];
    cout << "enter mas: " << endl;
    for (int i = 0; i < n; ++i)
        cin >> mas[i];
    cout << "print mas" << endl;
    for (int i = 0; i < n; ++i)
        cout << mas[i] << " ";
    cout << endl;

    /*
    //сумма элементов массива
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum = sum + mas[i];
    cout << "sum = " << sum << endl;

    //минимум из массива
    int min = mas[0];
    for (int i = 0; i < n; ++i)
    {
        if (min > mas[i])
            min = mas[i];
    }
    cout << "min = " << min << endl;

    //максимум из массива
    int max = mas[0];
    for (int i = 0; i < n; ++i)
    {
        if (max < mas[i])
            max = mas[i];
    }
    cout << "max = " << max << endl;

    //вывод элементов с четными индексами
    cout << "even elements = ";
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
            cout << mas[i] << " ";
    }
    cout << endl;

    //сумма отрицательных элементов массива
    cout << "sum of negative elements = ";
    int otr = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0)
            otr = otr + mas[i];
    }
    cout << otr << endl;

    //количество минимальных элементов в массиве
    int count_min = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == min)
            count_min++;
    }
    cout << "number of minimal elements = " << count_min << endl;

    //поменять первый и последний элементы
    //первый элемент - индекс [0]
    //последний элемент - индекс [n-1]
    int temp = mas[0];
    mas[0] = mas[n - 1];
    mas[n - 1] = temp;

    cout << "print new mas:" << endl;
    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";
    cout << endl;
    

    //циклический сдвиг влево на одну позицию
    int temp1 = mas[0];
    for (int i = 0; i < n - 1; i++)
    {
        mas[i] = mas[i + 1];

    }
    mas[n - 1] = temp1;

    cout << "print new mas (left shift 1): " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;
    

    //циклический сдвиг вправо на две позиции
    int temp2 = mas[n - 2];
    int temp3 = mas[n - 1];
    for (int i = n - 1; i > 1; i--)
    {
        mas[i] = mas[i - 2];

    }
    mas[0] = temp2;
    mas[1] = temp3;

    cout << "print new mas (right shift 2): " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;
    */

    //поменять в массиве минимальный и максимальный элементы

    int min_index = 0;
    int max_index = 0;
    
    for (int i = 0; i < n; i++) {
        if (mas[i] < mas[min_index]) {
            min_index = i; //найден индекс минимума
        }
        if (mas[i] > mas[max_index]) {
            max_index = i; //найден индекс максимума
        }
    }

    cout << "min element: " << mas[min_index] << " at index " << min_index << endl;
    cout << "max element: " << mas[max_index] << " at index " << max_index << endl;

    int temp = mas[min_index];
    mas[min_index] = mas[max_index];
    mas[max_index] = temp;

    cout << "swapping min and max: " << endl;
    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";
    cout << endl;
}
