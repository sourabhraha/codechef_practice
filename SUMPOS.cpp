#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test_case;
    cin>>test_case;
    while(test_case--){

        int arr[3];
        for(int i=0; i<3; i++)
            cin>>arr[i];

        int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr,arr+n);

        int a = arr[0];
        int b = arr[1];
        int c = arr[2];
    if(a+b == c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    }
    return 0;

}

