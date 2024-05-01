#include<bits/stdc++.h>
using namespace std;
int main()
{
    long k,n,w;
    cin>>k>>n>>w;
    // k = money for first banana
    // n = total_money
    // w = total_banana
    long total_money = 0;
    for (int i = 1; i <= w; ++i)
    {
        total_money = total_money + (k*i);
    }
    long borrow = max(0L,total_money - n);
    cout<<borrow<<endl;
    
    return 0;
}