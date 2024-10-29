#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    long long se =0; 
    long long de =0;
    long long sum =0;
    for(int i=0;i<n;i++)
    {
         cin >> ar[i];
         sum+=ar[i];
    }
    int track = 1;
    int i = 0;
    int j = n - 1;
    while(true)
    {
        if(de+se == sum) break;
        if(track%2 == 1)
        {
            if(ar[i]>ar[j])
            {
                se+= ar[i];
                i++;
            }
            else
            {
                se += ar[j];
                j--; 
            }
        }
        else
        {
            if(ar[i]>ar[j])
            {
                de+= ar[i];
                i++;
            }
            else
            {
                de+= ar[j];
                j--;
            }
        }
        track++;
    }

    cout << se << " " << de << endl;
    return 0;
}
