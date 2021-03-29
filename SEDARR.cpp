#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t;      
    cin>>t;

    while (t--)
    {
        int n,k,sum,count = 0;
        cin>>n>>k;
        vector<int>v(n,0);

        for(int i = 0; i<n; i++)
            cin>>v[i];
        sum = accumulate(v.begin(),v.end(),0);
        
        if(sum%k==0)
            cout<<"0"<<endl;
        else
            cout<<"1"<<endl;
        


    }
    

    
    return 0;
}