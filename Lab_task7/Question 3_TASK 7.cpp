#include <iostream>
#include <string>

using namespace std;

namespace shapes
{
    class square
    {
    private:
        int SideLength;

    public:
        void SetSideLength(int NewSideLength)
        {
            SideLength = NewSideLength;
        }
        ~square() {}
    };
    class triangle
    {
    private:
        int Base, Height;

    public:
        void SetTriangle(int NewBase, int NewHeight)
        {
            Base = NewBase;
            Height = NewHeight;
        }
        ~triangle() {}
    };
    class circle
    {
    private:
        int radius;

    public:
        void SetRadius(int NewRadius)
        {
            radius = NewRadius;
        }
        ~circle() {}
    };
    class Area
    {
    public:
        static int AreaSquare(int SideLength)
        {
            int area = SideLength * SideLength;
            return area;
        }
        static int AreaTriangle(int base, int height)
        {
            int area = base * height * 0.5;
            return area;
        }
        static double AreaCircle(int radius)
        {
            double area = (22.0 / 7) * radius * radius;
            return area;
        }
    };
};

int main()
{
    int length, width, radius, base, height;
    int choise;
    cout << "Do you want to calculate area? CHOOSE: 1.YES 2.NO" << endl;
    cin >> choise;

    if (choise == 1)
    {
        int choise1;
        cout << "What shape do you want to calculate its area?" << endl;
        cout << "1.Calculate the area of square" << endl;
        cout << "2.Calculate the area of triangle" << endl;
        cout << "3.Calculate the area of circle" << endl;
        cout << "4.Quit" << endl;
        cin >> choise1;

        if (choise1 == 1)
        {
            cout << "Enter Length: ";
            shapes::square calculate;
            cin >> length;
            calculate.SetSideLength(length);
            cout << "Area of the square: " << shapes::Area::AreaSquare(length) << endl;
        }
        else if (choise1 == 2)
        {
            cout << "Enter base and height: ";
            shapes::triangle calculate;
            cin >> base >> height;
            calculate.SetTriangle(base, height);
            cout << "Area of the triangle: " << shapes::Area::AreaTriangle(base, height) << endl;
        }
        else if (choise1 == 3)
        {
            cout << "Enter radius: ";
            shapes::circle calculate;
            cin >> radius;
            calculate.SetRadius(radius);
            cout << "Area of the circle: " << shapes::Area::AreaCircle(radius) << endl;
        }
    }
    return 0;
}
