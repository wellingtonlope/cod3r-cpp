#include <iostream>
using namespace std;

bool log(string text) {
    if(text.empty()) return false;
    if(text == "Hi") return false;
    
    cout << "Text: " << text << endl;
    return true;
}

int main() {
    log("");
    log("Hi");
    log("ok");
    return 0;
}