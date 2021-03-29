#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--){
      
    vector<ll>v(11,0);

    for(ll i=1; i<=10; i++){
        cin>>v[i];
    }

    ll k;
    cin>>k;

    ll i = 10;

    while (k > 0 && i>=1)
    {
        k = k - v[i];

        if(k < 0)
            {
                break;
            }

        else if(k == 0){
             i = i-1;
             break;
        }
        else{
            i--;
        }
    }

    if(v[i] != 0){
        cout<<i<<endl;
    }

    else{
        ll res = 0;
        for(ll j = i-1 ; j>=1; j--){

            if(v[j] != 0)
                {
                    res = j;
                    break;
                }
        }

        cout<<res<<endl;
    }

    





    }

    return 0;
}