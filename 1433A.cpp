#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        int digit = n%10;
        int cnt = 0;
        while(n>0){
            n/=10;
            cnt++;
        }
        if(cnt == 1){
            cout<<((digit * 10) - 10) + 1<<endl;
        }
        else if(cnt == 2){
            cout<<((digit * 10) - 10) + 3<<endl;
        }
        else if(cnt == 3){
            cout<<((digit * 10) - 10) + 6<<endl;
        }
        else if(cnt == 4){
            cout<<((digit * 10) - 10) + 10<<endl;
        }
    }
    
    return 0;
}