#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll solve(){


        ll n,m;
        cin>>n>>m;

        char arr[n][m];

        ll x1=n-1,x2=0,y1=m-1,y2=0;

        for(ll i=0; i<n; i++){
            for(ll j=0; j<m; j++){

                cin>>arr[i][j];

                if(arr[i][j] == '1'){


                    if(i < x1)
                      x1 = i;

                    if(j<y1)
                     y1 = j;

                     if(i > x2)
                        x2 = i;
                     
                     if(j > y2)
                        y2 = j;
                
                }


            }
        }

        ll i,j;

        for( i = x1; i<=x2; i++){
            for( j=y1; j<=y2; j++){

                if(arr[i][j] == '0')
                    {
                        cout<<"NO"<<endl;;
                        return 0;
                    }
            }
        }
         cout<<"YES"<<endl;
         return 1;
}



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test_cases;
    cin>>test_cases;
    while (test_cases--)
    {
       
        solve();

    }

    return 0;
}