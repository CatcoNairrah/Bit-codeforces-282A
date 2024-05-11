#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int place = 0;
    string ans;
    for (int i = 1; place < n; i++)
    {
        place += i;
        ans.push_back(s[place - 1]);
    }
    cout<<ans<<endl;
    
    
    
    return 0;
}