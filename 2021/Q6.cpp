#include<iostream>
using namespace std;

int a[10];
int b[10];
int x[10];
int N,C,d,sum;

int main(){

    cin >> N >> C;

    for(int i = 0; i<N;i++){
        cin >> a[i];
    }

    for(int i = 0; i<N;i++){
        cin >> b[i];
    }

    for(int i = 0;i<N;i++){
        cin >> x[i];
        d += x[i];
    }

    while(C >= 0){
        for(int i = 0;i<N;i++){
            if(b[i]>=x[i]){
                b[i] -= x[i];
            }else if(b[i]>0){
                C -= a[i]*(x[i]-b[i]);
                b[i] = 0;
            }else{
                C -= a[i]*x[i];
            }
        }

        if(C >= 0){
            sum += d;
        }
    }

    cout << sum << endl;

}