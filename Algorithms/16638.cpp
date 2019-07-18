//#include"bits/stdc++.h"
//using namespace std;
//
//#define mp make_pair
//#define pb(x) push_back(x)
//#define ICPC ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
//#define ALL(a) (a.begin()),(a.end())
//#define ZERO(a) memset(a,0,sizeof(a))
//#define MINUS(a) memset(a,0xff,sizeof(a))
//
//typedef pair<int, int> pii;
//typedef tuple<int, int, int> t3;
//typedef tuple<int, int, int, int> t4;
//typedef long long ll;
//typedef double db;
//
//ll gcd(ll a, ll b) {
//    return (a == 0) ? b : gcd(b%a, a);
//}
//
//int n;
//string input;
//vector<char> s;
//bool visited[21] = {false}; // 0번부터 존재
//vector<pii> pos;
//int ans = INT_MIN;
//
//string post(string& s) {
//    string ret="";
//    s = '(' + s + ')';
//    stack<char> S;
//    for(int i=0; i < s.length(); ++i) {
//        if('0' <= s[i] && s[i] <= '9') {
//            ret += s[i];
//        }
//        else if(s[i] == ')') {
//            while(S.top() != '(') {
//                ret += S.top();
//                S.pop();
//            }
//            S.pop();
//        }
//        else if(s[i] == '(') {
//            S.push(s[i]);
//        }
//        else if(s[i] == '*' ) {
//            while((S.top() == '*')) {
//                ret += S.top();
//                S.pop();
//            }
//            S.push(s[i]);
//        }
//        else if(s[i] == '+' || s[i] == '-') {
//            while(S.top() != '(') {
//                ret += S.top();
//                S.pop();
//            }
//            S.push(s[i]);
//        }
//    }
//    return ret;
//}
//
//int calc() {
//    string infix = "";
//    for(int i=0; i<s.size(); ++i) {
//        if(s[i] == '.') continue;
//        infix.pb(s[i]);
//    }
//    string postfix = post(infix);
//
//    stack<int> S;
//
//    for(int i=0; i<postfix.length(); ++i) {
//        if('0' <= postfix[i] && postfix[i] <= '9') {
//            S.push(postfix[i]-'0');
//        }
//        else if(postfix[i] == '*') {
//            int a = S.top(); S.pop();
//            int b = S.top(); S.pop();
//            S.push(b*a);
//        }
//        else if(postfix[i] == '+') {
//            int a = S.top(); S.pop();
//            int b = S.top(); S.pop();
//            S.push(b+a);
//        }
//        else if(postfix[i] == '-') {
//            int a = S.top(); S.pop();
//            int b = S.top(); S.pop();
//            S.push(b-a);
//        }
//    }
//
//    return S.top();
//}
//
//void dfs(int now) {
//    ans = max(ans, calc());
//
//    for(int i = now + 1; i < n/2; ++i) {
//        if(i!=0 && visited[i-1]) continue;
//
//        s[pos[i].first] = '(';
//        s[pos[i].second] = ')';
//
//        visited[i] = true;
//        dfs(i);
//        visited[i] = false;
//
//        s[pos[i].first] = '.';
//        s[pos[i].second] = '.';
//    }
//}
//
//int main() {
//    ICPC;
//
//    cin >> n >> input;
//
//    s.pb('.');
//    for(int i=0; i<input.length(); ++i) {
//        if('0' <= input[i] && input[i] <= '9')
//            s.pb(input[i]);
//        else {
//            s.pb('.');
//            s.pb(input[i]);
//            s.pb('.');
//        }
//    }
//    s.pb('.');
//
//    for(int i=0; i < n/2; ++i) {
//        int start = 4 * i;
//        int end = start + 6;
//        pos.push_back(mp(start, end));
//    }
//    dfs(-1);
//    cout << ans;
//}