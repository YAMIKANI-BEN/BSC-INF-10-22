#include<iostream>
using namespace std;

void swapnumber(int* pa,int* pb){
    int temp=* pa;
    * pa=* pb;
    * pb=temp;
}

int main(){
    int varA=25;
    int varB=100;
    int* pvarA=&varA;
    int* pvarB=&varB;
    cout<<"value before swapping "<<*pvarA<<endl;
    cout<<"value before swapping "<<*pvarB<<endl;

    swapnumber(&varA ,&varB);
    cout<<"value after swapping "<<varA<<endl;
    cout<<"value after swapping "<<varB<<endl;
    return 0;
}
