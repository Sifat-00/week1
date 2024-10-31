#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string ar;
        cin >> ar;
        reverse(ar.begin(),ar.end());
        int sam = 0;
        int cap = 0;
        string ans;
        for(int i=0;i<ar.size();i++)
        {
            if(ar[i] == 'b')
            {
                sam++;
            }
            else if(ar[i] == 'B') cap++;
            else if(ar[i]>='a' && ar[i] <='z' && sam ==0)
            {
                ans+=ar[i];
            }
            else if(ar[i]>='A' && ar[i] <='Z' && cap ==0) ans+=ar[i];

            else if(sam>0 && ar[i]>='a' && ar[i] <='z')
            {
                sam--;
            }
            else if(cap>0 && ar[i]>='A' && ar[i] <='Z') cap--;
        }
        reverse(ans.begin(),ans.end());
        cout << ans << endl;
    }
    return 0;
}
