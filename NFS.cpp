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
        
        ll n;
        cin>>n;

        vector<ll>v(n,0);

        for(ll i=0; i<n; i++)
            cin>>v[i];

        ll sum = accumulate(v.begin(),v.end(),0);

        if(sum%2 == 0)
            cout<<"0"<<endl;
        
        else 
        {
            ll flag = 0;

            for(ll i=0; i<n; i++){

                if(v[i]==2){
                    flag = 1;
                    break;
                }

            }

            if(flag == 1)
                cout<<"1"<<endl;

            else
                cout<<"-1"<<endl;
        }
        



    }
    


    return 0;
}