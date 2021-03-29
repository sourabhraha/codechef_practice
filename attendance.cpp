#include<bits/stdc++.h>
using namespace std;


int main(){
    int cases,days,n,present = 0;
    float percentage;
    string attendance;
    cin>>cases;
    while(cases--){
        cin>>days;
        cin>>attendance;
        present = count(attendance.begin(),attendance.end(),'1');
        cout<<present;
        percentage = (present/120.0)*100;
        if(percentage>=75)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}