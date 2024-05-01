#include<bits/stdc++.h>
using namespace std;
int main()
{
    int zero_count = 0;
    int one_count = 0;
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(v[i] == 0){
            zero_count++;
        }
        else{
            one_count++;
        }
    }
    if(zero_count != n){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
    
    
    
    return 0;
}