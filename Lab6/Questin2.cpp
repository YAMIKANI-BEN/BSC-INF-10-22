# include<iostream>
using namespace std;

int main(){
    cout<<"enter the dimession of your array fisrt and second dimessions respectively"<<endl;
    double row=0;
    double n=0;
    cin>>n>>row;
   double** list = new double* [3];
    
    for(int i=0,j=0;i<3,j<3;i++,j++){

       cout<<*(list+i)<<*(list+j)<<endl;
            
   }
       delete [] list;
       list =nullptr;

  
    return 0;
}

