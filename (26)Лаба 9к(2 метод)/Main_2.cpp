// ласс - контейнер ћЌќ∆≈—“¬ќ с элементами типа int.
//–еализовать операции :
//[] Ц доступа по индексу;
//== -проверка на равенство;
//> число Ц принадлежность числа множеству;
//-n - переход влево к элементу с номером n.
//ћетоды: 2 3
#include "set_2.h"
#include "Error_2.h"
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
        set_2 x(5);
        set_2 y(5);
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
    catch (error e)
    {
        e.what();
    }
    return 0;
}