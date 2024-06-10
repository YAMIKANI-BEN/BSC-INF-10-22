#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(float Length, float Width) {
        length = Length;
        width = Width;
    }
    float GetLength() {
        return length;
    }
    float GetWidth() {
        return width;
    }
    float Area() {
        return length * width;
    }
};

int main() {
    float a, b;
    cout << "Enter Length: ";
    cin >> a;
    cout << "Enter Width: ";
    cin >> b;
    Rectangle calculate(a, b);
    cout << "The area of length " << calculate.GetLength() << " and width " << calculate.GetWidth() << " is: " << calculate.Area() << endl;
    
    return 0;
}

