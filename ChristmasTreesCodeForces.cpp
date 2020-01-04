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
        cin >> n >> m ;
        int a[n];
        int mx = -1;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
   //     sort(a,a+n);
           queue <int> q;
    unordered_set<int> st1;
unordered_map<int,int> st;
 for (i = 0; i < n; i++) {
            q.push(a[i]);
            st1.insert(a[i]);
        }
 
  //cout<<m<<" ";
    while(!q.empty()) {
      
      int j=q.front();
      q.pop();
   //   cout<<j<<" ";
      if(st.find(j+1)==st.end()&&st1.find(j+1)==st1.end()) {
        int dis=1;
        if(st.find(j)!=st.end())
        dis=st[j]+1;
      //  cout<<j+1<<dis<<" ";
        st.insert({j+1,dis});
        ans+=dis;
        q.push(j+1);
      //  cout<<j+1;
      }
      if(st.size()>=m)
        break;
      if(st.find(j-1)==st.end()&&st1.find(j-1)==st1.end()) {
        int dis=1;
        if(st.find(j)!=st.end())
        dis=st[j]+1;
        st.insert({j-1,dis});
        ans+=dis;
      //  cout<<j-1<<dis<<" ";
         q.push(j-1);
      }
      if(st.size()>=m)
        break;
  //     cout<<st.size()<<" ";
    //  break;
    }

//cout<<st.size()<<" ss";
cout<<ans<<endl;
    for (auto x :st)
    {
      /* code */
      cout<<x.F<<" ";
    }
              
    }
}