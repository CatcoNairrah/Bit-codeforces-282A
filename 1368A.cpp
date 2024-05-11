#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int cnt = 0;
        int a, b, n;
        cin>>a>>b>>n;
        while(max(a,b)<=n){
            if(a<b){
                a += b;
            }
            else{
                b+=a;
            }
            cnt += 1;
        }
        cout<<cnt<<endl;

    }
    return 0;
}