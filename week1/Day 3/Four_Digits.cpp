#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);


    int x;
    cin >> x;
    vector<int>v;
    for(int i=1;i<=4;i++)
    {
        v.push_back(x%10);
        x=x/10;
    }
    reverse(v.begin(),v.end());
    for(auto x : v) cout << x;
    return 0 ;
}