#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        map<ll,ll> f;
        for(ll i=0;i<n;i++){ ll x; cin>>x; f[x]++;}
        map<ll,ll> mp;
        for(auto it:f) mp[it.second]++;
        int ans=INT_MAX,freq=0;
        for(auto it: mp){
            if(freq<it.second){
                freq=it.second;
                ans=it.first;
            }
            else if(freq==it.second && ans>it.first) ans=it.first;
        }
        cout<<ans<<endl;
    }
}
