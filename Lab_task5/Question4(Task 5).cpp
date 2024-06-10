#include <iostream>
using namespace std;
int main() {
    int input;

    
    cout << "Enter an integer value between 5 and 10: ";
    cin >> input;

    while (input < 5 || input > 10 || cin.fail()) {
        
        cin.clear();
        cin.ignore(10000, '\n');
        
        
        cout << "sorry you entered an invalid number please try again";
        cin >> input;
    }

    
    cout << "Your input value" <<"("<< input<<")" <<"has been accepted "<< endl;

    return 0;
}
