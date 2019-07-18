//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n;
//int dist[10][10];
//const int INF = 987654321;
//
//int shortestPath(int start, vector<int>& path, vector<bool>& visited, int currentLength) {
//    if(path.size() == n && dist[path.back()][start] != 0 )
//        return currentLength + dist[path.back()][start];
//    int ret = INF;
//    for(int next = 0; next < n; ++next) {
//        if(visited[next]) continue;
//        if(dist[path.back()][next] == 0) continue;
//        int here = path.back();
//        path.push_back(next);
//        visited[next] = true;
//        int cand = shortestPath(start, path, visited, currentLength + dist[here][next]);
//        ret = min(ret, cand);
//        visited[next] = false;
//        path.pop_back();
//    }
//    return ret;
//}
//
//int main() {
//    cin >> n;
//    for(int i=0; i<n; ++i)
//        for(int j=0; j<n; ++j)
//            cin >> dist[i][j];
//    vector<int> path;
//    vector<bool> visited(n, false);
//    int ans = INF;
//    for(int i=0; i<n; ++i) {
//        path.push_back(i);
//        visited[i] = true;
//        ans = min(ans, shortestPath(i, path, visited, 0));
//        visited[i] = false;
//        path.pop_back();
//    }
//    cout << ans << '\n';
//
//}