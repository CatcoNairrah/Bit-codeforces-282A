#include<bits/stdc++.h>
using namespace std;
int bigger_bear(int a,int b){
    if(a == b){
        return 1;
    }
    int cnt = 0;
    while(a<=b){
        a *= 3;
        b *= 2;
        cnt += 1;
    }
    return cnt;

}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<bigger_bear(a,b);
    return 0;
}