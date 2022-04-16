// PROG71030 - Final Project
// By: Sebastian Ibanez, Kiana Safavi Baygi

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include<sstream>

using namespace std;

/// <summary>
/// @brief This is the Data class.
/// 
/// @author Kiana and Sebastian
/// @date 15/04/2022
/// </summary>
class Data
{
	int o;
	double x, y, z;
public:
	/// <summary>
	/// @brief This is the default constructor.
	/// 
	/// This constructor creates a Data object.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// </summary>
	Data();
	/// <summary>
	/// @brief This is the copy constructor constructor.
	/// 
	/// This constructor deep copies another Data object.
	/// @author Kiana and Sebastian
	/// @param Point: A Data object which will be deep copied.
	/// @date 15/04/2022
	/// </summary>
	Data(Data&);
	/// <summary>
	/// @brief This is the parameterized constructor.
	/// 
	/// This constructor initializes a Data object with additional information.
	/// @author Kiana and Sebastian
	/// @param X: A double value for the x position.
	/// @param Y: A double value for the y position.
	/// @param Z: A double value for the z position.
	/// @param O: A double value for the o position.
	/// @date 15/04/2022
	/// </summary>
	Data(double x, double y, double z, int o);
	/// <summary>
	/// @brief This is the getX function.
	/// 
	/// This function returns the x value from the current object.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// @return This function returns a double, for the x value.
	/// </summary>
	double getX(void);
	/// <summary>
	/// @brief This is the getY function.
	/// 
	/// This function returns the y value from the current object.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// @return This function returns a double, for the y value.
	/// </summary>
	double getY(void);
	/// <summary>
	/// @brief This is the getZ function.
	/// 
	/// This function returns the z value from the current object.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// @return This function returns a double, for the z value.
	/// </summary>
	double getZ(void);
	/// <summary>
	/// @brief This is the getO function.
	/// 
	/// This function returns the o value from the current object.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// @return This function returns an integer, for the o value.
	/// </summary>
	int getO(void);
	/// <summary>
	/// @brief This is the setX function.
	/// 
	/// This function sets the x value from the current object.
	/// @param This function takes a double, for the new x value.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// </summary>
	void setX(double x);
	/// <summary>
	/// @brief This is the setY function.
	/// 
	/// This function sets the y value from the current object.
	/// @param This function takes a double, for the new y value.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// </summary>
	void setY(double y);
	/// <summary>
	/// @brief This is the setZ function.
	/// 
	/// This function sets the z value from the current object.
	/// @param This function takes a double, for the new z value.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// </summary>
	void setZ(double z);
	/// <summary>
	/// @brief This is the setO function.
	/// 
	/// This function sets the o value from the current object.
	/// @param This function takes a double, for the new o value.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// </summary>
	void setO(int o);
	/// <summary>
	/// @brief This is the getDistanceFrom function.
	/// 
	/// This function sets returns the distance from the current Data to another Data.
	/// @param This function takes in a Data object as a parameter.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// @return This function returns a double, for the distance.
	/// </summary>
	double getDistanceFrom(Data);
	/// <summary>
	/// @brief This is the getOrientation function.
	/// 
	/// This function sets returns the orientation label from a Data object.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// @return This function returns a string, for the orientation.
	/// </summary>
	string getOrientation();
	/// <summary>
	/// @brief This is the assignment operator for =.
	/// 
	/// This function is the assignment operator for the Data class.
	/// @param Point: A Data object
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// @return This function returns a Data object.
	/// </summary>
	Data operator = (Data);
};