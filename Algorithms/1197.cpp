//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//
//struct Edge {
//    int start, end, cost;
//
//    bool operator<(const Edge &other) const {
//        return cost < other.cost;
//    }
//};
//
//int parent[10001];
//
//int Find(int x) {   // 조상 노드 찾기
//    if (x == parent[x]) // 초기에 설정한 자기 자신을 조상으로 가리킨다면 그것은 루트 노드
//        return x;
//
//    return parent[x] = Find(parent[x]);
//}
//
//void Union(int x, int y) {  // 조상을 하나의 루트로 합쳐줌
//    x = Find(x); // 정점 start의 루트
//    y = Find(y); // 정점 end의 루트
//    parent[x] = y; // 정점 end의 루트로 합쳐줌
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n, m;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) { // 초기 조상을 자기 자신으로 설정
//        parent[i] = i;
//    }
//    vector<Edge> edge(m);
//    for (int i = 0; i < m; i++) {
//        cin >> edge[i].start >> edge[i].end >> edge[i].cost;
//    }
//    sort(edge.begin(), edge.end());
//    int ans = 0;
//    for (int i = 0; i < m; i++) {
//        Edge e = edge[i];
//        int x = Find(e.start);  // 후보 간선의 양 정점의 조상을 찾아야 함.
//        int y = Find(e.end);
//        if (x != y) {   // 조상이 같다면 같은 집합.
//            Union(e.start, e.end);
//            ans += e.cost;
//        }
//    }
//    cout << ans;
//}





//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//typedef struct kruskal {
//    int from;
//    int to;
//    int val;
//}KS;
//vector<KS> edge;
//int parent[10002];
//int res;
//bool chk;
//
//bool comp(KS d1, KS d2) { // comparator
//    return d1.val < d2.val;
//}
//
//int find(int u) {       // Find : 부모 노드 찾는 함수
//    if (u == parent[u])
//        return u;
//
//    return parent[u] = find(parent[u]);
//}
//
//void merge(int u, int v) {
//    chk = false;
//    u = find(u);
//    v = find(v);
//
//    // 사이클 존재 여부 확인 코드
//    if (u == v)
//        return;
//
//    parent[u] = v;
//    chk = true;
//}
//
//int main() {
//    int V, E;
//
//    scanf("%d %d", &V, &E);
//
//    // 부모를 자기 자신으로 초기화
//    for (int i = 1; i <= V; i++)
//        parent[i] = i;
//
//    // 그래프 형성
//    for (int i = 0; i < E; i++) {
//        KS ks;
//        scanf("%d %d %d", &ks.from, &ks.to, &ks.val);
//        edge.push_back(ks);
//    }
//
//    // 크루스칼 알고리즘에 의해 간선을 오름차순 정렬
//    sort(edge.begin(), edge.end(), comp);
//
//    // 간선 union, 사이클이 존재하지 않도록
//    for (int i = 0; i < E; i++) {
//        merge(edge[i].from, edge[i].to);
//
//        if(chk)
//            res += edge[i].val;
//    }
//
//    printf("%d", res);
//}
