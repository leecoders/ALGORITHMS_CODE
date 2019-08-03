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
//void show() {
//    for(int i=0; i<s.size(); ++i) {
//        cout << s[i];
//    }
//    cout << '\n' << '\n';
//}
//
//int calc() {
//    show();
//    stack<int> nums;
//    stack<char> ops;
//    for(int i=0; i < s.size(); ++i) {
//        if(s[i] == '.') continue;
//        if('0' <= s[i] && s[i] <= '9') {
//            if(nums.empty())
//                nums.push(s[i]-'0');
//            else {
//                if(ops.top() == '(') {
//                    nums.push(s[i] - '0');
//                    continue;
//                }
//                int b = s[i] - '0';
//                int a = nums.top(); nums.pop();
//                char op = ops.top(); ops.pop();
//                if(op == '+') {
//                    nums.push(a+b);
//                }
//                else if(op == '-') {
//                    nums.push(a-b);
//                }
//                else if(op == '*') {
//                    nums.push(a*b);
//                }
//                else if(op == '/') {
//                    nums.push(a/b);
//                }
//            }
//        }
//        else {
//            if(s[i] == ')') {
//                ops.pop();
//                if(!ops.empty()) {
//                    int b = nums.top(); nums.pop();
//                    int a = nums.top(); nums.pop();
//                    char op = ops.top(); ops.pop();
//                    if(op == '+') {
//                        nums.push(a+b);
//                    }
//                    else if(op == '-') {
//                        nums.push(a-b);
//                    }
//                    else if(op == '*') {
//                        nums.push(a*b);
//                    }
//                    else if(op == '/') {
//                        nums.push(a/b);
//                    }
//                }
//            }
//            else ops.push(s[i]);
//        }
//    }
//    return nums.top();
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