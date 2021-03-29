#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string convert24(string str){
    string res;

    // Get hours
    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
    // If time is in "AM"
    if (str[6] == 'A')
    {
        if (hh == 12)
        {
            res.insert(0,"00");
            for (int i=2; i <= 4; i++)
                res.push_back(str[i]);
        }
        else
        {
            for (int i=0; i <= 4; i++)
                res.push_back(str[i]);
        }
    }
 
    // If time is in "PM"
    else
    {
        if (hh == 12)
        {
             res.insert(0,"12");
            for (int i=2; i <= 4; i++)
                res.push_back(str[i]);
        }
        else
        {
            hh = hh + 12;
            res.insert(0,to_string(hh));
            for (int i=2; i <= 4; i++)
                res.push_back(str[i]);
        }
    }


    return res;


}

class meet
{
  private:
    int HH;
    int MM;
    

    public:
     void setValues(string str){
         HH = stoi(str.substr(0,2));
         MM = stoi(str.substr(3,2));      
     }

     char compare(string str1, string str2)
     {
            
         int h1 = stoi(str1.substr(0,2)) ,m1 = stoi(str1.substr(3,2));
         int h2 = stoi(str2.substr(0,2)) ,m2 = stoi(str2.substr(3,2));

         int x = HH * 100 + MM;
         int a = h1 * 100 + m1;
         int b = h2 * 100 + m2;

         if((x-b)*(x-a) <= 0)
            return '1';
         else
            return '0';
         
     }

};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   int test_cases;
   cin>>test_cases;
   cin>>ws;                     // for whitespace
   while (test_cases--)
   {
      string p;
     
      getline(cin,p);

      meet t1;
      t1.setValues(convert24(p));

      
     
      int n;
      cin>>n;

      cin>>ws;                                  // for white space

      string res;
      for(int i=0; i<n; i++){
          
          string line;
          
          getline(cin, line);
          
          string st,en;
          st = line.substr(0,8);
          en = line.substr(9,8);
        
        char ans = t1.compare(convert24(st),convert24(en));
         
         
         res.push_back(ans);

      } 
      cout<<res<<endl;

   }
   
    
    return 0;

}

