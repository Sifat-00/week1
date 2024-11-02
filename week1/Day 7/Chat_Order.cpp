#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,bool> mp;
    int t;
    cin >> t;
    while(t--)
    {
        string name;
        cin >> name;
        if(mp[name] == false)
        {
            mp[name] = true;
        }
        else
        {
            mp.erase(name);
            mp[name] = true;
        }
    }
    for(auto x : mp)
    {
        cout << x.first << endl;
    }
    return 0;
}