#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        int pos = 0;
        int pos2 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                pos = i;
                break;
            }
        }
        for (int i = s.length(); i >= pos; i--)
        {
            if (s[i] == '1')
            {
                pos2 = i;
                break;
            }
        }

        for (int i = pos; i < pos2; i++)
        {
            if (s[i] == '0')
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}