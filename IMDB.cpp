#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool comp(pair<ll,ll>p1, pair<ll,ll>p2)
{
    return p1.second>p2.second;
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll test_cases;
    cin>>test_cases;

    while (test_cases--)
    {
        
        ll n,x;
        cin>>n>>x;

        vector<pair<ll,ll>>v;

        for(ll i=0; i<n; i++){

            ll a,b;
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }

        sort(v.begin(),v.end(),comp);

        ll ans = 0;

        for(ll i=0; i<n; i++){

            if(v[i].first<=x){
                ans = v[i].second;
                break;
            }

        }

        cout<<ans<<endl;



    }
    


    return 0;
}