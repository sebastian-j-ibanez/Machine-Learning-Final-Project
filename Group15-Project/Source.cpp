// PROG71030 - Final Project
// By: Sebastian Ibanez, Kiana Safavi Baygi

#include"AnotherClassifier.h"
#include"NNClassifier.h"
#include"Data.h"
#include"Classifier.h"
#include<iostream>

using namespace std;

int main()
{
	NNClassifier classifier;
	
	cout << "Select an option:" << endl;
	cout << "1) Read data from testing file" << endl;
	cout << "2) Read data from unknown file" << endl;
	cout << "3) Manually enter a single coordinate" << endl;

	do
	{
		int option = 0;
		cin >> option;
		switch (option)
		{
		case 1:
		{
			classifier.testing();
			return 0;

		}
		case 2:
		{
			classifier.classify();
			return 0;
		}
		case 3:
		{
			string x, y, z;
			cout << "Please enter the x value" << endl;
			cin >> x;

			cout << "Please enter the y value" << endl;
			cin >> y;

			cout << "Please enter the z value" << endl;
			cin >> z;

			classifier.classify(stod(x), stod(y), stod(z));
			return 0;
		}
		default:
			system("cls");
		}
	} while (true);
	
	return 0;
}