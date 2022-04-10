// PROG71030 - Final Project
// By: Sebastian Ibanez

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Data
{
	enum class orientation { faceUP, faceDown, Portrait, PortraitDown, LandscapeLeft, LandscapeRight };
	orientation o;
	vector<int> x, y, z;
public:
	Data(int xInput, int yInput, int zInput, orientation oInput)
	{
		this->x.push_back(xInput);
		this->y.push_back(yInput);
		this->z.push_back(zInput);
		o = oInput;
	}

	Data(string fileName)
	{
		ifstream input;
		input.open(fileName);

		if (input.is_open())
		{
			while (!input.eof())
			{
				string line;
				getline(input, line);
				
			}
		}
	}

	double getDistanceFrom(Data point)
	{

	}

};