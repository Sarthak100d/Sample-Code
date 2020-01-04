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
        cin >> n ;
        int a[n];
        int b[n+1]={0};
        int c[n];
      memset(b,0,sizeof(b));
        int mx = -1;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }

         for (i = 0; i < n; i++) {
            b[a[i]]++;
        }
        k=0;
         for (i = 1; i <= n; i++) {
           if( b[i]==0) {
           // db(i);
            c[k]=i;
            k++;
          }
        }
        j=0;
      //  cout<<k;
        int pre=0;
        for (i = 0; i < n; i++) {
            if(a[i]==0) {
         //     db(c[j]);
              if((i+1)==c[j]) {
                if(j!=k-1) {
swap(c[j],c[j+1]);
 a[i]=c[j];
                } else {
                swap(c[j],c[j-1]);
                 a[i]=c[j];
                  a[pre]=c[j-1];
                }
                
               
              } else {
                 a[i]=c[j]; 
              }
             pre=i;
              j++;
            }
        }
         for (i = 0; i < n; i++) {
            cout<< a[i]<<" ";
        }

    }
}