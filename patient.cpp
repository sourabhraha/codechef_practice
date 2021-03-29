#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll comp(pair<ll,ll>p1, pair<ll,ll>p2){
    
    if(p1.second > p2.second)
        return 1;
    else if(p1.second == p2.second)
        return p1.first<p2.first;
    else 
        return 0;
}

ll comp2(pair<ll,ll>p1, pair<ll,ll>p2){
    return (p1.second < p2.second);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    ll test_cases;
    cin>>test_cases;

    while (test_cases--)
    {
       
       ll n;
       cin>>n;

       vector<pair<ll,ll>>v;

       for(ll i=0; i<n; i++)
            {
                ll num;
                cin>>num;
                v.push_back(make_pair(i,num));
            }

        sort(v.begin(),v.end(),comp);


        vector<pair<ll,ll>>ans;

        for (ll i = 0; i < n; i++)
        {
            ans.push_back(make_pair(i+1,v[i].first));
        }

        sort(ans.begin(), ans.end(), comp2);  

        for(ll i=0; i<n; i++)
            cout<<ans[i].first<<" ";

        cout<<endl;  

    }

    
    return 0;
}