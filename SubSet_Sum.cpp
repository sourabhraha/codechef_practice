#include<bits/stdc++.h>
using namespace std;


int isSubset(array<int,4>arr,int sum);

int isSubset(array<int,4>arr,int sum){

    if(arr.size() == 0)
        return 0;
    
    int **mat = new int*[arr.size()];
    
    for(int i=0; i<arr.size(); i++)
        mat[i] = new int[arr.size()];


    for(int i = 0; i < arr.size(); i++) {
      mat[i][0] = 1;
    }
    
    for(int j = 0; j <= sum; j++) {
      if(j == arr[0]) {
        mat[0][j] = 1;
      }
    }
    
    for(int i = 1; i < arr.size(); i++) {
      for(int j = 1; j <= sum; j++) {
        
        if(mat[i - 1][j]) {
          mat[i][j] = 1;
        } else {
          if(j >= arr[i]) {
            mat[i][j] = mat[i - 1][j - arr[i]];  
          }
        }
      }
    }
    
    return mat[arr.size() - 1][sum];


}
















int main(){

    array<int,4>arr={1,2,3,5};

    int sum = 58;

    cout<<isSubset(arr, sum)<<endl;



}