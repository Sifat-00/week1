#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        string AX;
        
        for(char x:s)
        {
            auto it = mp.find(x);
            if(it==mp.end())
            {
                mp[x]=0;
            }
        }

        int cnt=0;
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            char x = it->first;
            AX.push_back(x);
            mp[x] = cnt;
            cnt++;
        }

        int sz = mp.size()-1;
        for(int i=0;i<n;i++)
        {
            auto it =mp.find(s[i]);
            int x = it->second;
            s[i] = AX[sz-x];
        }
        cout<<s<<endl;
    }
    return 0;
}