#include<bits/stdc++.h>

using namespace std;

#define int unsigned long long int
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

const int N = 400005;


int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("C:\\Persnal Work\\C++\\Sublime\\input.txt", "r", stdin);
    freopen("C:\\Persnal Work\\C++\\Sublime\\output.txt", "w", stdout);
    #endif

   vector<int> v;
  int  i=1;
   v.pb(1);
   int j=1;
   while(i<=1000000000) {
   	int k =pow(3,j);
   	int l=v.size();
   	int cnt=0;
   	v.pb(k);
   	while(cnt<l) {
   		v.pb((v[cnt]+k));
   		cnt++;
   	}
  // 	break;
   	i=v.back();
   	j++;
   }
   cout<<v.size()<<" ";
   /*for(auto x:v) {
   		cout<<x<<endl;
   }*/
   cout<<endl;
     int t; cin >> t; while (t--)
    {
        int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n ;
        
        int mx = -1;
        int high=upper_bound(v.begin(),v.end(),n)-v.begin();
        if(v[high-1]==n)
      //  db(n,high,v[high]);
        cout<<v[high-1]<<endl;
    	else {
    		cout<<v[high]<<endl;
    	}

    }
}