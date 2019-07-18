//#include <iostream>
//#include <cstring>
//#include <map>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n, m;
//    cin >> n >> m;
//    string poket[n+1];
//    string s;
//    map<string, int> M;
//    for(int i=1; i<=n; ++i) {
//        cin >> s;
//        poket[i] = s;
//        M.insert(make_pair(s, i));
//    }
//    for(int i=0; i<m; ++i) {
//        cin >> s;
//        if('0' <= s[0] && s[0] <= '9') {
//            cout << poket[stoi(s)] << '\n';
//        }
//        else {
//            cout << M[s] << '\n';
//        }
//    }
//}