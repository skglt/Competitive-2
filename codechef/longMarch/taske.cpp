#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define SQ(a) (a)*(a)
#define nl "\n"
#define INF std::numeric_limits<int>::max()
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
const int MAXN = 100005;
ll mod=1000000007;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,s;
	cin>>t>>s;
	while(t-->0){
		int n;
		cin>>n;
		int a[n];
		int b[n];
		map<int,bool> vis;
		rep(i,0,n-1) cin>>a[i];
		rep(i,0,n-1) {
			cin>>b[i];
			vis[b[i]] = true;
		}
		sort(b,b+n);
		sort(a,a+n);
		vis[a[0]] = true;
		int f = 0;
		rep(i,0,n-1){
			if ( a[i] < b[i] && vis[a[i]] ){

			}
			else {
				
				f = 1;
				break;
			}	
		}
		if(f){
			cout<<"NO"<<nl;
		}
		else cout<<"YES"<<nl;	
	}	
	return 0;
}




