#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

/*ll solve(ll N,ll A, ll B, ll C, ll num){

    ll res = 0;

    if(num == A){

        ll comp1 = N*A;
        ll comp2 = 


    }




}
*/

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test_cases;
    cin>>test_cases;

    while (test_cases--)
    {
        
    ll N,E,H,A,B,C;

    cin>>N>>E>>H>>A>>B>>C;

    ll cnt = 0,x;

    if(E == H)
        x = E;

    else if(E > H)
        {
            ll y = E - H;

            x = y/2;
                
        }
    
    else{

            ll y = H - E;
            x = y/3;

    }

    if(N > x)
        cout<<"-1"<<endl;

    else{
        cout<<"+1"<<endl;

     /*   ll total = 0;

        ll temp = min(A,B);
        ll mn = min(temp,C);

        if(mn == A){


        }
*/
    }



    }
    








    return 0;
}