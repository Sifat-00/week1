#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int A,B,Time;
    cin >> A  >> B >> Time;
    int x = 1;
    int cnt = 0;
    while((A*x) <=Time)
    {
        cnt+=B;
        x++;
    }
    cout << cnt << endl;
    return 0 ;
}