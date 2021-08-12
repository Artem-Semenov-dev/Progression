#include "Container.h"
#include <iostream>
using namespace std;
void Directory::print() {
	if (head == nullptr) {
		cout << "Empty!" << endl;
		return;
	}
	int i = 1;
	cout << "Poslidovnist " << i << ":" << endl;
	Node* ptr = head;
	cout << "--";
	ptr->data->print_info();
	cout << endl;
	while (ptr->next != nullptr) {
		i++;
		cout << "Poslidovnist " << i << ":" << endl;
		ptr = ptr->next;
		cout << "--";
		ptr->data->print_info();
		cout << endl;
	}
}
void Directory::add(poslid* f) {
	if (head == NULL) {
		head = new Node(f);
		return;
	}
	else {
		Node* ptr = head;
		Node* ptr_Prev = ptr;
		while (ptr != nullptr) {
			ptr_Prev = ptr;
			ptr = ptr->next;
		}
		ptr = new Node(f);
		ptr_Prev->next = ptr;
	}
}

void Directory::operator()(int n) {
	Node* ptr = head;
	cout << "-- " << ptr->data->chlen_posl(n);
	cout << endl;
	while (ptr->next != nullptr) {
		ptr = ptr->next;
		cout << "--" << ptr->data->chlen_posl(n);
		cout << endl;
	}
}
