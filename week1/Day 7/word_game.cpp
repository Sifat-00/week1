#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m=3;
        cin >> n;
        map<string,vector<int>> mp;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                string name;
                cin >> name;
                mp[name].push_back(i);
            }
        }
        vector<int> ans(m+1);
        for(auto [x,y] : mp)
        {
            vector<int> v = y;
            if(v.size() == 1)
            {
                ans[v[0]]+=3;
            }
            else if(v.size() == 2)
            {
                ans[v[0]]++;
                ans[v[1]]++;
            }
        }
        for(int i=1;i<=m;i++) cout << ans[i] <<" ";
        cout << endl;
    }
    return 0;
}