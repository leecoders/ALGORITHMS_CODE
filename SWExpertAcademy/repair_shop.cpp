//#include"bits/stdc++.h"
//using namespace std;
//
//int n, m, k, ta, tb;
//pair<int, int> a[11], b[11]; // first : 처리 시간, second : 현재 이용 고객
//int now_a[11], now_b[11]; // 각 창구의 현재 진행도
//pair<int, int> visited[1001];
//priority_queue<int, vector<int>, greater<int>> aq;
//priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> bq; // {시간, A, 고객번호}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int tc;
//    cin >> tc;
//    for(int tcN=1; tcN<=tc; ++tcN) {
//        vector<int> t[20001]; // 해당 시간에 입장한 고객 번호 vector (초기화가 안되기 때문에 전역변수로 쓸 수 없다.)
//        memset(now_a, 0, sizeof(now_a));
//        memset(now_b, 0, sizeof(now_b));
//        cin >> n >> m >> k >> ta >> tb;
//        for(int i=1; i<=n; ++i) {
//            cin >> a[i].first;
//        }
//        for(int i=1; i<=m; ++i) {
//            cin >> b[i].first;
//        }
//        for(int i=1; i<=k; ++i) {
//            int input;
//            cin >> input;
//            t[input].push_back(i);
//        }
//        for(int i=0; i<=20000; ++i) { // t=0~1000의 상태변화
//            // a의 대기열에 넣기
//            int len = t[i].size();
//            for(int j=0; j<len; ++j) {
//                aq.push(t[i][j]);
//            }
//            // a 창구의 1~n 각각 진행 상황 ++해주고 빈 곳에 기다리는 고객 있으면 삽입
//            for(int j=1; j<=n; ++j) {
//                if(a[j].second) {
//                    if(++now_a[j] == a[j].first) {
//                        now_a[j] = 0;
//                        bq.push(make_tuple(i, j, a[j].second));
//                        a[j].second = 0;
//                    }
//                }
//                if(!a[j].second && aq.size()) { // a가 비어있고 대기하는 고객이 있으면
//                    a[j].second = aq.top(); aq.pop();
//                    visited[a[j].second].first = j;
//                }
//            }
//            // b 처리
//            for(int j=1; j<=m; ++j) {
//                if(b[j].second) {
//                    if(++now_b[j] == b[j].first) {
//                        now_b[j] = 0;
//                        b[j].second = 0;
//                    }
//                }
//                if(!b[j].second && bq.size()) {
//                    b[j].second = get<2>(bq.top()); bq.pop();
//                    visited[b[j].second].second = j;
//                }
//            }
//        }
//        int res = 0;
//        for(int i=1; i<=k; ++i) {
//            if(ta == visited[i].first && tb == visited[i].second) {
//                res += i;
//            }
//        }
//        if(res == 0) res = -1;
//        cout << "#" << tcN << " " << res << '\n';
//    }
//}

// 시간 24ms
//#include <stdio.h>
//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//int T;
//int N, M, K;
//int A, B;
//
//int recept[11];
//int receptState[11] = { 0 };
//int receptWating[11] = { 0 };
//int repair[11];
//int repairState[11] = { 0 };
//int repairWating[11] = { 0 };
//
//
//vector<int> used1;
//vector<int> used2;
//
//queue<int> customer;
//queue<int> repairQ;
//int test1 = 0;
//
//int repairing();
//
//
//int main(void) {
//
//    cin >> T;
//    for (int test = 0; test < T; test++) {
//        test1 = test + 1;
//        int cSize = customer.size();
//        for (int i = 0; i < cSize; i++) {
//            customer.pop();
//        }
//        int rSize = repairQ.size();
//        for (int i = 0; i < rSize; i++) {
//            repairQ.pop();
//        }
//
//        used1.clear();
//        used2.clear();
//
//        cin >> N >> M >> K >> A >> B;
//        A--;
//        B--;
//        for (int i = 0; i < N; i++) {
//            cin >> recept[i];
//        }
//
//        for (int i = 0; i < M; i++) {
//            cin >> repair[i];
//        }
//
//        for (int i = 0; i < K; i++) {
//            int tk;
//            cin >> tk;
//            customer.push(tk);
//        }
//        repairing();
//    }
//}
//
//int repairing() {
//    int time = 0;
//    int customerNum = 1;
//    int doneCount = 0;
//    while (doneCount < K) {
//        for (int i = 0; i < N; i++) {
//            if (receptState[i] == 0) {
//                if (customer.size() > 0) {
//                    int tk = customer.front();
//                    if (tk <= time) {
//                        receptState[i] += recept[i];
//                        receptWating[i] = customerNum++;
//                        customer.pop();
//                        if (i == A) {
//                            used1.push_back(customerNum - 1);
//                        }
//                    }
//                }
//            }
//            else if (receptState[i] > 0) {
//                receptState[i]--;
//                if (receptState[i] == 0) {
//                    repairQ.push(receptWating[i]);
//                    receptWating[i] = 0;
//                    i--;
//                    continue;
//                }
//            }
//        }
//        for (int rep = 0; rep < M; rep++) {
//            if (repairState[rep] == 0) {
//                if (repairQ.size() > 0) {
//                    int cusNum = repairQ.front();
//                    repairQ.pop();
//                    repairState[rep] += repair[rep];
//                    repairWating[rep] = cusNum;
//                    if (rep == B) {
//                        used2.push_back(cusNum);
//                    }
//                }
//            }
//            else if (repairState[rep] > 0) {
//                repairState[rep]--;
//                if (repairState[rep] == 0) {
//                    repairWating[rep] = 0;
//                    doneCount++;
//                    rep--;
//                    continue;
//                }
//            }
//        }
//        time++;
//    }
//    int result = 0;
//    for (int i = 0; i < used1.size(); i++) {
//        for (int j = 0; j < used2.size(); j++) {
//            if (used1[i] == used2[j]) {
//                result += used1[i];
//            }
//        }
//    }
//    if (result == 0)
//        cout <<"#"<< test1 <<" "<<-1<<endl;
//    else cout << "#" << test1 << " "<<result << endl;
//    return 0;
//}