#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,cnt;
    cin>>n;
    h = 0;
    cnt = 0;
    while(cnt<=n){
        h++;
        // cout<<"h:"<<h<<endl;
        cnt += (h*(h+1))/2;
        // cout<<"cnt:"<<cnt<<endl;
    }
    cout<<(h-1)<<endl;
    return 0;
}