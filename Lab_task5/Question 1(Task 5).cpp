#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));
    int daysUntilExpiration = rand()%12;
        

    if(daysUntilExpiration<=0){
            cout<<" Your subscription has expired";

        }
        else if(daysUntilExpiration==1){
    cout<<"Your subscription expires within a day!"<<endl;
    cout<<"renew now and save 20%";
        }
else if(daysUntilExpiration<=5){
    cout<<"Your subscription expires in :"<<daysUntilExpiration<<" days"<<endl;
    cout<<">Renew now and save 10%!";
}
else if(daysUntilExpiration<=10){
    cout<<"Your subscription will expire soon. Renew now!";

}


else{
    cout<<"your subscription is active";
}



    return 0;
}
