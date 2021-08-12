#include "Base.h"
#include <iostream>
#include <cmath>
using namespace std;
aryf_prog::aryf_prog(int per, int raz) {
    perviy = per;
    raznica = raz;
}
void aryf_prog::print_info() {
    cout << "Aryfmeticheskaia progressia, s pervim chlenom " << get_per() << " i raznicey " << get_raz() << endl;
}
int aryf_prog::chlen_posl(int n) {
    return get_per() + get_raz() * (n - 1);
}
geom_prog::geom_prog(int per, int mn) {
    perviy = per;
    mnozh = mn;
}
void geom_prog::print_info() {
    cout << "Geometricheskaia progressia, s pervim chlenom " << get_per() << " i mnozhutilem " << get_mn() << endl;
}
int geom_prog::chlen_posl(int n) {
    return get_per() * pow(get_mn(), (n - 1));
}
void fibonachi::print_info() {
    cout << "Posledovatelnost Fibonachi";
}
int fibonachi::chlen_posl(int n) {
    if (n < 3)
        return 1;
    return chlen_posl(n - 2) + chlen_posl(n - 1);
}