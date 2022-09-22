#pragma once
#include <iostream>
#include "Matrix.h"
using namespace std;

class Point {
	int x;
	int y;
	int randNumber;

public:
	Point();
	Point(int a, int b);

	Point operator=(int a);
	Point operator+(int num);
	Point operator<<(int num);
	
	void plusRandNumber();

	friend ostream& operator<<(ostream& ost, const Point& obj);
	//friend ostream& operator<<(ostream& ost, Matrix<Point>& obj);

	void Input();
	void Print(); 
	
	

};
