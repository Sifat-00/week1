#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    map<string,string> mp;
    while(n--)
    {
        string name,ip;
        cin >> name >> ip;
        mp[ip] = name;
    }
    while(m--)
    {
        string name,ip;
        cin >> name >> ip;
        string realip = ip.substr(0,ip.size()-1);
        cout << name <<" " << ip <<" " <<'#'<<mp[realip] << endl; 
    }
    return 0;
}