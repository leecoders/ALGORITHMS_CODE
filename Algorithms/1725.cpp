//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//
//int main() {
//    int ans = 0;
//    vector<int> histo;
//    stack<int> idx;
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin >> n;
//    for(int i=0; i<n; ++i) {
//        int input;
//        cin >> input;
//        histo.push_back(input);
//    }
//    histo.push_back(0);
//
//    for(int i=0; i<=n; ++i) {
//        while(!idx.empty() && histo[idx.top()] >= histo[i]) {
//            int j = idx.top();
//            idx.pop();
//            int width = 0;
//            if(idx.empty())
//                width = i;
//            else
//                width = (i - idx.top() - 1);
//            ans = max(ans, histo[j] * width);
//        }
//        idx.push(i);
//    }
//    cout << ans;
//}