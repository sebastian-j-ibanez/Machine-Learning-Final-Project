// PROG71030 - Final Project
// By: Sebastian Ibanez

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
	Data(){
		this->x = 0;
		this->y = 0;
		this->z = 0;
		this->o = 0;
	}
	Data(double x, double y, double z, int o)
	{
		this->x=x;
		this->y=y;
		this->z = z;
		this->o = o;
	}
	double getX(void) {
		return x;
	}
	double getY(void) {
		return y;
	}
	double getZ(void) {
		return z;
	}
	int getO(void) {
		return o;
	}
	void setX(double x) {
		this->x = x;
	}
	void setY(double y) {
		this->y = y;
	}
	void setZ(double z) {
		this->z = z;
	}
	void setO(int o) {
		this->o = o;
	}
	double getDistanceFrom(Data point)
	{
		return( sqrt((pow((point.getX() - this->x),2) + pow((point.getY() - this->y),2) + pow((point.getZ() - this->z),2))));
	}

};