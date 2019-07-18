//#include"cstdio"
//#include"iostream"
//#include"cstring"
//
//using namespace std;
//
//const int mod = 1000000000 + 7;
//long long dp[200000+7][4];
//
//int get(int l,int r,int n) {
//    return (r+n)/3 - (l+n-1)/3;
//}
//
//long long doit(int n,int l,int r) {
//    int a, b, c;
//    a = get(l, r, 0); dp[1][0] = a; // 1개 짜리 나머지 0인 개수
//    b = get(l, r, 1); dp[1][1] = b; // 1개 짜리 나머지 1인 개수
//    c = get(l, r, 2); dp[1][2] = c; // 1개 짜리 나머지 2인 개수
//
//    for(int i=2;i<=n;i++) {
//        dp[i][0] = (dp[i-1][0] * a % mod + dp[i-1][1] * c % mod + dp[i-1][2] * b % mod) % mod;
//        dp[i][1] = (dp[i-1][0] * b % mod + dp[i-1][1] * a % mod + dp[i-1][2] * c % mod) % mod;
//        dp[i][2] = (dp[i-1][0] * c % mod + dp[i-1][1] * b % mod + dp[i-1][2] * a % mod) % mod;
//    }
//    return dp[n][0];
//}
//
//int main() {
//    int n,l,r;
//    scanf("%d%d%d",&n,&l,&r);
//    printf("%lld\n",doit(n,l,r));
//}