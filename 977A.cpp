#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,operation;
    cin>>n>>operation;
    while(operation--){
        if(n%10 == 0){
            n=n/10;//51
        }
        else{
            n-= 1;//511//510//50
        }
        

    }
    cout<<n<<endl;

    return 0;
}