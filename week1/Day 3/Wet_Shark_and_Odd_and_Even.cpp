#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> ar(n);
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
        sum+=ar[i];
    }

    sort(ar.begin(),ar.end());

    if(sum%2 == 1)
    {
        for(int i=0;i<n;i++)
        {
            if(ar[i] % 2 == 1)
            {
                sum-=ar[i];
                break;
            }
        }
        cout << sum << endl;
    }
    else cout << sum  << endl ;

    return 0;
}
