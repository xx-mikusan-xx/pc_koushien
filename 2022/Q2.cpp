#include <iostream>
using namespace std;

int main(){
    int d1,d2,m1,m2;

    cin >> d1 >> m1;
    cin >> d2 >> m2;

    double temp = d1+m1*0.1;
    double normaltemp = d2 + m2*0.1;

    if(temp >= 37.5){
        cout << 2 << endl;
    }else if(temp >= normaltemp){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }
}