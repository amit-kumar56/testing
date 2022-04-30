#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,1,2};
    int n=v.size();
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
         ans+=count(v.begin()+i+1,v.end(),v[i]);
    }
    cout<<ans<<endl;
}