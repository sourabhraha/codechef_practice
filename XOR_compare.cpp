#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,count = 0;
    long int x,y,n;

    cin>>T;
    while(T--){
        cin>>x>>y>>n;
        for(int i=0; i<=n; i++){

            if((x^i) < (y^i))
                count++;
        }
        cout<<count<<endl;
        count = 0;
    }




    return 0;
}