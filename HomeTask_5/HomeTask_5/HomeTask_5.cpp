#include <iostream>
using namespace std;

int main()
{
    //1
    /*int a, b, x, y, res = 0;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    setlocale(LC_ALL, "");


    for (int i = a; i <= b; ++i)
    {
        int cop = i;
        while (cop > 0)
        {
            int d = cop % 10; //запомнить последнюю цифру
            cop /= 10; //отбросить последнюю цифру
            res = d * 10 + cop;
            res /= 10;
        }

        int sum = 0;
        int cop2 = i;
        while (cop2 != 0)
        {

            sum = sum + cop2 % 10;
            cop2 = cop2 / 10;

        }

        int q = i % 10;
        cout << "Первая цифра = " << res << endl;
        cout << "Последняя цифра = " << q << endl;
        cout << "Сумма цифр = " << sum << endl;
    }
    */

    //2
    /*setlocale(LC_ALL, "");
    int rub, cop;
    cout << "enter rub = ";
    cin >> rub;
    cout << "enter cop = ";
    cin >> cop;
    int temp = rub * 100 + cop;
    if (temp == 0)
    {
        cout << "сдачи нет" << endl;

    }
    else
    {
        int t50 = 0;
        while (temp >= 50)
        {
            temp = temp - 50;
            t50++;
        }
        cout << "50 cop = " << t50 << endl;
        if (temp != 0)
        {
            int t10 = 0;
            while (temp >= 10)
            {
                temp = temp - 10;
                t10++;

            }
            cout << "10 cop = " << t10 << endl;
            if (temp != 0)
            {
                int t5 = 0;
                while (temp >= 5)
                {
                    temp = temp - 5;
                    t5++;

                }
                cout << "5 cop = " << t5 << endl;
                if (temp != 0)
                {
                    cout << "1 cop = " << temp << endl;
                }
            }
        }
    }
    */

    //3

}