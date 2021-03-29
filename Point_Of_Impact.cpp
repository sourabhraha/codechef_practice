#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){

        int N,K,x,y;
        cin>>N>>K>>x>>y;

        
        if(x==y)            // For same  coordinate directly to the corner and stops
            cout<<N<<" "<<N<<endl;
        
        else{

            vector<pair<int,int>>cord;
            int res_x,res_y;

            if(x<y){

                 cord.push_back( make_pair(x+N-y,N) );
                 cord.push_back( make_pair(N,N-y+x) );   
                 cord.push_back( make_pair(y-x,0) );
                 cord.push_back( make_pair(0,y-x) );

            }
            else{

                 cord.push_back( make_pair(N,y+N-x) );
                 cord.push_back( make_pair(y+N-x,N) );
                 cord.push_back( make_pair(0,x-y) );
                 cord.push_back( make_pair(x-y,0) );

            }

             
            res_x = cord[(K-1)%4].first;
            res_y = cord[(K-1)%4].second;

            cout<<res_x<<" "<<res_y<<endl;


        }
        

    }


    return 0;
}