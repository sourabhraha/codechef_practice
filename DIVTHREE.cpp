#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        
        int setters,problems,days,total =0,total_contests = 0;
        cin>>setters>>problems>>days;
        
        vector<int>v(setters,0);
        
        for(int i=0; i<setters; i++)
            cin>>v[i];
            
       total = accumulate(v.begin(),v.end(),0);

       total_contests = total/problems;

       if(total_contests > days)
            cout<<days<<"\n";
       else
            cout<<total_contests<<"\n";            
        
    }
    
    
    return 0;
}