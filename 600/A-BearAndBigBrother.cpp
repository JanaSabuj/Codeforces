//Built by Sabuj Jana(greenindia) from Jadavpur University

#include <bits/stdc++.h>
using namespace std;
void fileio(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("error.txt", "w", stderr);}

int main() {
    fileio();
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
//    int t;cin>>t;cout<<t;cerr<<t;
double a,b;
cin>>a>>b;
double n=b/a;
cerr<<n<<endl;
//double d= 3/2;
//cerr<<d<<endl;
double ans;
ans=log(n)/log(1.5);
cout<< int(ans+1);

    return 0;
}
