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

const int N = 204;

 vector<int> gr[N];
 int a[N];
bool vis[N]={false};
int sum=0;
int maxD=0;
 void dfs(int n , int dist ,int k) {
    vis[n]=1;
    db(dist,n,sum);
    if(dist>k) {
     
   // sum-=a[n];

     for(auto x: gr[n]) {
      if(!vis[x]) {
        dfs(x,dist+1,k);
      }
    }

     sum+=a[n];
      if(maxD<sum)
        maxD=sum;
    for(auto x: gr[n]) {
      if(!vis[x]) {
        dfs(x,0,k);
      }
    }  
   // sum+=a[n];

    } else {
        if(maxD<sum)
        maxD=sum;
       for(auto x: gr[n]) {
      if(!vis[x]) {
        dfs(x,dist+1,k);
      }
    }
}

    
    vis[n]=0;
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
        int i, j, k, n, m, ans = 0, cnt = 0;
        cin >> n >> k;
        
        int mx = -1;
        for (i = 1; i <= n; i++) {
            cin >> a[i];
        }
        
        for(int i=1;i<=n-1;i++) {
          int x ,y;
          cin>> x >> y;
          gr[x].pb(y);
          gr[y].pb(x);
        }

         for (i = 1; i <= n; i++) {
            sum=a[i];
            dfs(i,0,k);
            if(sum>maxD)
              maxD=sum;
         }
         cout<<maxD<<endl;
    }
}