#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A() called\n"; }
    A(int x) { cout << "A(int) called with " << x << "\n"; }
};

class T1 {
    A a;  
    A b;
public:
    T1() : a(), b(4) {} // T1 建構子：初始化 a 與 b
};

class T2 {
    int value;
public:
    // 無參數建構子
    T2() {
        cout << "T2() called\n";
    }

    // 接受一個參數的建構子
    T2(int val) : value(val) {
        cout << "T2(int) called with value = " << value << "\n";
    }
};

int main() {
    T1 t1;     // T1 呼叫 T1()，裡面 a() 和 b(4)
    T2 t2;     // 呼叫 T2() 無參數建構子
    T2 t3(10); // 呼叫 T2(int) 傳入參數 10
    return 0;
}
