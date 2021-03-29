#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T,x,y,k,N;
    int pol,thief,flag = 0;
    cin>>T;
    while(T--){
        cin>>x>>y>>k>>N;
        if(x>=y)
            thief=x,pol=y;
        else
            thief=y,pol=x;
        while(thief>=pol){
            if(thief == pol){
                flag = 1;
                break;
            }
            thief = thief-k;
            pol = pol + k;
        }   
         if(flag == 1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    }   
    return 0;
}