#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test_cases;
    cin>>test_cases;

    while (test_cases--)
    {
        string str;
        cin>>str;

        ll i=0, cnt = 0;
        for(i=0; i<str.length(); i++){

            if(str[i] - '0' == 1){

                cnt++;
                while (str[i] - '0' == 1)
                {
                    i++;
                }
                
            }


        }
        cout<<cnt<<endl;
    }


    return 0;
}