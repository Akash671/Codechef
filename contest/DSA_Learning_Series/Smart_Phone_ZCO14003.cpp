/*  @ author akash kumar  */

#include <iostream>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll N;
    cin>>N;
    ll arr[N];
    for(ll i = 0; i<N; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + N);
    ll max_int = 0;
   // cout<<max_int;
    ll max_temp;
    for(ll i = 0; i<N; i++)
    {
        //cout<<arr[i]<<endl;
        max_temp = arr[i] * (N - i);
        max_int = max(max_int,max_temp);
        
    }
    cout << max_int <<endl;
    
        return 0;
}
