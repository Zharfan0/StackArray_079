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
			return 0;
		}

		top++; //step 2
		stack_array[top] = element; //step3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) { //step 1
			cout << "\nStack is empty. Cannot pop. " << endl; //1.a
			return; //1.b
		}

		cout << "\nthe popped element is: " << endl; //step 2
	}
};