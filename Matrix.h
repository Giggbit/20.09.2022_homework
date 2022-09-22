#pragma once
#include<iostream>
#include "Point.h"
#include <time.h>
using namespace std;


template<class T>
class Matrix
{
	T** mas;
	int str;
	int stolb;
public:

	Matrix();
	Matrix(int st, int stolb);
	//----
	Matrix(const Matrix<T>& obj);
	~Matrix();
	Matrix<T>& operator=(const Matrix<T>& obj);
	Matrix<T> operator+(int a);
	Matrix<T>& operator>(Matrix<T>& obj);
	//-----

	int GetX() const;
	void SetX(int a);

	int GetY() const;
	void SetY(int a);

	void Random();
	void Print();

	//friend ostream& operator<<(ostream& ost, Matrix<Point>& obj);

};
template<class T>
Matrix<T>::Matrix()
{
	mas = nullptr;
	str = stolb = 0;
}

template<class T>
Matrix<T>::Matrix(int st, int stol)
{
	str = st;
	stolb = stol;
	mas = new T * [str];
	for (int i = 0; i < str; i++)
	{
		mas[i] = new T[stolb];
	}
}

template<class T>
Matrix<T>::Matrix(const Matrix<T>& obj)
{
	str = obj.str;
	stolb = obj.stolb;
	mas = new T * [str];
	for (int i = 0; i < str; i++)
	{
		mas[i] = new T[stolb];
	}
	// copy
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			mas[i][j] = obj.mas[i][j];
		}
	}
}

template<class T>
Matrix<T>::~Matrix()
{
	for (int i = 0; i < str; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;
}


template<class T>
inline int Matrix<T>::GetX() const {
	return str;
}

template<class T>
inline void Matrix<T>::SetX(int a) {
	str = a;
}

template<class T>
inline int Matrix<T>::GetY()const {
	return stolb;
}

template<class T>
inline void Matrix<T>::SetY(int a) {
	stolb = a;
}


template<class T>
void Matrix<T>::Random() {
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < stolb; j++) {
			mas[i][j] = rand() % 100 * 1.6;
		}
	}
}

template<class T>
void Matrix<T>::Print() {
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << endl << endl;
	}
}

template<class T>
Matrix<T>& Matrix<T>::operator=(const Matrix<T>& obj)
{
	if (this == &obj)
	{
		return *this;
	}
	if (mas != nullptr)
	{
		this->~Matrix();
	}

	//copy
	str = obj.str;
	stolb = obj.stolb;
	mas = new T * [str];
	for (int i = 0; i < str; i++)
	{
		mas[i] = new T[stolb];
	}
	// copy
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			mas[i][j] = obj.mas[i][j];
		}
	}
	return *this;
}

template<class T>
inline Matrix<T> Matrix<T>::operator+(int a) {
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < stolb; j++) {
			mas[i][j] + a;
		}
	}
	return *this;
}

template <class T>
Matrix<T>& Matrix<T>::operator>(Matrix<T>&obj) {
	int count_a = 0;
	int count_b = 0;

	for (int i = 0; i < str; i++) {
		for (int j = 0; j < stolb; j++) {
			if (mas[i][j] > obj.mas[i][j]) {
				count_a++;
			}
			else if (mas[i][j] < obj.mas[i][j]) {
				count_b++;
			}
		}
	}
	if (count_a > count_b) {
		cout << "mas_1 > mas_2" << endl;
	}
	else {
		cout << "mas_1 < mas_2" << endl;
	}

	return *this;
}

//ostream& operator<<(ostream& ost, Matrix<Point>& obj) {
//	ost << obj.mas;
//	return ost;
//}




