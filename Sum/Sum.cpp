// In the name of God !
//Sum
//V2.0
#include "stdafx.h"
#include <iostream>
using namespace std;
void sum(double x,double y)
{
	double sum;
	sum = x + y;
	cout  << "=   " << sum << endl;
}
void main()
{
	double x,y;
	cout << "Enter two numbers :" << endl;
	cout << "    ";
	cin >> x;
	cout << "+   ";
	cin >> y;
	cout << "____________" << "\n";
	sum(x, y);
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\