#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){

        int cnt1=0,cnt2=0;

        int boxes,req_height;
        cin>>boxes>>req_height;

        vector<int>heights(boxes,0);

        for(int i=0; i<boxes; i++)
            cin>>heights[i];
        
        int sum1=0,sum2=0;

        sort(heights.begin(),heights.end());

        for(int i=boxes-1; i>=0; i--){

            if(sum1>=req_height)
                break;
            else{
                cnt1++;
                sum1 = sum1 + heights[i];
                heights.pop_back();
            }
        }
        
       if(sum1 < req_height)
            cnt1 = 0;
        
        int n = heights.size();
    //    cout<<n;
        
        for(int i=n-1; i>=0; i--){

            if(sum2>=req_height)
                break;
            else{
                cnt2++;
                sum2 = sum2 + heights[i];
                heights.pop_back();
            }
        }
       
        if(sum2 < req_height)
            cout<<"-1"<<endl;
        

       // if(cnt1 == 0 || cnt2 == 0)
            
        else
        {
            cout<<cnt1+cnt2<<endl;
        }

    }


    return 0;
}