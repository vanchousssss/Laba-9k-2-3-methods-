#pragma once
#include <string>
#include <iostream>
using namespace std;

class Error//������� �����
{
public:
	virtual void what() {};
};
class IndexError :public Error //������ � ������� �������
{
protected:
	string msg;
public:
	IndexError() { msg = "������ � �������\n"; }
	virtual void what() { cout << msg; }
};
class SizeError :public Error //������ � ������� �������
{
protected:
	string msg;
public:
	SizeError() { msg = "������ � �������\n"; }
	virtual void what() { cout << msg; }
};
class MaxSizeError :public SizeError //���������� ������������� �������
{
protected:
	string msg_;
public:
	MaxSizeError() { SizeError(); msg_ = "���������� ��������� ������ ���������\n"; } virtual void what() { cout << msg << msg_; }

};
class EmptySizeError :public SizeError //�������� �� ������� �������
{
protected:
	string msg_;
public:
	EmptySizeError() { SizeError(); msg_ = "��������� ������\n"; } virtual void what() { cout << msg << msg_; }
};
class IndexError1 :public IndexError //������ ������ ����
{
protected:
	string msg_;
public:
	IndexError1() { IndexError(); msg_ = "������ <0\n"; } virtual void what() { cout << msg << msg_; }
};
class IndexError2 :public IndexError //������ ������ �������� ������� �������
{
protected:
	string msg_;
public:
	IndexError2() { IndexError(); msg_ = "������ ������ ���������� ���������\n"; } virtual void what() { cout << msg << msg_; }
};


