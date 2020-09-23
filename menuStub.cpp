///////////////////////////////////////////////////////////////////////
// Name: Brandon Fisher
// Date: September 22, 2020
// Class: CSC 414 Software Development
// Purpose: The purpose of this project is to display a menu of ten 
// items.
///////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

// Declare function prototypes.
void displayMenu();
void add();
void multiply();
void subtract();
void divide();
void coffee();
void donuts();
void soda();
void jokeOne();
void jokeTwo();
void jokeThree();


int main()
{
	// Call the function.
	displayMenu();

	cout << "\n";

	// Pause and return 0.
	system("pause");
	return 0;
}

// This function will display the menu.
void displayMenu()
{
	// Declare and initialize variables.
	int choice = 0;

	while (choice != 11)
	{
		cout << "\n";

		// Label.
		cout << " Menu: " << endl;

		cout << "\n";

		// Display Menu
		cout << " 1. Add Two and Two" << endl;
		cout << " 2. Multiply Two and Four" << endl;
		cout << " 3. Subtract Ten and Three" << endl;
		cout << " 4. Divide Six by Three" << endl;
		cout << " 5. Iced Coffee Price" << endl;
		cout << " 6. Dozen glazed donuts price" << endl;
		cout << " 7. Two-Liter Soda Price" << endl;
		cout << " 8. Whats 9 + 10?" << endl;
		cout << " 9. What did the decimal number say?" << endl;
		cout << " 10. What's racecar backwards?" << endl;
		cout << " 11. Exit" << endl;

		cout << "\n";

		// Label.
		cout << "Choice: ";

		// Accept choice.
		cin >> choice;

		// This displays if you enter something other than the choices.
		if (choice > 11 || choice < 1)
		{
			cout << "\n";

			// Display
			cout << "error. Try Again!" << endl;
		}

		// If option 1 is picked.
		if (choice == 1)
		{
			// Call the add function.
			add();
		}

		// If option 2 is picked.
		if (choice == 2)
		{
			// Call the multiply function.
			multiply();
		}

		// If option 3 is picked.
		if (choice == 3)
		{
			// Call the subtract function.
			subtract();
		}

		// If option 4 is picked.
		if (choice == 4)
		{
			// Call the divide function.
			divide();
		}

		// If option 5 is picked.
		if (choice == 5)
		{
			// Call the coffee function.
			coffee();
		}

		// If option 6 is picked.
		if (choice == 6)
		{
			// Call the donuts function.
			donuts();
		}

		// If option 7 is picked.
		if (choice == 7)
		{
			// Call the soda function.
			soda();
		}

		// If option 8 is picked.
		if (choice == 8)
		{
			// Call the jokeOne function.
			jokeOne();
		}

		// If option 9 is picked.
		if (choice == 9)
		{
			// Call the jokeTwo function.
			jokeTwo();
		}

		// If option 10 is picked.
		if (choice == 10)
		{
			// Call the jokeThree function.
			jokeThree();
		}
	}
}

// This function will add two numbers.
void add()
{
	// Declare and initialize variables.
	int result = 0;
	int numberOne = 2;
	int numberTwo = 2;

	// Find result.
	result = numberOne + numberTwo;

	cout << "\n";

	// Display result.
	cout << "The result is: " << result << endl;

}

// This function will multiply two numbers.
void multiply()
{
	// Declare and initialize variables.
	int product = 0;
	int numberOne = 2;
	int numberTwo = 4;

	// Find result.
	product = numberOne * numberTwo;

	cout << "\n";

	// Display result.
	cout << "The product is: " << product << endl;

}

// This function will subtract two numbers.
void subtract()
{
	cout << "\n";

	// Display result.
	cout << " This item is incomplete."<< endl;

}


// This function will divide two numbers.
void divide()
{
	// Declare and initialize variables.
	int qoutient = 0;
	int numberOne = 6;
	int numberTwo = 3;

	// Find result.
	qoutient = numberOne / numberTwo;

	cout << "\n";

	// Display result.
	cout << "The qoutient is: " << qoutient << endl;

}

// This function will display iced coffee price.
void coffee()
{
	cout << "\n";

	// Display.
	cout << " The coffee costs $1.75" << endl;
}

// This function will display donuts price.
void donuts()
{
	cout << "\n";

	// Display.
	cout << " A dozen glazed donuts will costs $12.45" << endl;
}

// This function will display donuts price.
void soda()
{
	cout << "\n";

	// Display.
	cout << " A two liter soda costs $2.25" << endl;
}

// This function will display joke one.
void jokeOne()
{
	cout << "\n";

	// Display.
	cout << " 21" << endl;
}

// This function will display joke two.
void jokeTwo()
{
	cout << "\n";

	// Display.
	cout << " We all float down here." << endl;
}

// This function will display joke three.
void jokeThree()
{
	cout << "\n";

	// Display.
	cout << " racecar." << endl;
}

