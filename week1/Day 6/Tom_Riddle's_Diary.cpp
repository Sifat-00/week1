#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<string,bool> mp;
    while(t--)
    {
        string name;
        cin >> name;
        if(mp[name] == false)
        {
             cout <<"NO" << endl;
             mp[name] = true;
        }
        else cout << "YES" << endl;

    }
    return 0;
}