// In the name of God !
//Sum
//V1.7
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int num[20],i=0,sum=0;
	cout << "Enter two numbers :" << endl;
	while (i<2)
	{
	cin >> num[i];
	i++;
	}
	for (i = 0; i < 2; i++)
		sum = num[i] + sum;
	cout << "Sum of the numbers  is " << sum << "!" << endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\