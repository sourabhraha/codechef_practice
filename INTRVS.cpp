#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n,0);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        
        int cnt1 = 0,cnt2 = 0, sum = 0;

        for(int i=0; i<n; i++){

            if(v[i] == -1)
                cnt1++;
            else if(v[i] > k)
                cnt2++;

        }

        double ceil_n = n;
        double solved = n-cnt1;

        if(solved< ceil(ceil_n/2))
            cout<<"Rejected"<<endl;

        else if(cnt2 >= 1)
            cout<<"Too Slow"<<endl;

        else if(*max_element(v.begin(),v.end()) <= 1 && cnt1==0)
            cout<<"Bot"<<endl;

        else
            cout<<"Accepted"<<endl;

    }
    
    return 0;

}

