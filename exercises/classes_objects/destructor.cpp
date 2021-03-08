#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    Person(string name) : name(name)
    {
        cout << "Hello! My name is " << name << endl;
    }
    ~Person()
    {
        cout << name << " saying goodbye!" << endl;
    }
};

void createPerson()
{
    Person p = {"John"};
}

int main()
{
    Person p1("Peter");
    createPerson();

    {
        Person p2{"Mary"};
        Person p3 = Person("May");
    }

    cout << "End of code!" << endl;

    return 0;
}