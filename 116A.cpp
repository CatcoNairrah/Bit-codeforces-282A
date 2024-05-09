#include<bits/stdc++.h>
using namespace std;
int main()
{
    int present = 0;
    int ans = 0;
    int n;
    cin>>n;
    while(n--){
        int p,l;
        cin>>l>>p;

        present += p;
        present = present - l;
        ans = max(present,ans);

    }
    cout<<ans;
    return 0;
}