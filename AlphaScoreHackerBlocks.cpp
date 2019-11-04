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
        cin >> n >>m ;
        if(n==1&&m==9) {
            cout<<"100 "<<"99"; 
            return 0 ;
        }
        if(n>m){
          cout<<"-1"<<endl;
          return 0 ;
        } 
        if(m-n>1)
        {
           cout<<"-1"<<endl;
           return 0;
        }

        if(n==m-1) {
          cout<<n<<"9 "<<m<<"0";
          return 0;
        }

         if(n==m) {
          cout<<n<<"0 "<<m<<"1";
          return 0;
        }

        
    }
}