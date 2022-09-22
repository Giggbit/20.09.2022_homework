#include "Point.h"
#include "Matrix.h"
#include <iostream>
using namespace std;


Point::Point() {  
	x = 0;
	y = 0;
}

Point::Point(int a, int b) {
	x = a;
	y = b;
}

Point Point::operator= (int a) {
	randNumber = a;
	return *this;
}

Point Point::operator+(int num) {
	this->plusRandNumber();
	return *this;
}


void Point::plusRandNumber() {
	this->randNumber += 3;
}

Point Point::operator<<(int num) {
	cout << num << endl;
	return *this;
}

ostream& operator<<(ostream& ost, const Point& obj) {
	ost << obj.randNumber;
	return ost;
}



void Point::Input() {
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
}

void Point::Print() {
	cout << "x = " << x << "\ny = " << y << endl;
}

