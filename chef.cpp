#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
  int t,n,q;
  int x,y,count = 0;
  cin>>t;
  cin>>n>>q;
  vector<int>v(n,0);
  while(t--){

      for(int i=0; i<n; i++)
        cin>>v[i];

    for(int i=0; i<q; i++){
        cin>>x>>y;
        v[x-1] = y;
        for(int i = 0; i<n; i++){
            count++;
            if(v[i] == v[i+1])
                break;
        }
        cout<<count<<"\n";
        count = 0;
    }

  }
    return 0;
}

