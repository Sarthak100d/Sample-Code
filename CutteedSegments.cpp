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
 int a[N];

int dp( int d ,int  b ,int c,int n) {

if(n<0)
  return -1;
if(n==0)
  return 0;
if(a[n]>0)
  return a[n];
if(a[n]==-2)
  return a[n];
//db(d,b,c,n,a[n]);

for (int i = d; i <=n; i+=d)
{
  a[n]= max(a[n], dp(d,b,c,n-i));
}
for (int i = b; i <=n; i+=b)
{
  a[n]= max(a[n], dp(d,b,c,n-i));
}
for (int i = c; i <=n; i+=c)
{
  a[n]= max(a[n], dp(d,b,c,n-i));
}

if(a[n]!=-1){

a[n]= 1+a[n];
}
else
a[n]=-2;
return a[n];
}
int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
   // #ifndef ONLINE_JUDGE
   //  freopen("C:\\Persnal Work\\C++\\Sublime\\input.txt", "r", stdin);
   //  freopen("C:\\Persnal Work\\C++\\Sublime\\output.txt", "w", stdout);
   //  #endif
         int t; cin >> t; while (t--)
    {
        int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n ;
       // int a[n];
        for(int i=0;i<=n;i++)
          a[i]=-1;
        int d,b,c;
        int mx = -1;
        cin>>d>>b>>c;
     dp(d,b,c,n)  ;  

     cout<<a[n]<<endl;
    }
}