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

Person *createPerson()
{
    Person *p = new Person("Peter");
    return p;
}

void changePerson(Person &p)
{
    p.name += " Parker";
}

int main()
{
    // new operator allocates memory on the heap
    // and call constructor
    Person *person1 = new Person("Aunt May Parker");
    // delete operator frees memory
    // and call destructor
    delete person1;

    Person *person2 = (Person *)malloc(sizeof(Person));
    free(person2);

    Person *person3 = createPerson();
    changePerson(*person3);
    cout << person3->name << endl;

    delete person3;
    return 0;
}