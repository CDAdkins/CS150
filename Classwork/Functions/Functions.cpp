#include <iostream>
using namespace std;

int globalInt = 0;
int referenceInt = 20;

void doubleIntChar() {
	double aDouble = 1;
	int anInt = 2;
	char aChar = ' ';
	cout << aDouble << " " << aChar << " " << anInt;
}

void division(int one, int two, int three) {
	int denominator = 2;
	cout << "\nFirst Remainder: " << one / denominator;
	cout << "\nSecond Remainder: " << two / denominator;
	cout << "\nThird Remainder: " << three / denominator;
}

void inOrder() {
	int ints[3];

	int smallest = NULL;
	int middle = NULL;
	int largest = NULL;

	cout << "Enter the first number: ";
	cin >> ints[0];
	cout << "Enter the second number: ";
	cin >> ints[1];
	cout << "Enter the third number: ";
	cin >> ints[2];

	for (int i = 0; i < 3; i++) {
		if (smallest == NULL || ints[i] < smallest) {
			smallest = ints[i];
		}
	}
	for (int i = 0; i < 3; i++) {
		if (middle == NULL && ints[i] != smallest || ints[i] > smallest && ints[i] < middle) {
			middle = ints[i];
		}
	}
	for (int i = 0; i < 3; i++) {
		if (largest == NULL || ints[i] > middle) {
			largest = ints[i];
		}
	}

	cout << smallest << ", " << middle << ", " << largest;
}

void largestInt() {
	int current;
	int largest = INT_MIN;
	for (int i = 0; i < 5; i++) {
		cout << "Enter number " << i + 1 << ": ";
		cin >> current;
		if (current > largest) {
			largest = current;
		}
	}
	cout << "Largest: " << largest;
}

void smallestInt() {
	int current;
	int smallest = INT_MAX;
	for (int i = 0; i < 5; i++) {
		cout << "Enter number " << i + 1 << ": ";
		cin >> current;
		if (current < smallest) {
			smallest = current;
		}
	}
	cout << "Largest: " << smallest;
}

void overload() {
	cout << "This function has no arguments.";
}

void overload(int number) {
	cout << "This function has one argument";
}

void globalVariable() {
	cout << "\nThis number increases by one every time the function runs: ";
	cout << globalInt;
	globalInt++;
	if (globalInt < 5) {
		globalVariable();
	}
}

void staticVariable() {
	static int myStatic = 0;
	cout << "\nThis variable will increase by one everytime the fuction runs: ";
	cout << myStatic;
	myStatic++;
	if (myStatic < 5) {
		staticVariable();
	}
}

void parameters(string name, double weight, int age) { //Call with referenceInt for age.
	cout << "My name is " << name << ", I am " << age << " years old and I have " << weight << " dogs.";
}

void main() {
	int choice;
	cout << "1. doubleIntChar()\n2. division()\n3. inOrder()";
	cout << "\n4. largestInt()\n5. smallestInt()\n6. overload()";
	cout << "\n7. overload(argument)\n8. globalVariable()";
	cout << "\n9. staticVariable()\n10. parameters()";
	do {
		cout << "\n\nEnter the number for the function you'd like to run (1 - 10): ";
		cin >> choice;
	} while (choice < 1 || choice > 10);

	switch (choice) {
	case 1: doubleIntChar();
			break;
	case 2: division(10, 15, 19);
			break;
	case 3: inOrder();
			break;
	case 4: largestInt();
			break;
	case 5: smallestInt();
			break;
	case 6: overload();
			break;
	case 7: overload(10);
			break;
	case 8: globalVariable();
			break;
	case 9: staticVariable();
			break;
	case 10: parameters("Chris", 5, referenceInt);
			break;
	}
}