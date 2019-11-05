
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

	int main()
	{
		cout << "program to display the table of the number" << endl<<endl;
		int counter, givenNumber, result;
		counter = 1;
		cout << "enter a number:";
		cin >> givenNumber;
		
		while (counter <= 10)
		{
			result = givenNumber * counter;
			cout <<endl<< n << " * " <<setw(2) <<counter << " = " << setw(5)<< result << endl;
			counter = counter + 1;
		}
		return 0;
	}
