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
 /*   #ifndef ONLINE_JUDGE
    freopen("C:\\Persnal Work\\C++\\Sublime\\input.txt", "r", stdin);
    freopen("C:\\Persnal Work\\C++\\Sublime\\output.txt", "w", stdout);
    #endif*/
     int t; cin >> t; while (t--)
    {
        int i, j, k, m, ans = 0, cnt = 0, sum = 0;
        ld n;
        cin >> n ;
        ld a[400+1][400+1];
//int 
        i=1;
       

        memset(a,0,sizeof(a));
         a[0][0]=n;
//db(a[0][0]);
        while(1)
        {
          int flag=1;
          for (int j = 0; j <= i; ++j)
          {
              if(j-1>=0) {
                if(a[i-1][j-1]>=1) {
                  flag=0;
                 a[i][j]+=(a[i-1][j-1]-1)/2;
                }
              }
              if(j<i) {
                if(a[i-1][j]>=1){
                     flag=0;
                 a[i][j]+=(a[i-1][j]-1)/2;
                }
              }
          }
          i++;
       if(flag)
        break;
//break;
        }
       
        cin>> i>> j;
        cout<<a[i-1][j-1]<<endl;
        
    }
}