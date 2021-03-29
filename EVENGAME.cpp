#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n,0);

        for(int i=0; i<n; i++)
            cin>>v[i];

        int first = v[0];

        int rest = accumulate(v.begin(),v.end(),0) - v[0];

        if(first%2 == 0 && rest%2!=0)
            cout<<"2"<<endl;
        else if(first%2!= 0 && rest%2 == 0)
            cout<<"2"<<endl;
        else
            cout<<'1'<<endl;

    }
    
    return 0;

}

