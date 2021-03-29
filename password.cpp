#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        if(str.length() < 10)
            cout<<"NO"<<endl;
        else{
            int flag1=0,flag2=0,flag3=0,flag4=0;

            for(int i=0; i<str.length(); i++)
                {
                    if(str[i]>=97  && str[i]<=122)
                        flag1 = 1;
                }

            for(int i=1; i<str.length()-1; i++)
                {
                    if(str[i]>=65  && str[i]<=90)
                        flag2 = 1;
                    if(str[i]>=48  && str[i]<=57)
                        flag3 = 1;
                    if(str[i]== '@' || str[i]== '#' || str[i]== '%' || str[i]=='&' || str[i]=='?')
                        flag4 = 1;
                }

            if(flag1==1 && flag2==1 && flag3==1 && flag4==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

    return 0;
}