
1207 A - There Are Two Types Of Burgers.cpp GNU C++17 Accepted

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

// 	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		int b, p, f;
		cin >> b >> p >> f;

		int h, c;
		cin >> h >> c;

		if (c >= h) {
			int right = min(b / 2, f);
			int remb = b - right * 2;
			int remc = f - right;

			int left = min(remb / 2, p);

			int ans = right * c + left * h;
			cout << ans << endl;
		} else{

			int left = min(b / 2LL, p);
			int remb = b - left * 2;
			int remp = p - left;

			int right = min(remb / 2, f);

			int ans = right * c + left * h;
			cout << ans << endl;

		} 
			 
	}



	return 0;
}





1207 A - There Are Two Types Of Burgers.cpp GNU C++17 Time limit exceeded on test 1

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

	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		int b, p, f;
		cin >> b >> p >> f;

		int h, c;
		cin >> h >> c;

		if (c >= h) {
			int right = min(b / 2, f);
			int remb = b - right * 2;
			int remc = f - right;

			int left = min(remb / 2, p);

			int ans = right * c + left * h;
			cout << ans << endl;
		} else{

			int left = min(b / 2LL, p);
			int remb = b - left * 2;
			int remp = p - left;

			int right = min(remb / 2, f);

			int ans = right * c + left * h;
			cout << ans << endl;

		} 
			 
	}



	return 0;
}





1207 A - There Are Two Types Of Burgers.cpp GNU C++17 Wrong answer on test 4

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

// 	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		int b, p, f;
		cin >> b >> p >> f;

		int h, c;
		cin >> h >> c;

		if (c >= h) {
			int right = min(b / 2, f);
			int remb = b - right * 2;
			int remc = c - right;

			int left = min(remb / 2, p);

			int ans = right * c + left * h;
			cout << ans << endl;
		} else {

			int left = min(b / 2LL, c);
			int remb = b - left * 2;
			int remp = p - left;

			int right = min(remb / 2, c);

			int ans = right * c + left * h;
			cout << ans << endl;

		}
	}



	return 0;
}




