#include "Base.h"
#include "Container.h"
#include <iostream>
using namespace std;
int main() {
	geom_prog g(2, 2);
	aryf_prog a(3, 5);
	g.print_info();
	Directory one;
	one.add(&g);
	one.add(&a);
	one.print();
	one(5);

}
//geom_prog g(2, 2);