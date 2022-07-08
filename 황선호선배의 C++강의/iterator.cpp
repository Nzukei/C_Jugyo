#include <iostream>
#include <vector>

using namespace std;

int main() {
    // iterator
    vector<int> v;

    for (int i = 0; i < 10; i++)
        v.emplace_back(i + 1);

    for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
        cout << *iter << endl;
}
