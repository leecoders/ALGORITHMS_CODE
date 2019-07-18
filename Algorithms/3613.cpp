//#include"bits/stdc++.h"
//using namespace std;
//
//string s;
//bool large() {
//    for(int i=0; i<s.size(); ++i)
//        if('A' <= s[i] && s[i] <= 'Z')
//            return true;
//    return false;
//}
//
//bool underbar() {
//    for(int i=0; i<s.size(); ++i)
//        if(s[i] == '_')
//            return true;
//    return false;
//}
//
//bool waste() {
//    for(int i=0; i<s.size(); ++i) {
//        if(!(('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z') || (s[i] == '_'))) return true;
//    }
//    return false;
//}
//
//int main() {
//    getline(cin, s);
//    if(s.find("__") != -1 || waste() || !('a' <= s[0] && s[0] <= 'z') || s[s.size()-1] == '_' || (large() && underbar())) {
//        cout << "Error!";
//    }
//    else if(large()) {
//        for(auto it = s.begin(); it != s.end(); ++it) {
//            if('A' <= *it && *it <= 'Z') {
//                *it += 32;
//                it = s.insert(it, '_');
//            }
//        }
//        cout << s;
//    }
//    else if(underbar()) {
//        for(auto it = s.begin(); it != s.end(); ++it) {
//            if(*it == '_') {
//                s.erase(it);
//                if(it == s.end()) break;
//                *it -= 32;
//            }
//        }
//        cout << s;
//    }
//    else {
//        cout << s;
//    }
//}