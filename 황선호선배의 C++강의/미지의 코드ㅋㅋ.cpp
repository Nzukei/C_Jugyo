#include <iostream>

using namespace std;

int main() {
    int a = [](int v) -> int {
        if (v == 0) return 0;
        else return v;
    }(7);
    return 0;
}
