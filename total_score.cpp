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
       
       ll N,K;
       cin>>N>>K;

       vector<ll>v(K,0);

       for(ll i=0; i<K; i++)
            cin>>v[i];

        vector<string>pnt;

        for(ll i=0; i<N; i++){
            string str;
            cin>>str;
            pnt.push_back(str);
        }  

        ll marks = 0;

        ll i = 0;

        while (i < N )
        {
            for(ll j=0; j<K; j++){

                marks+= (pnt[i][j] - '0') *  v[j];
            }
        
            cout<<marks<<endl;
            marks = 0;
            i++;
        }

        

    }
    
    return 0;
}