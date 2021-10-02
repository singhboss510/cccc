//Author: Keshav Singh

#include <bits/stdc++.h>
using namespace std;
#define FASTIO
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define endl "\n"
#define pb push_back
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define repr(i,a, b) for (int i = b; i >= a; i--)
#define F first
#define S second
#define mp make_pair
#define init(arr, val) memset(arr, val, sizeof(arr))
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

const int MOD = 1e9 + 7;
const ll INF = 1e18L + 5;

// MIN Function
template<class T> const T& ckmin(const T& a, const T& b) { return b < a ?b:a;}

// MAX Function
template<class T> const T& ckmax(const T& a, const T& b) { return a < b ?b:a; }

// MOD POW Function
template<class T> T power(T a,T b, int mod) {
	T res = 1;
	a=a%mod;
	if(a==0)return a;
	while(b>0){
		if(b&1)res=(res*a)%mod;
		b=b>>1;
		a=(a*a)%mod;
	}
	return res;
}

// Fast GCD from 
int gcd(int a, int b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}

void fio(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);                    
    cout.tie(NULL);
}

int main(){	
	#ifdef FASTIO
		fio();
	#endif
	int t=1;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n;
		cin>>s;
		int ans=0;
		for(int i=n-1;i>=0;i--){
			ans+=(s[i]-'0');
			if(i!=n-1&&s[i]!='0')ans++;
		}
		cout<<ans<<"\n";
	}
}
