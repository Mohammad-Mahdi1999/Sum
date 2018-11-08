// In the name of God !
//Sum
//V1.2
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int num,i,sum=0;
	cout << "Enter two numbers :" << endl;
	for (i = 1; i <= 2; i++) 
	{
		cin >> num;
		sum = sum + num;
	}
	cout << "Sum of the numbers  is " << sum << "!" << endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\