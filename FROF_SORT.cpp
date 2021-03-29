#include<bits/stdc++.h>
using namespace std;

// Sourabh Raha

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 
    int test_cases;
    cin>>test_cases;

    while (test_cases--)
    {
       int size;
       cin>>size;

       vector<int>W(size,0);
       vector<int>L(size,0);

       for(int i=0; i<size; i++)
              cin>>W[i];

       for(int i=0; i<size; i++)
          cin>>L[i];

       if(size == 2){                       // Only 2 elements are Present
            if(W[0] < W[1])
                 cout<<"0"<<endl;
       
            else{
                if(L[0] == 1)
                    cout<<"2"<<endl;
                else
                    cout<<"1"<<endl;
                 }
       }

       else if(size == 3){                  // Three elements are Present
             
             int x,y,z;
             int pos1,pos2,pos3;
             int cnt = 0;

             for(int i=0; i<size; i++){
                 
                 if(W[i] == 1){
                     x = i; pos1 = i;
                 }
                else if(W[i] == 2){
                     y = i; pos2 = i;
                 }
                else if(W[i] == 3){
                     z = i; pos3 = i;
                 }
                
             }
                
              while ((z <= y)||(z<= x)||(y<=x))
              {
                    while (y <= x){
                        y = y + L[pos2];
                        cnt++;
                    }

                    while ((z <= y)||(z <= x)){
                        z = z + L[pos3];
                        cnt++;
                    }
                    
              }
              cout<<cnt<<endl;


           }    
          else if(size == 4){               // Four Elements are Present
             
             int x,y,z,d;
             int pos1,pos2,pos3,pos4;
             int cnt = 0;

             for(int i=0; i<size; i++){
                 
                 if(W[i] == 1){
                    x = i; pos1 = i;
                 }
                else if(W[i] == 2){
                     y = i; pos2 = i;
                 }
                else if(W[i] == 3){
                     z = i; pos3 = i;
                 }
                else {
                     d = i; pos4 = i;
                 }
                
             }
                
              while ((d<= x)||(d<= y)||(d<= z)||(z <= y)||(z<= x)||(y<=x))
              {
                    while (y <= x){
                        y = y + L[pos2];
                        cnt++;
                    }

                    while (z <= y || z <= x){
                        z = z + L[pos3];
                        cnt++;
                    }

                     while (d <= z || d <= y || d<= x){
                        d = d + L[pos4];
                        cnt++;
                    }
                    
              }
              cout<<cnt<<endl;
               

           }    
    }
    return 0;

}

