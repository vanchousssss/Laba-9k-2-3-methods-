#pragma once
#include <iostream>
using namespace std;
const int MAX_SIZE = 20;
class set_3
{
    int size;
    int* beg;
public:
    set_3() { size = 0; beg = 0; }
    set_3(int s);
    set_3(int s, int* mas);
    set_3(const set_3& v);
    ~set_3();
    const set_3& operator=(const set_3& v);
    int operator[](int i);
    friend bool operator==(const set_3& s1, const set_3& s2);
    set_3 operator-(int q);
    set_3 operator>(int k);
    friend ostream& operator<<(ostream& out, const set_3& v);
    friend istream& operator>>(istream& in, set_3& v);
};