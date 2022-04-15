// PROG71030 - Final Project
// By: Sebastian Ibanez, Kiana Safavi Baygi

#include"Classifier.h"
#include"Data.h"

using namespace std;

/// <summary>
/// @brief This is the AnotherClassifier class. It inherits from the Classifier class.
/// 
/// @author Kiana and Sebastian
/// @date 15/04/2022
/// </summary>
class AnotherClassifer:public Classifier {

public:
	/// <summary>
	/// @brief This is the testing function. It overrides the inherited testing function.
	/// 
	/// This testing function overrides the inherited function. It prints a message to the user.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// </summary>
	void testing();
	/// <summary>
	/// @brief This is the classify function. It overrides the inherited classify function.
	/// 
	/// This classify function overrides the inherited function. It prints a message to the user.
	/// @author Kiana and Sebastian
	/// @date 15/04/2022
	/// </summary>
	void classify();
};