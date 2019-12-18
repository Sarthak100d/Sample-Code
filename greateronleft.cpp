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
       int t; cin >> t; while (t--)
      {
          int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
          cin >> n ;
          int a[n];
          int mx = -1;
          for (i = 0; i < n; i++) {
              cin >> a[i];
          }
          ans=a[0] ;
          int ind=0; 
          int max=a[0];
          int maxind=0;  
          for (i = 1; i < n; i++) {
              if(a[i]>=ans&&ind==-1) {
                ans=a[i];
                ind=i;
              } else if(a[i]<ans){
                ind=-1;
              //  i++;
                ans=max;
              }
              if(a[i]>max)
              {
                max=a[i];
                maxind=i;
              }
          }
        //  cout<<ind<<" "<<n<<" ";
          if(ind==-1||ind==n-1) {
            cout<<"-1"<<endl;
          } else {
            j=ind-1;
            while(j>=0) {
              if(a[j]<a[ind])
                j--;
              else
                break;
            }
            if(j>=0)
              cout<<"-1"<<endl;
            else {
               j=ind+1;
            while(j<n) {
              if(a[j]>a[ind])
                j++;
              else
                break;

            }

             if(j<n)
              cout<<"-1"<<endl;
            else
              cout<<a[ind]<<endl;
            }
          }
      }
  }