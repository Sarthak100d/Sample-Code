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

void heapify(int a[],int n ,int i) {
  if(i>=n)
    return ;
  int left= 2*i+1;
  int right=2*i+2;
  int k=i;
  if(left<n&&a[left]>a[k])
    k=left;
  if(right<n&&a[right]>a[k])
    k=right;
  if(k!=i) {
            swap(a[i], a[k]); 

    heapify(a,n ,k);
  }


}

 void heapSrt(int a[],int n) {
    for(int i=n/2-1;i>=0;i--) {
      heapify(a,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
      swap(a[i], a[0]);
      heapify(a,i ,0);
    }
  }

int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("C:\\Persnal Work\\C++\\Sublime\\input.txt", "r", stdin);
    freopen("C:\\Persnal Work\\C++\\Sublime\\output.txt", "w", stdout);
    #endif
    // int t; cin >> t; while (t--)
    {
        int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n ;
        int a[n];
        int mx = -1;
        for (i = 0; i < n; i++) {
            cin >> a[i];

            
        }
        heapSrt(a,n);
         for (i = 0; i < n; i++) {
            cout<< a[i]<<" ";
        }
    }
}