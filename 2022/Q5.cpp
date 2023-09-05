#include<iostream>
using namespace std;

int main(){
    int day;
    
    cin >> day;

    int boilTime[day-1][1];

    for(int i = 0;i<day;i++){
        for(int j = 0;j<2;j++){

        cin >> boilTime[i][j];

        }
    }

    int just_min = 1000000001;
    int just_max = -1;
    int more,over;

    for(int i = 0;i<day;i++){

        if(boilTime[i][1] == 0){
            more = boilTime[i][0];
        }

        if(boilTime[i][1] == 1 && just_min>boilTime[i][1]){
            just_min = boilTime[i][0];
        }

        if(boilTime[i][1] == 1 && just_max<boilTime[i][1]){
            just_max = boilTime[i][0];
        }

        if(boilTime[i][1] == 2){
            over = boilTime[i][0];
        }

    }

    int cook_day;

    cin >> cook_day;

    int boil_day[cook_day-1];

    for(int i = 0;i<day;i++){

        cin >> boil_day[i];

    }

    for(int i = 0;i<day;i++){

        if(boil_day[i] >= over){
            cout << 2 << endl;
        }else if(just_min <= boil_day[i] && boil_day[i] <= just_max){
            cout << 1 << endl;
        }else if(more >= boil_day[i]){
            cout << 0 << endl;
        }else{
            cout << -1 << endl;
        }

    }

}