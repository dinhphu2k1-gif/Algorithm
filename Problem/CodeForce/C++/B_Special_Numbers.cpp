#include<iostream>
#define mo 1000000007
using namespace std ;
long long n , T , k , ans , base ;
int main( ) {
	cin>>T;
	while( T-- ) {
		cin>>n>>k;
		ans = 0 , base = 1 ;
		while( k ) {
			if( k % 2 == 1 ) ans = ( ans + base ) % mo ;
			base = ( base * n ) % mo ;
			k >>= 1 ;
            // cout <<ans << " " << base << " " << k << endl;
		}
		cout<<ans<<endl;
	}
	return 0 ;
}