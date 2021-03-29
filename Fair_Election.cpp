#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){

        int N,M,count=0;
        cin>>N>>M;
        vector<int>v1(N,0);
        vector<int>v2(M,0);

        for(int i=0; i<N; i++)
            cin>>v1[i];
        for(int j=0; j<M; j++)
            cin>>v2[j];

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        if(accumulate(v1.begin(),v1.end(),0) > accumulate(v2.begin(),v2.end(),0))
            cout<<"0"<<endl;
        else{

            for(int i=0; i<N; i++){
                count++;
                int temp = v1[i];
                v1[i] = v2[M-i-1];
                v2[M-i-1] = temp;
         
                if(accumulate(v1.begin(),v1.end(),0) > accumulate(v2.begin(),v2.end(),0))
                        break;
            }

             if(accumulate(v1.begin(),v1.end(),0) < accumulate(v2.begin(),v2.end(),0))
                        cout<<"-1"<<endl;
            else
                        cout<<count<<endl;

        }



    }
    return 0;
}