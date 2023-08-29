#include<iostream>
using  namespace std;
int main(){

    int n,s;
    int ans = 0;

    cin >> n;

    for(int a=0;a<n;a++){
        cin >> s;
        if(s==0){
        ans++;
        }
    }

    if(ans==0){
        ans=1;
    }
    
    cout << ans << endl;
 
}