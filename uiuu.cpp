#include <iostream>
#include <string>
using namespace std;
   
struct implant {
	string name;
	int price;
	int risk;
};

struct player {
	string name;
	int money;
	int health;
	int totalrisk;
};

void buyimplant (player* user , implant choice) {
	if (user->money >= choice.price) {
		user->money -= choice.price;
		user-> totalrisk += choice.risk;
		cout << "implant successfully installed" << endl;
	} else {
		cout << "not enough eddies (money)" << endl;
	}
}



int main() {
	implant n1;

	n1.name = "rootLike";
	n1.price = 70000;
	n1.risk = 30;


	implant n2;

	n2.name = "basal";
	n2.price = 120000;
	n2.risk = 60;

	implant n3;

	n3.name = "zygomatic";
	n3.price = 160000;
	n3.risk = 40;

	implant marcet[3] = {n1,n2,n3};

	cout << " ---spisok--- " << endl;

	for ( int i = 0; i < 3; i++ ) {
		cout << i + 1 << marcet[i].name << endl
			<< marcet[i].price << endl
			<< marcet[i].risk << endl;
	}

	player me = {"V", 200000, 10, 0};

        int choice;
	cout << " enter implant number to buy (1, 2 or 3): ";
	cin >> choice;

	if (cin.fail() || choice < 1 || choice > 3) {
		cout << " error, 1 or 3 only" << endl;
		cin.clear();
	} else {
		buyimplant(&me, marcet[choice - 1]);
	}

	cout << "your reamining money: " << me.money << endl;
	cout << "your total risk: " << me.totalrisk << endl;
	return 0;
}



