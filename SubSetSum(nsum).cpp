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
          cin >> n >> sum;
          int a[n];
          int mx = -1;
          for (i = 0; i < n; i++) {
              cin >> a[i];
          }
          

        bool subset[n+1][sum+1];

        for (int i = 0; i <=n; ++i)
        {
         subset[i][0]=1;
        }

        for (int i = 1; i <=sum; ++i)
        {
          subset[0][i]=0;
        }

        for (int i = 1; i <= n; ++i)
        {
          for (int j = 1; j <=sum; ++j)
          {
              if(j<a[i-1])
                subset[i][j]=subset[i-1][j];
              if(j>=a[i-1])
                subset[i][j]=subset[i-1][j]||subset[i-1][j-a[i-1]];
          }
        }
        if(subset[n][sum])
          cout<<"Yes"<<endl;
        else
          cout<<"No"<<endl;

        /**
        5 10
1 2 3 4 5
        **/
      }
  }