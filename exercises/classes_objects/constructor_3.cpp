#include <iostream>
using namespace std;

class Actor
{
public:
    string name;
    string email;

    Actor() : Actor("Anonymous")
    {
    }

    Actor(string name, string email = "???")
    {
        // (*this).name = name;
        // (*this).email = email;
        this->name = name;
        this->email = email;
    }

    string toString()
    {
        return name + " [" + email + "]";
    }
};

int main()
{
    Actor actor1;
    Actor actor2("Steve", "carell@office.com");

    cout << actor1.toString() << endl;
    cout << actor2.toString() << endl;

    return 0;
}