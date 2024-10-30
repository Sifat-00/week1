#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for(int i=0;i<n;i++) getline(cin,v[i]);
    set<string> s;
    for(auto x : v) s.insert(x);
    cout << s.size() << endl;
    return 0;
}