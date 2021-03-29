#include <bits/stdc++.h> 
using namespace std; 
  
vector<int> isPrime(int n) 
{ 
    int flag = 0;
    vector<int>prime;
  for (int i = 2; i <= n; i++) {
        
        flag = 1;
 
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
 
        if (flag == 1)
            {
                prime.push_back(i);
            }
    }
    return prime;
}

int main(){

    int t;
    cin>>t;
    
    while(t--){

        int n;
        cin>>n;

        
        vector<int>prime;

        prime = isPrime(n);

        if(prime.size()<3)
        {
            cout<<"0"<<endl;
        }
        else{

            int count=0;
            int a=0,b=1;

        while(a<=prime.size()-3){

        for(int c=a+2; c<prime.size();c++){

            if(prime[a] + prime[b] == prime[c])
                count++;

        }
            a++;
            b++;

        }
        cout<<count<<endl;

        }

    }

}