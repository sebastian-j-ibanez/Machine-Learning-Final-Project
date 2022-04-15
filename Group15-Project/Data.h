// PROG71030 - Final Project
// By: Sebastian Ibanez, Kiana Safavi Baygi

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include<sstream>

using namespace std;

class Data
{
	enum class orientation { faceUP, faceDown, Portrait, PortraitDown, LandscapeLeft, LandscapeRight };
	int o;
	double x, y, z;
public:
	Data();
	//Data(Data&);
	Data(double x, double y, double z, int o);
	double getX(void);
	double getY(void);
	double getZ(void);
	int getO(void);
	void setX(double x);
	void setY(double y);
	void setZ(double z);
	void setO(int o);
	double getDistanceFrom(Data point);
	//Data& operator=(Data&);
};