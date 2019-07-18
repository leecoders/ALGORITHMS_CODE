//accepted
//#include<iostream>
//#include<cstring>
//#include<cstdio>
//
//using namespace std;
//
//int n, k, num[200005], i, mx, now, cnt[27];
//
//char rc;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> k;
//    for (i = 1; i <= n; i++)
//        cin >> rc, num[i] = rc - 'a' + 1;
//    for (i = 1; i <= n+1; i++)
//        if (num[i] == num[i - 1])
//            now++;
//        else cnt[num[i - 1]] += now / k, now = 1;
//    for (i = 1; i <= 26; i++)
//        mx = max(mx, cnt[i]);
//    cout << mx;
//    return 0;
//}













