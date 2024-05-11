#include<bits/stdc++.h>
using namespace std;
string decideGender(string s){
    unordered_set<char> set_s;
    for(auto i:s){
        set_s.insert(i);
    }

    if(set_s.size() %2 == 0){
        return "CHAT WITH HER!";
    }
    else{
        return "IGNORE HIM!";
    }

}
int main()
{
    string s;
    getline(cin,s);
    cout<<decideGender(s)<<endl;
    
    return 0;
}