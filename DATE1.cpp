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
        
        ll a,y,x;
        cin>>a>>y>>x;

        ll ans = 0;

        if(a >= y)
            {
                ans = x*y;
            }

        else{

            ans = x*a + 1;

        }
        cout<<ans<<endl;

     }

    
    


    return 0;
}