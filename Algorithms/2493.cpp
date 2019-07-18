//#include <iostream>
//#include <vector>
//#include <stack>
//using namespace std;
//
//const int INF = 987654321;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n;
//    cin >> n;
//    stack<int> S;
//    vector<int> h(n+1); // 1 ~ n 탑의 높이
//    vector<int> ans(n+1); // 1 ~ n 탑의 신호를 수신하는 탑의 idx
//    for(int i=1; i<=n; ++i) {
//        int input;
//        cin >> input;
//        h[i] = input;
//    }
//    for(int i=1; i<=n; ++i) {
//        while(!S.empty() && h[S.top()] < h[i]) { // 현재 탑의 높이보다 작은 것 스택에서 다 빼버림(이후 크거나 같은 것이 제일 위에 있을 것)
//            S.pop();
//        }
//        if(!S.empty()) ans[i] = S.top(); // 스택에 남은 가장 위의 탑이 현재 탑의 높이보다 크거나 같음
//        else ans[i] = 0; // 신호를 받아줄 탑이 없다.
//        S.push(i); // 현재 탑도 일단 스택에 넣는다
//    }
//    for(int i=1; i<=n; ++i)
//        cout << ans[i] << " ";
//}

// 라인 2019 상반기 인턴 코딩테스트 4번 스택문제
// n과 각 건물의 높이가 주어질 때, 건물 옥상 간의 줄을 연결할 수 있는 가장 긴 줄의 길이
// 같거나 높은 건물을 통과할 수 없다.
//#include "bits/stdc++.h"
//using namespace std;
//
//int h[500001];
//int mx = 0;
//
//int main() {
//    int n;
//    cin >> n;
//    for(int i=1; i<=n; ++i) {
//        cin >> h[i];
//    }
//    stack<int> s; // 탑의 인덱스를 저장.
//    for(int i=1; i<=n; ++i) {
//        while(!s.empty() && h[s.top()] < h[i]) s.pop();
//        if(!s.empty()) mx = max(mx, i - s.top());
//        s.push(i);
//    }
//    while(!s.empty()) s.pop();
//    for(int i=n; i>=1; --i) {
//        while(!s.empty() && h[s.top()] < h[i]) s.pop();
//        if(!s.empty()) mx = max(mx, s.top() - i);
//        s.push(i);
//    }
//    cout << mx << '\n';
//}