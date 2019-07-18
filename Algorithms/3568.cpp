//#include"bits/stdc++.h"
//using namespace std;
//
//int main() {
//    string s;
//    getline(cin, s);
//    string common = "";
//    int i;
//    for(i=0; i<s.size(); ++i) {
//        if(s[i] != ' ')
//            common += s[i];
//        else
//            break;
//    }
//    vector<string> v;
//    int step=-1;
//    for(; i<s.size(); ++i) {
//        if(('a'<=s[i]&&s[i]<='z') || ('A'<=s[i]&&s[i]<='Z')) {
//            step++;
//            v.push_back("");
//            while(('a'<=s[i]&&s[i]<='z') || ('A'<=s[i]&&s[i]<='Z')) {
//                v[step] += s[i];
//                ++i;
//            }
//            --i;
//        }
//        else if(s[i] != ' ' && s[i] != ',' && s[i] != ';') {
//            v[step] += s[i];
//        }
//    }
//    vector<string> ans;
//    for(int i=0; i<v.size(); ++i) {
//        ans.push_back(common);
//        int len = v[i].size();
//        bool is_first = true;
//        for(int j=len-1; j>=0; --j) {
//            if(('a'<=v[i][j]&&v[i][j]<='z') || ('A'<=v[i][j]&&v[i][j]<='Z')) {
//                ans[i] += ' ';
//                for(int k=0; k<len; ++k) {
//                    if(('a'<=v[i][k]&&v[i][k]<='z') || ('A'<=v[i][k]&&v[i][k]<='Z'))
//                        ans[i] += v[i][k];
//                    else
//                        break;
//                }
//                break;
//            }
//            else {
//                if(v[i][j] == '[') ans[i] += ']';
//                else if(v[i][j] == ']') ans[i] += '[';
//                else ans[i] += v[i][j];
//            }
//        }
//    }
//    for(auto i : ans)
//        cout << i << ";" << '\n';
//}