//#include "bits/stdc++.h"
//using namespace std;
//
//vector<int> color[5001];
//int spot[5001];
//int spot_color[5001];
//int spot_idx_in_color[5001];
//vector<pair<int, int>> input;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n;
//    cin >> n;
//    for(int i=0; i<n; ++i) {
//        int a, b;
//        cin >> a >> b;
//        input.push_back(make_pair(a, b));
//    }
//    sort(input.begin(), input.end());
//    for(int i=1; i<=n; ++i) {
//        int a = input[i-1].first;
//        int b = input[i-1].second;
//        color[b].push_back(a); // 각 색의 위치
//        spot[i] = a; // i번째 점의 위치
//        spot_color[i] = b; // i의 색
//        spot_idx_in_color[i] = color[b].size() - 1; // i의 자기 색 안에서의 인덱스
//    }
//    int sum = 0;
//    for(int i=1; i<=n; ++i) {
//        int loc = spot[i];
//        int col = spot_color[i];
//        int idx = spot_idx_in_color[i];
//        if(idx == 0) {
//            sum += color[col][idx + 1] - loc;
//        }
//        else if (idx == color[col].size() - 1) {
//            sum += loc - color[col][idx - 1];
//        }
//        else {
//            sum += min(loc - color[col][idx - 1], color[col][idx + 1] - loc);
//        }
//    }
//    cout << sum;
//}