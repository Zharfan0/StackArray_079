#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top = -1;

public:
	//constructor
	StackArray() {
		top = -1;
	}

	int push(int element) {
		if (top == 4) {
			cout << "number of data exceed the limit" << endl;
		}
	}
};