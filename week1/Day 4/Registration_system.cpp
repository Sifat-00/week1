#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    map<string,int> mp;
    while(t--)
    {
        string x;
        cin >> x;
        if(mp.count(x) == 0)
        {
             cout << "OK" << endl;
             mp[x]++;
        }
        else
        {
            cout << x  <<mp[x] << endl;
            mp[x]++;
        }
    }
    return 0;
}