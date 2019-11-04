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
   unordered_map<int, int> umap; 
  int get(int n) {
    int ans;
    if(umap.find(n)!=umap.end())
    return umap[n];
    if (n==0 || n == 1) 
      return n; 

    else
   ans=   max(n,get(n/2)+get(n/3)+get(n/4));

   umap[n]=ans;
   return ans;
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
         cout<< get(n);
      }
  }