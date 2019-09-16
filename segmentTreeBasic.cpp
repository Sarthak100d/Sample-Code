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
int arr[N];
struct segement{
	vector<int> tree;
	void init(int n) {
		tree.clear();
		tree.resize(4*n);
		for(int i=0;i<4*n;i++)
			tree[i]=0;
	}
	void build(int low, int high, int node ){
		if(high<low)
		return ;
		if(low==high){
			tree[node]=arr[low];
			return ;
		}
		int mid=(low+high)/2;
		build(low,mid,2*node +1);
		
		build(mid+1,high,2*node +2);
		tree[node]=max(tree[2*node +1],tree[2*node +2]);

	}

	int range(int low ,int high ,int l ,int r,int node) {
		if(low>high||low>r||l>high)
		return INT_MIN;
		if(l<=low&&high<=r)
		return tree[node];

		//db(low, high);
		int mid=(low+high)/2;
		return max(range( low , mid , l ,r,2*node+1),
		range(mid+1 , high , l , r,2*node+2));
	}

		void update(int low, int high, int node ,int index,int val){
		if(high<low)
		return ;
		if(low==high&&low==index){
			tree[node]=val;
			arr[index]=val;
			return ;
		}
		int mid=(low+high)/2;
		if(mid<index) {
			update(mid+1,high,2*node +2,index, val);
		} else {
			update(low,mid,2*node +1,index, val);
		}	
			tree[node]=max(tree[2*node +1],tree[2*node +2]);
	}


}G;

int32_t main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
//	int t; cin >> t; while (t--)
	{
		int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
		cin >> n ;
	//	int arr[n];
	cout<<n<<" ";
		for (i = 0; i < n; i++) {
			cin>>arr[i];
		}

		
		G.init(n);
		G.build(0,n-1,0);
		for (i = 0; i < 4*n; i++) {
		//	cout<< G.tree[i]<<" ";
		}
		
		cout<<G.range( 0 ,n-1 , 3 ,3,0);
			cout<<" ";
					cout<<G.range( 0 ,n-1 , 5 ,5,0);
G.update(0,n-1,0,3,90);
	cout<<" ";
					cout<<G.range( 0 ,n-1 , 0 ,5,0);

						cout<<G.range( 0 ,n-1 , 3 ,3,0);
			cout<<" ";

	}
}