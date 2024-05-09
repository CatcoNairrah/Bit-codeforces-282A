#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> table(n, vector<char>(m, '.'));

    for (int i = 0; i < n; ++i)
    {
        if ((i+1) % 2 != 0)
        {
            for (int j = 0; j < m; j++)
            {

                table[i][j] = '#';
            }
        }
        else if ((i + 1) % 4 == 0)
        {
            table[i][0] = '#';
        }
        else if((i + 1) % 2 == 0){
            table[i][m - 1] = '#';
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {

            cout << table[i][j];
        }
        cout << endl;
    }

    return 0;
}
