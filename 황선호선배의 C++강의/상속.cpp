#include <iostream>

using namespace std;

class A {
public:
    int num1 = 0;

protected:
    int num2 = 1;

private:
    int num3 = 2;
};

class B : public A {

};

class C : protected B {
public:
    // num1 접근권한 == public -> protected
    // num2 접근권한 == protected -> protected
    // num3 접근권한 == private -> private
    void print() {
        cout << this->num1 << endl;
        cout << this->num2 << endl;
    }
};

int main() {

    B* b = new B();
    C* c = new C();

    return 0;
}
