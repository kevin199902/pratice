#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A() called\n"; }
    A(int x) { cout << "A(int) called with " << x << "\n"; }
};

class T1 {
    A a{};  // 直接成員初始化
    A b{3};
};

class T2 {
    A a;  // 未初始化，需透過建構子初始化
    A b;
public:
    T2() : a{}, b{4} {}  // 成員初始化列表
    //T2() : b{4}{}
};

int main() {
    T1 t1;  // A() called
    T2 t2;  // A() called
    return 0;
}
