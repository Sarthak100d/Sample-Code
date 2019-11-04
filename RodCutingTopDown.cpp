#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
#define db(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << '\n'; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}

const int N = 100005;

int dp[100]={-1};

int findDp(int arr[],int len) {
//db(len);
  if(len==0)
    return 0;
  if(dp[len]!=-1)
    return dp[len];
  for (int i = 1; i <=len; ++i)
  {
    dp[len]=max(dp[len],arr[i-1]+findDp(arr,len-i));
  }
  return dp[len];
}

int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("C:\\Persnal Work\\C++\\Sublime\\input.txt", "r", stdin);
    freopen("C:\\Persnal Work\\C++\\Sublime\\output.txt", "w", stdout);
    #endif
    //   int t; cin >> t; while (t--)
    {
        int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n ;
        int a[n];
        int mx = -1;
        for (i = 0; i < n; i++) {
            cin >> a[i];
            dp[i]=-1;  
        }
        dp[n]=-1;
          cout<<findDp(a,n);
    }
}