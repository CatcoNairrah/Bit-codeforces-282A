#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ma = 0;
    int mi = 101;
    int maxi;
    int mini;
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(v[i]>ma){
            ma = v[i];
            maxi = i;
        }

        if(v[i] <= mi){
            mi = v[i];
            mini = i; 
        }
    }
    int ans = maxi -1+n - mini;
    if(maxi > mini){
        cout<<ans -1;
    }
    else{
        cout<<ans<<endl;
    }
    
    
    return 0;
}