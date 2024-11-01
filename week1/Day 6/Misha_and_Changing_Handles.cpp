#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
   unordered_map<string,string> cur;
   unordered_map<string,string> orig;
    while(t--)
    {
        string name,user;
        cin >> name >> user;
        auto it = cur.find(name);
        if(it == cur.end())
        {
            orig[name] = user;
            cur[user] = name;
        }
        else
        {
            string nam = cur[name];
            orig[nam] = user;
            cur.erase(name);            
            cur[user] = nam; 
        }
    }
    cout << cur.size() << endl;
    for(auto x : orig) cout << x.first <<" " << x.second << endl;
    return 0;
}