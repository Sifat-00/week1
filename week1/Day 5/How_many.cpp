#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt = 0;
    int S,T;
    cin >> S >> T;
    for(int i=0;i<=1000;i++)
    {
        for(int j=0;j<=1000;j++)
        {
            for(int k=0;k<=1000;k++)
            {
                if(i+j+k <= S && i*j*k <= T) cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}