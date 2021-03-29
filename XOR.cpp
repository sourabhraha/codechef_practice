#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void change_bit(ll &num, ll pos){

    num = num ^ (1<<pos);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test_cases;
    cin>>test_cases;

    while (test_cases--)
    {
        ll num;
        cin>>num;

        ll next_2 = 0;
        ll index = 1;

        while (next_2 <= num)
        {
            next_2 = pow(2,index);
            index++;
        }

        ll b = next_2-1;

        change_bit(b, index-2);

        ll a = b ^ num;

        cout<<a*b<<endl;   

    }


    return 0;
}