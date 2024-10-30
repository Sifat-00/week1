#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string x;
        cin >> x;
        int i=0;
        int j =n -1;
        while (true)
        {
            if(x[i] == 'B') break;
            i++;
        }
        while (true)
        {
            if(x[j] == 'B') break;
            j--;
        }
        int cnt = 0;
        for(int k=i;k<=j;k++) cnt++;

        cout << cnt << endl ;
    }
    return 0;
}