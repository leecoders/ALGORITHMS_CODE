//#include <cstdio>
//int a[100001]; // 간선 정보
//int d[100001]; // 방문 순번
//int s[100001]; // 루트 번호
//int n;
//int dfs(int x, int cnt, int &step) {
//    if (d[x] != 0) {
//        if (step != s[x]) {
//            return 0;
//        }
//        return cnt-d[x];
//    }
//    d[x] = cnt;
//    s[x] = step;
//    return dfs(a[x], cnt+1, step);
//}
//int main() {
//    int t;
//    scanf("%d",&t);
//    while (t--) {
//        scanf("%d",&n);
//        for (int i=1; i<=n; i++) {
//            scanf("%d",&a[i]);
//            d[i] = 0;
//            s[i] = 0;
//        }
//        int ans=0;
//        for (int i=1; i<=n; i++) {
//            if (d[i] == 0) {
//                ans += dfs(i, 1, i);
//            }
//        }
//        printf("%d\n",n-ans);
//    }
//    return 0;
//}