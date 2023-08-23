#include <iostream>
using namespace std;

int main(){
    int x1,x2,x3,y1,y2,y3;
    int judgex = 0;
    int judgey = 0;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    //0が「グー」、1が「チョキ」、2が「パー」

    if(x1==0&&y1==1 || x1==1&&y1==2 || x1==2&&y1==0){
        judgex += 1;
        judgey -= 1;
    }else if(y1==0&&x1==1 || y1==1&&x1==2 || y1==2&&x1==0){
        judgex -= 1;
        judgey += 1;
    }else if(x1 == y1){
    }

    if(x2==0&&y2==1 || x2==1&&y2==2 || x2==2&&y2==0){
        judgex += 1;
        judgey -= 1;
    }else if(y2==0&&x2==1 || y2==1&&x2==2 || y2==2&&x2==0){
        judgex -= 1;
        judgey += 1;
    }else if(x2 == y2){
    }

    if(x3==0&&y3==1 || x3==1&&y3==2 || x3==2&&y3==0){
        judgex += 1;
        judgey -= 1;
    }else if(y3==0&&x3==1 || y3==1&&x3==2 || y3==2&&x3==0){
        judgex -= 1;
        judgey += 1;
    }else if(x3 == y3){
    }
    
    if(judgex<judgey){
        cout << 1 << endl;
    }else if(judgex>judgey){
        cout << 0 << endl;
    }else{
        cout << -1 << endl;
    }
    
}