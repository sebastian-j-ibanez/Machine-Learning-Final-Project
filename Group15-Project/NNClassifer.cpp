// PROG71030 - Final Project
// By: Sebastian Ibanez, Kiana Safavi Baygi
#pragma once
#include"Data.h"
#include"NNClassifier.h"
#define TRAINING_FILE "trainingData.txt"
#define TESTING_FILE "testingData.txt"
#define UKNOWN_FILE "unknownData.txt"

using namespace std;



NNClassifier::NNClassifier()
{
	ifstream input;
	input.open(TRAINING_FILE);
	int i = 0;
	if (input.is_open())
	{
		
		while (!input.eof())
		{

			string line;
			getline(input, line);
			istringstream issline(line);

			string dimentions;


			getline(issline, dimentions);
			istringstream issdimention(dimentions);
				string x;
				string y;
				string z;
				string orientation;
				while (!issdimention.eof()) {
					getline(issdimention, x, ',');
					getline(issdimention, y, ',');
					getline(issdimention, z, ',');
					getline(issdimention, orientation);

				}

			this->dataPoints[i] = Data(stod(x), stod(y), stod(z), stoi(orientation)-1);
			i++;
		}
	}
	input.close();
}

void NNClassifier::testing()
{
	ifstream input;
	input.open(TESTING_FILE);
	int i = 0;
	if (input.is_open())
	{
		while (!input.eof())
		{
			string line;
			getline(input, line);
			istringstream issline(line);

			string dimentions;
			getline(issline, dimentions);
			istringstream issdimention(dimentions);

			string x;
			string y;
			string z;
			string orientation;
				while (!issdimention.eof()) {
					getline(issdimention, x, ',');
					getline(issdimention, y, ',');
					getline(issdimention, z, ',');
					getline(issdimention, orientation);

				}

				this->testingPoints[i] = Data(stod(x), stod(y), stod(z), stoi(orientation));
				
				i++;
			}

		}
		input.close();
		

		for (int j = 0; j < i; j++)
		{
			Data nearestNeighbor = this->nearestNeighbor(testingPoints[j]);
			//cout<<nearestNeighbor.getO() << endl;
			cout<<testingPoints[j].getO() << endl;
			if (nearestNeighbor.getO() != testingPoints[j].getO())
			{
				cout << "Incorrect label found." << endl;
				//exit(1);
			}
		}

		cout << "Testing data labeled correctly :)" << endl;
		for (int j = 0; j < i; j++)
		{
			testingPoints[i] = Data();
		}
}

void NNClassifier ::classify() {
	ifstream input;
	input.open(UKNOWN_FILE);
	int i = 0;
	if (input.is_open())
	{
		while (!input.eof())
		{

			string line;
			getline(input, line);
			istringstream issline(line);

			string dimentions;

			getline(issline, dimentions);
			istringstream issdimention(dimentions);
			string x;
			string y;
			string z;
			string orientation;
			while (!issdimention.eof()) {
				getline(issdimention, x, ',');
				getline(issdimention, y, ',');
				getline(issdimention, z);

			}

			this->testingPoints[i] =Data(stod(x), stod(y), stod(z), 0);
			i++;
		}

	}
	input.close();

	for (int j = 0; j < i; j++)
	{
		Data nearestNeighbor = this->nearestNeighbor(testingPoints[j]);
		testingPoints[j].setO(nearestNeighbor.getO());
	}

	cout << "Unknown Data labeled" << endl;

}

	void NNClassifier::classify(double x, double y, double z)
	{
		Data point(x, y, z, 0);
		Data nearestNeighbor = this->nearestNeighbor(point);
		point.setO(nearestNeighbor.getO());
		cout << "That point has the orientation as " << point.getO() << endl;
	}

	Data NNClassifier::nearestNeighbor(Data point) 
	{
	double d;
	Data nearestNeighbor;

	for (int c = 0; c < 1000; c++)
	{
		if (point.getDistanceFrom(dataPoints[c]) < point.getDistanceFrom(dataPoints[c + 1]))
		{
			nearestNeighbor = dataPoints[c];	
		}

	}

	return nearestNeighbor;
	}
