//#include <iostream>
//#include <list>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int t;
//    cin >> t;
//    while(t--) {
//        string s;
//        cin >> s;
//        list<char> li;
//        auto it = li.begin();
//        int len = s.length();
//        for(int i=0; i < len; ++i) {
//            if(s[i] == '<' && it != li.begin()) {
//                it--;
//            }
//            else if(s[i] == '>' && it != li.end()) {
//                it++;
//            }
//            else if(s[i] == '-') {
//                if(it != li.begin()) {
//                    it--;
//                    it = li.erase(it);
//                }
//            }
//            else if(s[i]!='<' && s[i]!='>' && s[i]!='-') {
//                it = li.insert(it, s[i]);
//                it++;
//            }
//        }
//        for(auto i : li)
//            cout << i;
//        cout << '\n';
//    }
//}