#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1000007;



int  p[N]={0};

void seive() {
	for (int i = 2; i < N; i++) {
		if (p[i] == 1) continue;
		for (int j = i ; j < N; j += i) {
			if(p[j]==0)
		     	p[j] = i;
		}
	}
}
int totient(int n ) {
int i=n;
 set<int> s;
//cout<<p[i];
	while(i!=1) {
	//	cout<<p[i]<<" ";
	
if(s.find(p[i]) == s.end())
{
		n*=(p[i]-1);
    //	cout<<n<<" ";
		n/=(p[i]);
		s.insert(p[i]);
}
	//	cout<<n<<" ";
		int k=p[i];
		i/=p[i];
		
	}
	return n;
}
int32_t main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	seive();
	 int t;cin>>t;while(t--)
	{
		int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
		
		cin>>n;
		cout<<totient(n)<< endl;
	}
}