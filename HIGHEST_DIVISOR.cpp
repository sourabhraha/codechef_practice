#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num,i;
    cin>>num;
    int res = 0;
    for(i=10; i>=1; i--){
        if(num%i == 0){
            res = i;
            break;
        }
    }
    cout<<res<<endl;
    
    return 0;

}

