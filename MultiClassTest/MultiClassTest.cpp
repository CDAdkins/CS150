#include <iostream>
#include   <string>

using namespace std;

class person {
	int     age;
	string name = "Unnamed";

	public: void setName(string aName) {
		this->name = aName;
	}

	public: void setAge(int anAge) {
		this->age = anAge;
	}

	person(int anAge, string aName) { // Constructor with parameters
		this->name = aName;
		this->age  = anAge;
	}

	person() { // Default No-Arg
		name = "John Doe";
		age  =         99;
	}

	public: string toString() {
		return (this->name + ", " + to_string(this->age));
	}
};

int main() {
	person johnDoe;
	person me(20, "Chris Adkins");

	cout << &johnDoe.toString;
	cout << &me.toString;
}