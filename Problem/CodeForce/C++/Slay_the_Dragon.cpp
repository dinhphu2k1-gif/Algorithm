#include <bits/stdc++.h>

using namespace std;

long long n, m, x, y, res, k;
long long sum = 0;
long long a[200010];

int main(){ 
	ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
		sum += a[i];
    }
    sort(a + 0, a + n );

    cin >> m;
    while(m--){
        cin >> x >> y;
		res = x + y;

		k = lower_bound(a,a+n,x)-a;
		if (k < n){
			res = min(res, y - (sum - a[k]));
		}
		if (k >= 1){
			k--;
			res = min(res, x - a[k] + max(0LL, y- (sum - a[k])));
		}
		cout << max(res, 0LL) << endl;
	}

    return 0;
}

// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// int n,a[200010],s,m,x,y,k,ans;

// signed main()
// {
// 	scanf("%lld",&n);
// 	for(int i=1;i<=n;i++)
// 	{
// 		scanf("%lld",&a[i]);
// 		s+=a[i];
// 	}
// 	sort(a+1,a+n+1);
// 	scanf("%lld",&m);
// 	for(int i=1;i<=m;i++)
// 	{
// 		scanf("%lld%lld",&x,&y);
// 		ans=x+y;
// 		k=lower_bound(a+1,a+n+1,x)-a;
// 		// cout << "k: " << k << endl;
// 		if(k<=n)
// 			ans=min(ans,y-(s-a[k]));
// 		if(k>=2)
// 		{
// 			k--;
// 			ans=min(ans,x-a[k]+max(y-(s-a[k]),0LL));
// 		}
// 		printf("%lld\n",max(ans,0LL));
// 		// cout << "OLL: " << 0LL << endl;
// 	}
// 	return 0;
// }