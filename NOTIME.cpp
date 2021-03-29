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
        ll N,H,x;
        cin>>N>>H>>x;

        vector<ll>v(N,0);
        for(ll i=0; i<N; i++){
            cin>>v[i];
        }

        ll flag = 0;

        for(ll i=0; i<N; i++){

            ll new_time = v[i] + x;
                if(new_time >= H){
                    flag = 1;
                    break;
                }    
        }
        if(flag == 1)
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;
    }
    





    return 0;
}