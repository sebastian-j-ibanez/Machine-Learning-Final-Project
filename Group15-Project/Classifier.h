// PROG71030 - Final Project
// By: Sebastian Ibanez, Kiana Safavi Baygi

#include"Data.h"
#pragma once

using namespace std;

/// <summary>
/// @brief This is a Classifier class. It is an abstract class.
/// 
/// @author Kiana and Sebastian
/// @date 15/04/2022
/// </summary>
class Classifier
{
	/// <summary>
	/// @brief This is a testing function.
	/// 
	/// This testing function is an abstract function.
	/// @author Kiana and Sebastian
	/// @date 02/04/2022
	/// </summary>
	virtual void testing() = 0;
	/// <summary>
	/// @brief This is a classify function.
	/// 
	/// This classify function is an abstract function.
	/// @author Kiana and Sebastian
	/// @date 02/04/2022
	/// </summary>
	virtual void classify() = 0;
};