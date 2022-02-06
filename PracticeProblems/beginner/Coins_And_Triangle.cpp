/*
author    : @akash kumar
institute : MIT Moradabad
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define pb push_back
#define ld long double
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

//algorithms

/*
//algo for sort array with respect to another array
void sortArray(int n,int a[],int b[])
{
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(b[i]>b[j])
            {
                swap(b[i],b[j]);
                swap(a[i],a[j]);
            }
            if(b[i]==b[j])
            {
 
                if(a[i]>a[j]) 
                {
                    swap(a[i],a[j]);
                }
            }
        }
    }
    //T(n)=O(n^2)
}

*/


//algo for calculate power of a number

/*

ll power(ll base , ll n)
{
    // initialize ans = 1;
    ll ans = 1;
    while(n>0)
    {
        // whenever power is odd , club it with the ans
        if(n%2)ans = (ans*base)%MOD;
 
        base = (base * base)%MOD; // make base square each time
 
        n>>=1;  // each time divide the power by 2
    }
    return ans;
}

*/


//algo for GCD or HCF and LCM

/*

ll GCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return GCD(b,a%b);
}

ll LCM(int a,int b)
{
    return (a*b)/GCD(a,b);
}

*/

//merge sort algo

/*
// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
  
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
  
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
  
    auto indexOfSubArrayOne = 0, // Initial index of first sub-array
        indexOfSubArrayTwo = 0; // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array
  
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
  
// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted 
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively
  
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

//call func mergeSort(arr, 0, arr_size - 1);
*/

//


void solve()
{
	ll n;
    cin>>n;

    ll h=1;
    ll coin=1;
    ll tmp=1;
    while(1)
    {
        coin=coin+tmp+1;
        tmp++;
        if(coin<=n)
        {
            h++;
        }
        else
        {
            break;
        }
    }
cout<<h;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
	   solve();
	   cout<<"\n";
	}
	return 0;
}
