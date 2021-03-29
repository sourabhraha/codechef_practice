#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    ll test_cases;
    cin>>test_cases;

    while (test_cases--)
    {
        ll mass,height;
        cin>>mass>>height;

        ll sq = height*height;
        ll bmi = mass/sq;

        if(bmi <= 18)
            cout<<"1"<<endl;

        else if(bmi>=19 && bmi<=24)
            cout<<"2"<<endl;

        else if(bmi>=25 && bmi<=29)
            cout<<"3"<<endl;

        else if(bmi >=30)
            cout<<"4"<<endl;
    }
    
    return 0;
}