//����� - ��������� ��������� � ���������� ���� int.
//����������� �������� :
//[] � ������� �� �������;
//== -�������� �� ���������;
//> ����� � �������������� ����� ���������;
//-n - ������� ����� � �������� � ������� n.
//������: 2 3
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
        cout << "��������� x " << x << "\n������� �������� ���������:\n";
        cin >> x;
        cout << "������� ������ �������� ������� ����� �������: ";
        int i;
        cin >> i;
        cout << x[i] << endl;
        int k;
        cout << "������� ����� ������� ����� �����: ";
        cin >> k;
        x > k;
        if (x[3] == y[3])
            cout << x[3] << "==" << y[3];
        else
            cout << x[3] << "!=" << y[3];
        cout << "\n��������� y " << y;
        x = x - 2;
        cout << "\n��������� x " << x;
    }
    catch (error e)
    {
        e.what();
    }
    return 0;
}