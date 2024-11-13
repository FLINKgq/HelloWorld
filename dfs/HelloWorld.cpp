#include <iostream>
using namespace std;

//Решил сделать немного больше чем просто Hello World :)


class SimpleClass {

public: //пишу паблик, т.к если не написать, то по умолчанию будет private, следовательно не смогу обратиться к функциям класса из вне

	string NormalMessage  = "Hello World !";
	string ReverseMessage = "dlroW olleH !";


void normal() {
	cout << NormalMessage;
}


void reverse() {
	cout << ReverseMessage; // задом наперед
}


void choose(int& num) { //передаю по ссылке чтобы работать с оригинальной переменной
	cout << "choose 1 or 2" << endl;
	cin >> num;

	if (num != 1 && num != 2) {
		cout << "1 or 2 !";
		return;
	}
	(num == 1) ? normal() : reverse();

}

};


int main() {
	SimpleClass object;
	int num;
	object.choose(num);
}