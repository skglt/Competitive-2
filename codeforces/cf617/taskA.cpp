#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define SQ(a) (a)*(a)
#define DEBUG printf("hello\n")
#define nl "\n"
#define INF std::numeric_limits<int>::max()
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll mod=1000000009;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n;
	cin>>t;
	while(t-->0){
		cin>>n;
		int a[n];
		int e=0,o=0;
		REP(i,0,n-1){
			cin>>a[i];
			if(a[i]%2==0)e++;
			else o++;
		}
		if(e==n){
			cout<<"NO"<<nl;
			continue;
		}
		if(o==n&&n%2==0){
			cout<<"NO"<<nl;
			continue;
		}
		cout<<"YES"<<nl;
	}
	return 0;
}




