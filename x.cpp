 //Intern
#include <bits/stdc++.h>
using namespace std;
int main()
{
   string keys[] = {"idea", "idae", "bsnl", "nsbl", "grasim", "bata"};
   int n=sizeof(keys)/sizeof(keys[0]);
   vector<vector<string>>ans;
   for(int i=0;i<n;i++)
   {
      vector<string>tmp;
      tmp.push_back(keys[i]);
      for(int j=i+1;j<n;j++)
      {
         if(keys[i].length()==keys[j].length())
         {
            string x=keys[i];
            sort(x.begin(),x.end());
            string y=keys[j];
            sort(y.begin(),y.end());
            if(x==y)
            {
               //cout<<x<<" "<<y;
               tmp.push_back(keys[j]);
               
            }
         }
        
      }
      ans.push_back(tmp);
   }
   
   for(int i=0;i<ans.size();i++)
   {
      for(int j=0;j<ans[i].size();j++)
      {
         cout<<ans[i][j]<<" ";
      }
      cout<<endl;
   }
}
