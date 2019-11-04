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

struct node {
	bool isEnd;
	node *nxt[26];
	node(){
		isEnd=false;
		for(int i=0;i<26;i++) {
	//		isEnd=false;
			nxt[i]= NULL;
		}
	}
};
node *root;

void insert(string s) {
	node *curr= root;
	for(int i=0;i<(int)(s.size());i++) {
	//	cout<<"here";
		if(curr->nxt[s[i]-'a']==NULL) {
			curr->nxt[s[i]-'a']= new node();
		}
		curr=curr->nxt[s[i]-'a'];
	}
	curr->isEnd=1;
}

bool present(string s) {
	node *curr=root;
	for(int i=0;i<(int)s.size();i++) {
		if(curr->nxt[s[i]-'a']==NULL) {
			return false;
		}
		curr=curr->nxt[s[i]-'a'];
	}

	if(curr->isEnd)
	return true;
	return  false;
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
        int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n ;
       root= new node();
        int mx = -1;
        for (i = 0; i < n; i++) {
        	string s;
            cin >> s;
            cout<<s<<endl;
            insert(s);
        }
    	for (i = 0; i < n; i++) {
        	string s;
            cin >> s;
            if(present(s))
            	cout<<s<<" present"<<endl;
        }
          
    }
}