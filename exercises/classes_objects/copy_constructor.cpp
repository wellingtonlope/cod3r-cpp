#include <iostream>
using namespace std;

class Player
{
public:
    string name;
    int health;

    Player(string name, int health = 100)
        : name(name), health(health) {}
    Player(const Player &p) : name(p.name), health(p.health)
    {
        cout << "copy..." << endl;
    }
    ~Player() { cout << "destructor" << endl; }
};

void printPlayer(Player p)
{
    cout << p.name << " [" << p.health << "%]" << endl;
}

int main()
{
    Player p{"Moster"};
    printPlayer(p);
    return 0;
}