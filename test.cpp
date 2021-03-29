#include<bits/stdc++.h> 
using namespace std; 

void toggle(int &num,int pos) 
{ 
    num ^= (1 << pos); 
} 

int main() 
{ 
    
    int c;
    cin>>c;


    int s = 0, m = 1;

    while (s<=c)
    {
        s = pow(2,m);
        m++;
    }
    
    int b = s-1;

    toggle(b,m-2);

    int a = b ^ c;

    cout<<a*b<<endl;



    


    return 0;
} 