
1152 A - Neko Finds Grapes.cpp GNU C++17 Accepted
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
 string alpha="abcdefghijklmnopqrstuvwxyz";
 /*----------JU IS LOVE----------*/
 //int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
 //int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}
   	 	 
 signed main() {
 	// freopen("input.txt", "r", stdin);
 	// freopen("output.txt", "w", stdout);
 	// freopen("error.txt", "w", stderr);
    crap;

     int N = 0, M = 0, kol1 = 0, kol2 = 0, kol3 = 0, kol4 = 0, x = 0;
	cin>>N>>M;
	for (int i = 0; i<N; i++){
		cin>>x;
		if (x%2==0){
			kol1++;
		}else{
			kol2++;
		}
	}
	for (int i = 0; i<M; i++){
		cin>>x;
		if (x%2==0){
			kol3++;
		}else{
			kol4++;
		}
	}
	cout<<min(kol1, kol4)+min(kol2, kol3);
	return 0;
 
    
   
 }

