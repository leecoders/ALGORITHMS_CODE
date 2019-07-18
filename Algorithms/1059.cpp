//#include "bits/stdc++.h"
//using namespace std;
//
//int main() {
//    int l, n;
//    cin >> l;
//    vector<int> v;
//    for(int i=0; i<l; ++i) {
//        int input;
//        cin >> input;
//        v.push_back(input);
//    }
//    sort(v.begin(), v.end());
//    cin >> n;
//    int A, B;
//    bool check = false;
//    if(0 < n && n < v[0]) {
//        check = true;
//        A = 0;
//        B = v[0];
//    }
//    else {
//        for (int i = 0; i < l - 1; ++i) {
//            if (v[i] < n && n < v[i + 1]) {
//                check = true;
//                A = v[i];
//                B = v[i + 1];
//                break;
//            }
//        }
//    }
//    if(!check) cout << 0;
//    else {
//        int cnt = 0;
//        for(int i=A+1; i<B; ++i) {
//            for(int j=i+1; j<B; ++j) {
//                if(i <= n && n <= j) {
//                    cnt++;
//                }
//            }
//        }
//        cout << cnt;
//    }
//}