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
        
        ll u,v,a,s;
        cin>>u>>v>>a>>s;

        if(u<=v)
            cout<<"YES"<<endl;
        
        else{

            ll u2 = u*u;
            ll d =  2*a*s;

            ll v2 = u2-d;

            ll v_final = int(ceil(sqrt(float(v2))));

            if(v_final <= v)
                cout<<"YES"<<endl;

            else
                cout<<"NO"<<endl; 

        }



    }
    


    return 0;
}