#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;++i){
        cin>>v[i];
    }
    vector<int> ans(n);
    for (int i = 0; i < n; ++i)
    {
        ans[v[i] - 1] = i + 1;
    }
    // n1 = 1 -1 er jonno v[i - 1] = 
    // 
    // 
    // 
    // 
    // 

    for (int i = 0; i < n; ++i)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}