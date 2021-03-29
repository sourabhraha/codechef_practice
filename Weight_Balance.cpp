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

        ll w1,w2,x1,x2,M;
        cin>>w1>>w2>>x1>>x2>>M;

        ll wt = (w2-w1);

        if(wt<=x2*M && wt>=x1*M)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;      
    }

    return 0;
}