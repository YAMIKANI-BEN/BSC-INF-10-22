#include <iostream>
#include <limits>
using namespace std;

class Areas {
public:
    double length;
    double width;
    double base;
    double height;

    double getTriangleArea() {
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        return 0.5 * base * height;
    }

    double getRectangleArea() {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        return length * width;
    }

    double getSquareArea() {
        cout << "Enter the length of the square: ";
        cin >> length;
        return length * length;
    }
};

int main() {
    Areas shape;
    int choice;

    do {
        cout << "Choose a shape to calculate the area:" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Area of the triangle is: " << shape.getTriangleArea() << endl;
                break;
            case 2:
                cout << "Area of the rectangle is: " << shape.getRectangleArea() << endl;
                break;
            case 3:
                cout << "Area of the square is: " << shape.getSquareArea() << endl;
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid input! Please enter a number between 1 and 4." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
        }
    } while (choice != 4);

    return 0;
}
