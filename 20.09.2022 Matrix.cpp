#include <iostream>
#include"Matrix.h"
#include"Point.h"
#include<time.h>
using namespace std;


Matrix<Point> operator+(int a, Matrix<Point>& obj) {
	Matrix<Point> result(obj.GetX() + a, obj.GetY() + a);
	return result;
}


int main() {
	srand(time(0));

	/*Matrix<Point> a(2, 2);
	a.Random();*/
	//a.Print();

	//cout << a << endl;    

	/*cout << endl;
	Matrix<Point> sum = a + 3;  
	sum.Print();*/

	/*Matrix<Point> sum2 = 3 + a;
	sum2.Print();*/

	/*sum > sum2;*/

}



