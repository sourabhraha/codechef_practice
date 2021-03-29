#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--){
      
      ll n,k;
      cin>>n>>k;

      if(k == 0)
        cout<<n<<endl;
     else if(k > n)
        cout<<n<<endl;

      else if( k == n)
        cout<<"0"<<endl;

      else{
          
          ll res = n%k;

          cout<<res<<endl;
      

    }

    }

    return 0;
}