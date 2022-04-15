// PROG71030 - Final Project
// By: Sebastian Ibanez, Kiana Safavi Baygi
#pragma once
#include"Data.h"
#include"Classifier.h"
#define TRAINING_FILE "trainingData"
#define TESTING_FILE "testingData"
#define UKNOWN_FILE "unknownData"

using namespace std;

class NNClassifier: public Classifier
{
	Data dataPoints[1000];
	Data testingPoints[200];
public:

	NNClassifier();
	void testing();
	void classify();
	void classify(double, double, double);
	Data nearestNeighbor(Data point);
};