#include "set_3.h"
#include "Error_3.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    try
    {
        set_3 x(5);
        set_3 y(5);
        cout << "ћножество x " << x << "\n¬ведите элементы множества:\n";
        cin >> x;
        cout << "¬ведите индекс элемента который нужно вывести: ";
        int i;
        cin >> i;
        cout << x[i] << endl;
        int k;
        cout << "¬ведите какой элемент нужно найти: ";
        cin >> k;
        x > k;
        if (x[3] == y[3])
            cout << x[3] << "==" << y[3];
        else
            cout << x[3] << "!=" << y[3];
        cout << "\nћножество y " << y;
        x = x - 2;
        cout << "\nћножество x " << x;
    }
    catch (Error& e)
    {
        e.what();
    }
    return 0;
}