#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(ll x,ll r, ll m);

void solve(ll x,ll r, ll m){

    
        ll r_sec = r*60;
        ll m_sec = m*60;

        if(x >= r_sec)
            {
                if(r <= m)
                    {
                        cout<<"YES"<<endl;
                    }
                else
                    {
                        cout<<"NO"<<endl;
                    }
            }

        else
        {

            ll diff = r_sec-x;
            ll run = x + 2*diff;

            if(run <= m_sec)
                {
                    cout<<"YES"<<endl;
                }

            else
                {
                    cout<<"NO"<<endl;
                }


        }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll test_cases;
    cin>>test_cases;

    while (test_cases--)
    {

        ll x,r,m;
        cin>>x>>r>>m;

        solve(x,r,m);

    }


    return 0;
}