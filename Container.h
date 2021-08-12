#pragma once
#include "Base.h"
#include <iostream>
#include <iomanip>
class Directory {
private:
	struct Node {
		Node* next;
		poslid* data;
		Node(poslid* f, Node* ptr = NULL) :data(f), next(ptr) {};
	}*head;
public:
	Directory() {
		head = NULL;
	}
	Directory(poslid* f) {
		head = new Node(f);
	}
	Directory(const Directory& other) {
		head = other.head;
	}
	~Directory() {}
	void print();
	void add(poslid*);
	void operator()(int);
};

