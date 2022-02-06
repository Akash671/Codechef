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
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define prDouble(x) cout<<fixed<<setprecision(10)<<x //to print decimal numbers
#define For(n) for(ll i = 0; i<n; i++)
#define FOR(a,b) for(ll i = a; i<=b; i++)
//format
/*
printf("%.5f\n",aa)=2.50000
*/

//algorithms

/*
//algo for sort array with respect to another array--------------------------------------
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


//algo for calculate power of a number--------------------------------------

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


//algo for GCD or HCF and LCM---------------------------------------

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

//merge sort algo-----------------------------------------------

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

//algo for swap two number without third variable---------------------------------

/*
a=10;
b=20;
a=a+b;//a=30 (10+20)    
b=a-b;//b=10 (30-20)    
a=a-b;//a=20 (30-10) 
*/

//check prime number in O(sqrt(n))----------------------------------------------

/*
// function check whether a number
// is prime or not
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
*/

// decimal to binary conversion algo----------------------------------------------

/*
// function to convert decimal to binary
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
*/

// binary to decimal conversion algo-----------------------------------

/*
// Function to convert binary to decimal
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
*/

//fib algo--------------------------------------------
/*
//T(n)=O(Lon(n))
// Function that returns nth Fibonacci number
int fib(int n)
{
    int F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0)
        return 0;
    power(F, n - 1);
 
    return F[0][0];
}
 
// Optimized version of power() in method 4
void power(int F[2][2], int n)
{
    if(n == 0 || n == 1)
       return;
    int M[2][2] = {{1, 1}, {1, 0}};
     
    power(F, n / 2);
    multiply(F, F);
     
    if (n % 2 != 0)
        multiply(F, M);
}
 
void multiply(int F[2][2], int M[2][2])
{
    int x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
    int y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
    int z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
    int w = F[1][0] * M[0][1] + F[1][1] * M[1][1];
     
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}
*/
//fib algo2-----------------------------------
/*

//T(n)=O(n)
int fib(int n)
{
     
    // Declare an array to store
    // Fibonacci numbers.
    // 1 extra to handle
    // case, n = 0
    int f[n + 2];
    int i;
 
    // 0th and 1st number of the
    // series are 0 and 1
    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {
         
       //Add the previous 2 numbers
       // in the series and store it
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
    }
*/


//all subarray of an array algo--------------------------------------------

/*
// Prints all subarrays in arr[0..n-1]
void subArray(int arr[], int n)
{
    // Pick starting point
    for (int i=0; i <n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            // Print subarray between current starting
            // and ending points
            for (int k=i; k<=j; k++)
                cout << arr[k] << " ";
 
            cout << endl;
        }
    }
}
*/

//subsequence of an array algo----------------------------
/*
void printSubsequences(int arr[], int n)
{
    // Number of subsequences is (2**n -1)
    unsigned int opsize = pow(2, n);
 
    // Run from counter 000..1 to 111..1
    for (int counter = 1; counter < opsize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            // Check if jth bit in the counter is set
                If set then print jth element from arr[]
            if (counter & (1<<j))
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}

*/

//substring of a string algo----------------------
/*
// Function to print all sub strings
void subString(string s, int n)
{
    // Pick starting point in outer loop
    // and lengths of different strings for
    // a given starting point
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            cout << s.substr(i, len) << endl;
}
*/

//longest palindomic substring algo------------------
/*
// Function to print a substring
// str[low..high]
void printSubStr(
    string str, int low, int high)
{
    for (int i = low; i <= high; ++i)
        cout << str[i];
}
 
// This function prints the
// longest palindrome substring
// It also returns the length of
// the longest palindrome
int longestPalSubstr(string str)
{
    // get length of input string
    int n = str.size();
 
    // table[i][j] will be false if substring
    // str[i..j] is not palindrome.
    // Else table[i][j] will be true
    bool table[n][n];
 
    memset(table, 0, sizeof(table));
 
    // All substrings of length 1
    // are palindromes
    int maxLength = 1;
 
    for (int i = 0; i < n; ++i)
        table[i][i] = true;
 
    // check for sub-string of length 2.
    int start = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (str[i] == str[i + 1]) {
            table[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }
 
    // Check for lengths greater than 2.
    // k is length of substring
    for (int k = 3; k <= n; ++k) {
        // Fix the starting index
        for (int i = 0; i < n - k + 1; ++i) {
            // Get the ending index of substring from
            // starting index i and length k
            int j = i + k - 1;
 
            // checking for sub-string from ith index to
            // jth index iff str[i+1] to str[j-1] is a
            // palindrome
            if (table[i + 1][j - 1] && str[i] == str[j]) {
                table[i][j] = true;
 
                if (k > maxLength) {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }
 
    cout << "Longest palindrome substring is: ";
    printSubStr(str, start, start + maxLength - 1);
 
    // return length of LPS
    return maxLength;
}
*/

//string matching KMP algo----------------------

/*
// Fills lps[] for given patttern pat[0..M-1]
void computeLPSArray(char* pat, int M, int* lps)
{
    // length of the previous longest prefix suffix
    int len = 0;
  
    lps[0] = 0; // lps[0] is always 0
  
    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0) {
                len = lps[len - 1];
  
                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// Prints occurrences of txt[] in pat[]
void KMPSearch(char* pat, char* txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
  
    // create lps[] that will hold the longest prefix suffix
    // values for pattern
    int lps[M];
  
    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M, lps);
  
    int i = 0; // index for txt[]
    int j = 0; // index for pat[]
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
  
        if (j == M) {
            printf("Found pattern at index %d ", i - j);
            j = lps[j - 1];
        }
  
        // mismatch after j matches
        else if (i < N && pat[j] != txt[i]) {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}
*/

//array right rotation------------------------
/*
void RightRotate(int n,int d,vector<int>a)
{
	rotate(a.begin(),a.begin()+n-d, a.end());
}

*/
//right rotate-----------------------
/*
void Right_Rotate(int n,int a[])
{
	       int tmp=a[n-1];
	       for(int i=n-1;i>0;i--)
	       {
	         a[i]=a[i-1];
	       }
	       a[0]=tmp;
}
*/


//left rotate----------------------
/*
void Left_Rotate(int n,int a[])
 {
    int tmp=a[0];
    for(int i=0;i<n-1;++i)
    {
      a[i]=a[i+1];
    }
    a[n-1]=tmp;

    //print
    for(int i=0;i<n;++i)
    {
    	cout<<a[i]<<" ";
    }
 }
*/


//min and max find----------------------
/*
template <typename T1>
 T1 myMax(T1 x,T1 y)
 {
 	return (x>y) ? x:y;
 }

template<typename T2>
T2 myMin(T2 x, T2 y)
{
	return (x<y) ? x:y;
}
//cout<<myMax<int>(2,4)<<"\n";
//cout<<myMin<int>(4,5)<<"\n";

*/

//substring-----------

/*
void subString()
{
	string s;
	cin>>s;

	int n=s.size();

	for(int i=0;i<n;++i)
	{
		for(int j=1;j<=n-i;++j)
		{
			cout<<s.substr(i,j)<<"\n";
		}
	}
}
*/

//string lowercse to uppercase and upper cse to lowercase

/*
/transform(su.begin(), su.end(), su.begin(), ::toupper);
transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
*/


/*
Input : arr[] = {1, 2, 3, 4}
Output: 10
Sum of |2-1| + |3-1| + |4-1| +
       |3-2| + |4-2| + |4-3| = 10

Input : arr[] = {1, 8, 9, 15, 16}
Output: 74

Input : arr[] = {1, 2, 3, 4, 5, 7, 9, 11, 14}
Output: 188


// Function to calculate sum of absolute difference
// of all pairs in array
// arr[]  --> array of elements


int sumPairs(int arr[],int n)
{
    // final result
    int sum = 0;
    for (int i=n-1; i>=0; i--)
        sum += i*arr[i] - (n-1-i)*arr[i];
    return sum;
}

*/


void solve()
{
  int n;
          bool flag = true;
          map<ll, ll> lexo;
          cin >> n;
          for(int i = 0; i<n; i++)
          {
              int temp;
              cin >> temp;
              lexo[temp]++;
          }
          
          for(auto x: lexo)
          {
              auto j = lexo.rbegin();
              if(j->second ==2)
              {
                  cout << "-1\n";
                  flag = false;
                  break;
              }
              else if(x.second > 2)
              {
                  cout << "-1\n";
                  flag = false;
                  break;
              }
          }
          
          if(flag == true)
          {
             for(auto x: lexo)
          {
              if(x.second==2) cout << x.first << " ";
          }
          for(auto k = lexo.rbegin(); k!=lexo.rend(); k++)
          {
              cout << k->first << " ";
          }  
          cout << endl;
          }
  
  /*
  if(n==1)
  {
  	cout<<a[0];
  }
  //n==2
  //then
  else if(n==2)
  {
  	if(a[0]==a[1])
  	{
  		cout<<"-1";
  	}
  	else
  	{
  		sort(a,a+n);
  		for(int i=0;i<n;++i)
  		{
  			cout<<a[n-i-1]<<" ";
  		}
  	}
  }
  else{
  //logic

  ll mx=*max_element(a,a+n);
  ll ans[mx];

  for(ll i=0;i<=mx;++i)
  {
  	ans[i]=0;
  }

  for(int i=0;i<n;++i)
  {
  	ans[a[i]]+=1;
  }

  //0 0 0 0 0 0
  //0 0 1 1 0 1
  int f=1;
  for(int i=0;i<n;++i)
  {
  	if(ans[i]>2)
  	{
  		cout<<"-1";
  		f=0;
  		break;
  	}
  }

  int ff=1;
  if(f)
  {
  	for(int i=0;i<n;++i)
  	{
  		//
  		if(ans[i]>1)
  		{
  			ff=1;
  			break;
  		}
  	}

  	if(ff==0)
  	{
  		sort(a,a+n);
  		for(int i=0;i<n;++i)
  		{
  			cout<<a[n-i-1]<<" ";
  		}
  	}
  	else
  	{
  		//2 3 4 2 5 6
  		//2 6 5 4 3 2
  		//2 3 4 5 2 6 5
  		//2 5 6 5 4 3 2
  		vector<ll>aa;
  		vector<ll>bb;

  		for(ll i=0;i<=mx;++i)
  		{
  			if(ans[i]==2)
  			{
  				aa.pb(i);  //both store
  				bb.pb(i);  //duplicate store
  			}
  			else
  			{
  			    if(ans[i]!=0)
  			    {
  				   aa.pb(i);//both store
  				}
  				else
  				{
  					continue;
  				}
  			}
  		}

  		sort(bb.begin(),bb.end());
  		sort(aa.begin(), aa.end(), greater <>());

  		for(auto i:bb)
  		{
  			cout<<i<<" ";
  		}
  		for(auto j:aa)
  		{
  			cout<<j<<" ";
  		}
  	}
  }
 }*/
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
	   //cout<<'\n';
	}
	return 0;
}
