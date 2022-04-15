// PROG71030 - Final Project
// By: Sebastian Ibanez
#include"Data.h"
#pragma once
#define TRAINING_FILE "trainingData"
#define TESTING_FILE "testingData"
#define UKNOWN_FILE "unknownData"

using namespace std;

class Classifier
{
	Data dataPoints[1000];
	Data testingPoints[200];
public:

	Classifier() 
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
					getline(issdimention, z,',');
					getline(issdimention, orientation);

				}
				
				this->dataPoints[i] = Data(stod(x),stod(y),stod(z),stoi(orientation));
				i++;
			}
		}
		input.close();

	}

	void testing()
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
					getline(issdimention, z,',');
					getline(issdimention, orientation);

				}
				
				this->testingPoints[i] = Data(stod(x),stod(y),stod(z),stoi(orientation));
				i++;
			}

		}
		input.close();
		
		for (int j = 0; j < i; j++)
		{
			Data nearestNeighbor = this->nearestNeighbor(testingPoints[j]);
			if (nearestNeighbor.getO() != testingPoints[j].getO())
			{
				cout << "Incorrect label found." << endl;
				exit(1);
			}
		}
		
		cout << "Testing data labeled correctly :)" << endl;

	}

	Data nearestNeighbor(Data point){
		double d;
		Data nearestNeighbor;
		
		
			for (int c = 0; c < 1000; c++)
			{
				if (point.getDistanceFrom(dataPoints[c]) < point.getDistanceFrom(dataPoints[c + 1]))
					nearestNeighbor = dataPoints[c];
			}
			
		
		return nearestNeighbor;
	}


};