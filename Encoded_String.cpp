#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string data = "abcdefghijklmnop";
    int t;
    cin>>t;
    while(t--){
    int N,size=0,k=1;

    int last = 16,start = 0;
    cin>>N;
    string input,ans;
    cin>>input;

    size = 16;

    for(int j=0; j<N; j+=4){
    for(int i=j; i<4*k; i++){
        size = last - start;
        if(input[i] == '0')
            last = last - size/2;
        else
            start = start + size/2;
    
    }
        ans.push_back(data[last-1]);
        start = 0; last = 16; k++;
    }
    cout<<ans<<endl;
    }

    return 0;
}