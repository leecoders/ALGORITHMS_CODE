//#include"bits/stdc++.h"
//using namespace std;
//
//#define mp make_pair
//#define pb(x) push_back(x)
//#define ICPC ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
//#define ALL(a) (a.begin()),(a.end())
//#define ZERO(a) memset(a,0,sizeof(a))
//#define MINUS(a) memset(a,0xff,sizeof(a))
//
//typedef pair<int, int> pii;
//typedef tuple<int, int, int> t3;
//typedef tuple<int, int, int, int> t4;
//typedef long long ll;
//typedef double db;
//
//ll gcd(ll a, ll b) {
//    return (a == 0) ? b : gcd(b%a, a);
//}
//
//int main() {
//    ICPC;
//    int N, M, A[10001];
//    int s = 0, e = 0, sum = 0, ans = 0;
//    cin >> N >> M;
//    for(int i=0; i<N; ++i)
//        cin >> A[i];
//    while(s < N) {
//        if(sum == M) {
//            ++ans;
//            sum -= A[s];
//            ++s;
//        }
//        else if(sum > M || e == N) {
//            sum -= A[s];
//            ++s;
//        }
//        else {
//            sum += A[e];
//            ++e;
//        }
//    }
//    cout << ans;
//}


// 모범답안
//#include <cstdio>
//using namespace std;
//
//int main(){
//    int N, M, arr[10000];
//    scanf("%d %d", &N, &M);
//    for(int i=0; i<N; i++)
//        scanf("%d", arr+i);
//    int result = 0, sum = 0, lo = 0, hi = 0;
//    while(1){
//        if(sum >= M) sum -= arr[lo++];
//        else if(hi == N) break;
//        else sum += arr[hi++];
//        if(sum == M) result++;
//    }
//    printf("%d\n", result);
//}