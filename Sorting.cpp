//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Date: 11/17/20
// Class: CSC 414 
// Works Cited: C++ Programming From Problem Analysis to Program
// Design by D.S. Malik, https://www.educative.io/edpresso/what-is-the-stdsort-function-in-cpp,
// https://www.tutorialspoint.com/questions/question.php?qid=sort-an-array-of-strings-according-to-string-lengths-in-cplusplus
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

// Declare function prototypes.
void print(string[]);

int main()
{
	// Declare and initialize variables.
	string names[5] = {};
	string name;
	int count = 0;

	// This for loop will allow the user to input five names.
	for (int i = 0; i < 5; i++)
	{
		// Counter.
		count = count + 1;

		// Tag.
		cout << "Enter name " << count << ": ";

		// Input name.
		cin >> name;

		// Insert names into list.
		names[i] = name;
	}

	// Using the included algorithm library we can sort the list
	// using built in functions.
	std::sort(names, names + 5);
	
	// Call the print function.
	print(names);

	system("pause");
	return 0;
}

// This function will print the result.
void print(string names[])
{
	// Create an output file.
	ofstream outFile;

	// Open output file.
	outFile.open("Sorted Names");

	// Header.
	outFile << "The Sorted Names Are: " << endl;

	outFile << '/n';

	// This for loop will print the result.
	for (int i = 0; i < 5; i++)
	{
		// Output the sorted names.
		outFile << names[i] << endl;
	}
	
	// Close the output file.
	outFile.close();
}
