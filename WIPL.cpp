#include<bits/stdc++.h>
using namespace std;

  bool isSubsetSum(vector<int>res,int n, int sum){

        bool subset[n+1][sum+1];

        for(int i=0; i<=n; i++)
            subset[i][0] = true;
        
        for(int i=1; i<=sum; i++)
            subset[0][i] = false;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=sum; j++){
                if(j < res[i-1])
                    subset[i][j] = subset[i-1][j];

                if(j>= res[i-1])
                        subset[i][j] = subset[i-1][j]  ||   subset[i-1][j-res[i-1]];
                        
                        }
        }


        return subset[n][sum];


    }




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
         vector<int>res;

        for(int i=0; i<boxes; i++)
            cin>>heights[i];
        
        int sum1=0,sum2=0,i=boxes-1;

        sort(heights.begin(),heights.end());

    

            while (sum1<2*req_height && i>=0)

            {
                cnt1++;
                sum1+=heights[i];
                res.push_back(heights[i]);
                heights.pop_back();
                i--;
                
            }

            while(true){
            if(isSubsetSum(res,res.size(),req_height)){
                cout<<cnt1<<endl;
                break;
            }
            else{
                int data = heights[heights.size()-1];
                res.push_back(data);
                heights.pop_back();
                cnt1++;
            }

            }
    }

    return 0;
}