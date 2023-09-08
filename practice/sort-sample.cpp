#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int score[3][N];
    int sort_score[N];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < N; j++){
            cin >> score[i][j];
        }
    }

    
    for(int j = 0; j < N; j++){
        sort_score[j] = score[0][j] + score[1][j] + score[2][j]; 
    }

}