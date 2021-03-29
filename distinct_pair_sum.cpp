#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int L,R;
        cin>>L>>R;

        if(L==R)
            cout<<"1"<<endl;
        else
        {
            int ans=0;
            ans = 2*(R-L)+1;
            cout<<ans<<endl;
        }   
    }
   return 0;
}