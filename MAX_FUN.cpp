#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   int test_cases;
   cin>>test_cases;
   while (test_cases--)
   {
       int n;
       cin>>n;
       vector<ll>v(n,0);
       
       for(int i=0; i<n; i++)
        cin>>v[i];
       
       ll a=0 ,b=0 , ans =0;
       a = *max_element(v.begin(),v.end());
       b = *min_element(v.begin(),v.end());

        
        ans = (a-b)*2;
        cout<<ans<<"\n";

   }
   
    
    return 0;

}

