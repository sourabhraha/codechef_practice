#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test_cases;
    cin>>test_cases;

    while (test_cases--)
    {
        int n;
        cin>>n;

        vector<int>v(n,0);

        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        int cnt1 = 0, cnt2 = 0;
        
        for(int i=0; i<n; i++){
            if(v[i]%2 == 0)
                cnt1++;
            else
                cnt2++;
        }

        if(cnt1 == 0 || cnt2 == 0)
            cout<<"0"<<endl;
        else{


        int res = 0;
        res = cnt1>cnt2?cnt2:cnt1;
        cout<<res<<endl;

        }

    }

    return 0;

}

