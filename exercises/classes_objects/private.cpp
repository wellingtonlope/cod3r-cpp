#include <iostream>
using namespace std;

const double MINIMUM_WAGE = 1500;

class Employee
{
public:
    string name;
    double wage = MINIMUM_WAGE;

public:
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    double getWage()
    {
        return wage;
    }
    void setWage(double wage)
    {
        if (wage >= MINIMUM_WAGE)
        {
            this->wage = wage;
        }
    }
};

int main()
{
    Employee emp1;
    emp1.setName("Paul Smith");
    emp1.setWage(5000);
    emp1.setWage(-300);

    cout << emp1.getName() << " US$" << emp1.getWage() << endl;

    return 0;
}