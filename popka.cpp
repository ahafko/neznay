#include <iostream>
#include <string>
using namespace std;
struct ych {
	string name;
	int age;
	int grades;
};

int main() {
	ych n1;
	
	n1.name = "bober";
	n1.age = 15;
	n1.grades = 3;

	ych n2;

	n2.name = "cornak";
	n2.age = 15;
	n2.grades = 4;

	cout << n1.name << endl;
	cout << n2.name << endl;

	ych vco[2] {n1,n2};

	cout << " ---SPISOK---" << endl;

	for ( int i = 0; i < 2; i++ ) {
		cout  <<i+1 << vco[i].name
			<< vco[i].age
			<< vco[i].grades << endl;
	}
	return 0;
}

