#include <iostream>
using namespace std;

int main(){
    int N,T,t,ans = 0;
    bool judge = false;
    cin >> N >> T;
    for (int i = 0; i < N; i++){
        int a;
        cin >> a;
        t += T;
        if (t <= a){
            judge = false;
            t = a;
            ans++;
        }else{
            if (judge)
                break;
            judge = true;
        }
    }
    cout << ans << endl;
}
