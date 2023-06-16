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
};