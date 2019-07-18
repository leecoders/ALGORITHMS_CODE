//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    vector<char> v;
//    int cnt[26] = {0};
//    int cnt_odd = 0;
//    char odd;
//    string s;
//    cin >> s;
//    for(int i=0; i<s.length(); ++i) {
//        cnt[s[i]-'A']++;
//    }
//    for(int i=0; i<26; ++i) {
//        if(cnt[i] % 2 == 1) {
//            cnt_odd++;
//            odd = 'A'+i;
//            cnt[i]--;
//        }
//    }
//    if(cnt_odd > 1) {
//        cout << "I'm Sorry Hansoo" << '\n';
//    }
//    else {
//        for(int i = 0; i < 26; ++i) {
//            for(int j=0; j<cnt[i]/2; ++j)
//                v.push_back('A'+i);
//        }
//        sort(v.begin(), v.end());
//        if(cnt_odd == 1)
//            v.push_back(odd);
//        for(int i=v.size()-1-cnt_odd; i>=0; --i)
//            v.push_back(v[i]);
//
//        for(auto it : v)
//            cout << it;
//        cout << '\n';
//    }
//}