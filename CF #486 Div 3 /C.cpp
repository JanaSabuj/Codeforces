
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define dbg(x) cerr << #x << " = " << x << endl
#define endl "\n"
#define int long long int
#define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)

//const int INF=1e9+5;//billion
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}


signed main() {

	// freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	std::vector< pair<int, pair<int, int>> >vec;
	for(int k=0; k<t; k++){
		int n;cin>>n;
		int arr[n];
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>arr[i];
			sum+=arr[i];
		}

		for (int i = 0; i < n; ++i)
		{
			/* code */
			vec.push_back({sum - arr[i], {k, i}});
		}


	}


	sort(vec.begin(), vec.end());
 	
 	int n = vec.size();

 	bool isYes = false;
 	for (int i = 0; i < n-1; ++i)
 	{
 		/* code */
 		if( vec[i].first == vec[i+1].first ){
 			if(vec[i].second.first != vec[i+1].second.first){
 				cout << "YES" <<endl;
 				cout << vec[i].second.first + 1 << " " << vec[i].second.second + 1 <<endl;
 				cout << vec[i+1].second.first + 1 << " " << vec[i+1].second.second + 1 <<endl;
 				isYes = true;
 				return 0;
 			}
 		}
 	}

 	cout << "NO" <<endl;






	return 0;
}



