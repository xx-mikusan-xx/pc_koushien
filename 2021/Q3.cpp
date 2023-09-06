#include <iostream>
using namespace std;
int main(void){

    int N,ans,a,p,x;
    cin >> N;
    
    ans=0;
    a=0;
    p=0;
    
    for(int i=1;i<N+1;i++){
        cin >> a;
        x = a-p;
        if(x<0){
            x = -x;
        }
        if(x>5){
            x = 10 - x;
        }
        p = a;
        ans += x;
    }

    cout << ans << endl;

}