//#include"bits/stdc++.h"
//
//using namespace std;
//
//
//struct Node {
//    string name;
//    int a, b, c;
//
//    bool operator< (const Node& _Node) const {
//        if(a == _Node.a) {
//            if(b == _Node.b) {
//                if(c == _Node.c) {
//                    return name < _Node.name;
//                }
//                return c > _Node.c;
//            }
//            return b < _Node.b;
//        }
//        return a > _Node.a;
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//
//    int n;
//    cin >> n;
//    vector<Node> node(n);
//    for(int i=0; i<n; ++i) {
//        cin >> node[i].name >> node[i].a >> node[i].b >> node[i].c;
//    }
//    sort(node.begin(), node.end());
//    for(int i=0; i<n; ++i)
//        cout << node[i].name << '\n';
//}