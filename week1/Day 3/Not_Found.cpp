#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string ar;
    cin >> ar;
    set<char> s;
    char ans = 'a';
    for(auto x : ar)
    {
        s.insert(x);
    }
    bool flag = false;
    for(char i = 'a';i<='z';i++)
    {
        if(s.find(i) == s.end()) 
        {
            cout << i << endl;
            return 0;
        }
    }
    cout <<"None" << endl;
    return 0 ;
}