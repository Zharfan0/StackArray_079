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
		cout << element << " ditambahkan(pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) { //step 1
			cout << "\nStack is empty. Cannot pop. " << endl; //1.a
			return; //1.b
		}

		cout << "\nthe popped element is: " << endl; //step 2
		top--; //step 3 decrement
	}

	//method for check if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nstack is empty. " << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	StackArray stack;
	int data;
	char ch;
	while (1)
	{
		cout << endl << "Menu";
		cout << endl << "1. Menambah data ke dalam list" << endl;
		cout << "2. Menghapus data dari dalam list" << endl;
		cout << "3. Menampilkan semua data di dalam list" << endl;
		cout << "4. Keluar" << endl;
		cout << endl << "Masukan pilihan (1-5): ";
		cin >> ch;
		switch (ch)
		{
		case '1':
		{
			int element;
			cout << "enter the element:" << endl;
			cin >> element;
			stack.push(element);
		}
		break;
		case '2':
		{
			if (stack.empty())
			{
				cout << endl << "List Kosong" << endl;
				break;
			}
			cout << endl << "\nMasukan no yang akan dihapus: ";
			cin >> data;
			if (data == false)
				cout << endl << "Data tidak ditemukan" << endl;
			else
				stack.pop();
				cout << endl << "Data dengan nomor " << data << "berhasil dihapus" << endl;
		}

	}
}