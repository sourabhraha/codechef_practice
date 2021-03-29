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

        for(ll i=0; i<str.length(); i++){

            if(str[i] == 'p' && str[i+1] == 'a' && str[i+2] == 'r' && str[i+3] == 't' && str[i+4] == 'y')
                {
                    str.replace(i,5,"pawri");
                }
            else
                continue;
        }
        cout<<str<<endl;

    }

    return 0;
}