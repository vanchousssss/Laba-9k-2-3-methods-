#pragma once
#include <string>
#include <iostream>
using namespace std;

class error //����� ������
{
protected:
    string str;
public:
    //�����������, ���������� ������� str ���������� �� ������ error(string s){str=s;}
    void what(); //������� �������� �������� str
    error(void);
    error(string);
};