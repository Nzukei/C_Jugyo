#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

class Human {
public:
    string name;
    string id;
    string pw;

    Human(string name, string id, string pw) {
        this->name = name;
        this->id = id;
        this->pw = pw;
    }
};

int main() {

    list<Human> db2;
    vector<Human> database;

    database.push_back(Human("신도형1", "tjsgh", "mollo"));
    database.push_back(Human("신도형2", "tjsgh", "mollo"));
    database.push_back(Human("신도형3", "tjsgh", "mollo"));
    database.pop_back();

    db2.push_back(Human("신도형1", "tjsgh", "mollo"));
    

}
