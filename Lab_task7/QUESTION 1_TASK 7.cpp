#include <iostream>

using namespace std;

class Rectangle

{

private:

float length;

float width;

public:

void SetLength(float NewLength );

float GetLength();

void SetWidth(float NewWidth );

float GetWidth();

float Area(float length, float width);
};

int main()

{

float a = 0.0f;

float b = 0.0f;

Rectangle calculate;

cout<<"Enter Length"<<endl;

cin>>a;

calculate.SetLength(a);

cout<<"Enter Width"<<endl;

cin>>b;

calculate.SetWidth(b);

cout<<"The area of length "<<calculate.GetLength()<<" and width "<<calculate.GetWidth()<<" is : "<<calculate.Area(a,b);


}

void Rectangle :: SetLength(float NewLength )
{
  
  length = NewLength;
     
}

float Rectangle :: GetLength()
{
    return length;
}

void Rectangle ::  SetWidth(float NewWidth )
{
  width = NewWidth;
}

float Rectangle ::  GetWidth()
{
    return width;
}
float Rectangle :: Area(float length, float width)
{
  float area;
  area = length * width;
  return area;
}

