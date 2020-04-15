#include "set_3.h"
#include "Error_3.h"
#include <iostream>

using namespace std;

set_3::set_3(int s)
{
    if (s > MAX_SIZE) throw MaxSizeError();
    size = s;
    beg = new int[s];
    for (int i = 0; i < size; i++)
        beg[i] = 0;
}
set_3::set_3(const set_3& v)
{
    size = v.size;
    beg = new int[size];
    for (int i = 0; i < size; i++)
        beg[i] = v.beg[i];
}
set_3::~set_3()
{
    if (beg != 0) delete[]beg;
}
set_3::set_3(int s, int* mas)
{
    if (s > MAX_SIZE) throw MaxSizeError(); size = s;
    beg = new int[size];
    for (int i = 0; i < size; i++)
        beg[i] = mas[i];
}
const set_3& set_3::operator =(const set_3& v)
{
    if (this == &v)return *this;
    if (beg != 0) delete[]beg;
    size = v.size;
    beg = new int[size];
    for (int i = 0; i < size; i++)
        beg[i] = v.beg[i];
    return*this;
}
ostream& operator<<(ostream& out, const set_3& v)
{
    if (v.size == 0) out << "ѕустое\n";
    else
    {
        for (int i = 0; i < v.size; i++)
            out << v.beg[i] << " ";
        out << endl;
    }
    return out;
}
istream& operator >>(istream& in, set_3& v)
{
    for (int i = 0; i < v.size; i++)
    {
        cout << ">";
        in >> v.beg[i];
    }
    return in;
}
int set_3::operator [](int i)
{
    if (i < 0) throw IndexError1();
    if (i >= size) throw IndexError2();
    return beg[i];
}
bool operator==(const set_3& s1, const set_3& s2)
{
    return s1.size == s2.size;
}
set_3 set_3::operator -(int q)
{
    if (size == 0) throw MaxSizeError();
    if (size == 1)
    {
        size = 0;
        delete[]beg;
        beg = 0;
        return *this;
    };
    for (int i = 0; i < q; i++) {
        set_3 temp(size, beg);
        delete[]beg;
        size--;
        beg = new int[size];
        for (int i = 0; i < size; i++)
            beg[i] = temp.beg[i];
    }
    return*this;
}
set_3 set_3::operator>(int k)
{
    if (size == 0) throw EmptySizeError();
    else {
        for (int i = 0; i < size; i++)
            if (k == beg[i])
                cout << "Ёлемент найден\n ";
    }
    return *this;
}
