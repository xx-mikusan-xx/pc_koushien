#include<iostream>
using namespace std;

int main(){
    int a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;

    if((a1 == a2 && a3 == a4)||(a2 == a3 && a1 == a4)||(a2 == a4 && a1 == a3)){
        cout << 1 <<endl;
    }else{
        cout << 0 <<endl;
    }
}