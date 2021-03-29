#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        float risk_days=0;
        float n=0,d=0,risk_cnt=0;
        cin>>n>>d;
        vector<int>v(n,0);
        for(int i=0; i<n; i++)
            cin>>v[i];
        if(d == 1)
            cout<<ceil(n/d)<<endl;
        else{
        for(int i=0; i<n; i++)
            {
                if(v[i] >=80 || v[i]<=9)
                    risk_cnt++;
            }
        int size = risk_cnt;
        while(risk_cnt>0){
            risk_days++;
            risk_cnt-=d;

        }
        cout<<risk_days+ceil((n-size)/d)<<endl;
        
    }
    }
    return 0;
}

