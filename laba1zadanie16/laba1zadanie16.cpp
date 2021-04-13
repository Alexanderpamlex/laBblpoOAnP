#include <iostream>
using namespace std;

int geg(int arr[], const int SIZE)
{



    if (arr[SIZE] == 1) { arr[SIZE - 1] = 0; arr[SIZE + 1] = 0; return 0; }

    return geg(arr, SIZE - 1);

}
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "RU");
    const int SIZE = 9;
    int arr[SIZE];


    cout << "До" << endl;
    for (int i = 0; i < SIZE; i++)
    {

       cin>> arr[i]; // Напонение массива числами.
                     //Ещё можно вместо "cin >> arr[i];" написать "arr[i]=rand()%10" и тогда цикл сам заполнит массив случайными, неотрецательными числами меньше 10.

    }

    for (int i = 0; i < SIZE; i++)
    {

        cout << arr[i] << endl; // Вывод массива до вывода функции

    }
    cout << "///////////////////////////////////////////////////" << endl;

    geg(arr, SIZE); // Функция при которой заменяются все числа, граничащие с цифрой «1», нулями.
    cout << "После" << endl;
    for (int i = 0; i < SIZE; i++)
    {

        cout << arr[i] << endl; // Вывод массива после вывода функции

    }

}
