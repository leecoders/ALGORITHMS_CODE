//#include <iostream>
//#include <vector>
//#include <limits.h>
//
//using namespace std;
//
//vector<int> cost(4), plan(12);
//int ans;
//
//bool visited(int next) {
//    bool ret = true;
//    for(int i=next; i<12; ++i) {
//        if(plan[i]) return false;
//    }
//    return ret;
//};
//
//void dfs(int start, int sum) {
//    if(visited(start)) {
//        ans = min(ans, sum);
//        return;
//    }
//    if(plan[start] == 0) dfs(start+1, sum);
//
//    dfs(start + 1, sum + cost[0] * plan[start]);
//
//    dfs(start + 1, sum + cost[1]);
//
//    dfs(start + 3, sum + cost[2]);
//}
//
//int main() {
//    int t;
//    cin >> t;
//    for(int tc = 1; tc <= t; ++tc) {
//        cost.clear();
//        plan.clear();
//        for(int i=0; i<4; ++i)
//            cin >> cost[i];
//        for(int i=0; i<12; ++i)
//            cin >> plan[i];
//        ans = cost[3];
//        dfs(0, 0);
//        cout << "#" << tc << " " << ans << '\n';
//    }
//}