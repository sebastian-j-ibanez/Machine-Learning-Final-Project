// PROG71030 - Final Project
// By: Sebastian Ibanez, Kiana Safavi Baygi
#pragma once
#include"Data.h"
#include"Classifier.h"
#define TRAINING_FILE "trainingData"
#define TESTING_FILE "testingData"
#define UKNOWN_FILE "unknownData"
#define ARRAY_SIZE 175

using namespace std;

/// <summary>
/// @brief This is the NNClassifier class. It inherits from the Classifier class.
/// 
/// @author Kiana and Sebastian
/// @date 15/04/2022
/// </summary>
class NNClassifier: public Classifier
{
	Data dataPoints[ARRAY_SIZE];
	Data testingPoints[ARRAY_SIZE];
public:
	/// <summary>
	/// @brief This is the default constructor.
	/// 
	/// This constructor creates an NNClassifier object.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// </summary>
	NNClassifier();
	/// <summary>
	/// @brief This is the testing function. It overrides the inherited testing function.
	/// 
	/// This testing function overrides the inherited function. It tests the classifier by using the testing data.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// </summary>
	void testing();
	/// <summary>
	/// @brief This is the classify function. It overrides the inherited classify function.
	/// 
	/// This classify function overrides the inherited function. It assigns an orientation to the unknown data from file.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// </summary>
	void classify();
	/// <summary>
	/// @brief This is the parameterized classify function. It overrides the inherited classify function.
	/// 
	/// This classify function overrides the inherited function. It assigns an orientation to the individual unknown data point.
	/// @author Kiana and Sebastian
	/// @param X: A double value for the x position.
	/// @param Y: A double value for the y position.
	/// @param Z: A double value for the z position.
	/// @date 15/04/2022
	/// </summary>
	void classify(double, double, double);
	/// <summary>
	/// @brief This is the nearestNeighbor function.
	/// 
	/// This function finds the nearest neighbor to a specific data point.
	/// @author Kiana and Sebastian
	/// @param Point: A Data object
	/// @return Point: A Data object by reference
	/// @date 15/04/2022
	/// </summary>
	Data& nearestNeighbor(Data point);
};