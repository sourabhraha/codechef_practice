#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=1,count=0;
        cin>>n;
        
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<n;i++){
            
        }
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                if(s1[i]=='1')
                  count++;
                else{
                    count--;
                    if(count<0){
                        flag=0;
                        break;
                    }
                }
            }
        }
        if(flag && count==0)
          cout<<"Yes\n";
        else
          cout<<"No\n";
    }
    return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    string s1;
	    string s2;
	    
	    cin>>s1>>s2;
	    long long int count1=0;
	    long long int count2=0;
	    
	    
	    for(long long int i=n-1;i>=0;i--)
	    {
	        if(s1[i]=='1')
	        count1++;
	        
	        if(s2[i]=='1')
	        count2++;
	        
	        if(count1>count2)
	        break;
	        
	       
	    }
	    if(count1==count2)
	   cout<<"Yes";
	    else
	   {
	       cout<<"No";
	   }
	   
	   
	    cout<<endl;
	}
	return 0;
}
*/