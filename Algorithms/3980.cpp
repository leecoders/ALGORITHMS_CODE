//////#include"bits/stdc++.h"
//////using namespace std;
//////
//////int mat[12][12];
//////vector<pair<int, int>> v[12]; // <능력치, position>
//////bool visited[12];
//////int ans;
//////
//////void dfs(int now, int sum) {
//////    if(now == 12) {
//////        ans = max(ans, sum);
//////        return;
//////    }
//////    int len = v[now].size();
//////    for(int i=0; i<len; ++i) {
//////        int ability = v[now][i].first;
//////        int position = v[now][i].second;
//////        if(!visited[position]) {
//////            visited[position] = 1;
//////            dfs(now + 1, sum + ability);
//////            visited[position] = 0;
//////        }
//////    }
//////}
//////
//////int main() {
//////    ios::sync_with_stdio(0);
//////    cin.tie(0);
//////    cout.tie(0);
//////    int tt;
//////    cin >> tt;
//////    while(tt--) {
//////        memset(visited, 0, sizeof(visited));
//////        ans = 0;
//////        for(int i=1; i<=11; ++i) {
//////            v[i].clear();
//////            for(int j=1; j<=11; ++j) {
//////                cin >> mat[i][j];
//////                if(mat[i][j]) {
//////                    v[i].push_back(make_pair(mat[i][j], j));
//////                }
//////            }
//////        }
//////        dfs(1, 0);
//////        cout << ans << '\n';
//////    }
//////}
////
////#include <iostream>
////
////using namespace std;
////
////int main(void) {
////    string input;
////    cin >> input;
////    string ans = "";
////    string eng = "";
////    string num = "";
////
////    for(int i=0; i<input.size(); ++i) {
////        if('0' <= input[i] && input[i] <='9' ) num += input[i];
////        else eng += input[i];
////    }
////    int i = 0, j = 0;
////    while(i != eng.size() && j != num.size()) {
////        ans += eng[i++];
////        if('a' <= eng[i] && eng[i] <= 'z') ans += eng[i++];
////        if(num[j] == '1') {
////            if(j < num.size() && num[j+1] == '0') {
////                ans += num[j++];
////                ans += num[j++];
////            }
////            else {
////                j++;
////                continue;
////            }
////        }
////        else {
////            ans += num[j++];
////        }
////    }
////    if(i != eng.size() || j != num.size()) {
////        cout << "error" << '\n';
////    }
////    else {
////        cout << ans << '\n';
////    }
////}
//
//
////#include <iostream>
////#include <cstring>
////#include <vector>
////#include <map>
////using namespace std;
////
////int len1, len2;
////
////int main(void) {
////    int n, m;
////    cin >> n;
////    getchar();
////
////    // 1번 테이블 헤더 입력
////    vector<string> t1;
////    string s;
////    getline(cin, s);
////    int j = 0;
////    for(int k=0; k<3; ++k) {
////        string now="";
////        for (; j < s.size(); ++j) {
////            if (s[j] == ' ') {
////                j++;
////                break;
////            }
////            now += s[j];
////        }
////        t1.push_back(now);
////    }
////    len1 = t1.size();
////    map<string, vector<string>> table1;
////    for(int i=1; i<n; ++i) {
////        vector<string> row;
////        for(int k=0; k<3; ++k) {
////            string now="";
////            for (; j < s.size(); ++j) {
////                if (s[j] == ' ') {
////                    j++;
////                    break;
////                }
////                now += s[j];
////            }
////            row.push_back(now);
////        }
////        vector<string> temp;
////        for(int k=1; k<n; ++k) {
////            temp.push_back(row[k]);
////        }
////        table1.insert(make_pair(row[0], temp));
////    }
////    cout << table1["123"][1];
//
////    for(int i=0; i<n; ++i) {
////        string s;
////        getline(cin, s);
////        int j = 0;
////        for(int k=0; k<3; ++k) {
////            string now="";
////            for (; j < s.size(); ++j) {
////                if (s[j] == ' ') {
////                    j++;
////                    break;
////                }
////                now += s[j];
////            }
////            cout << now << '\n';
////        }
////    }
////}
//
//#include <iostream>
//#include <algorithm>
//#include <math.h>
//
//using namespace std;
//
//int h[1000001];
//
//int main(void) {
//    int n;
//    cin >> n;
//    for(int i=1; i<=n; ++i) {
//        cin >> h[i];
//    }
//
//    int ans = 0;
//    int h_mx = h[1];
//    int x_mx = 1;
//    for(int i=2; i<=n; ++i) {
//        if(h[i] >= h_mx) {
//            ans = max(ans, i - x_mx);
//            h_mx = h[i];
//            x_mx = i;
//        }
//        else {
//            ans = max(ans, i - x_mx);
//        }
//    }
//    cout << ans;
//}

//#include <iostream>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//
//int C, B;
//int visited[200001];
//
//int main(void) {
//    cin >> C >> B;
//    queue<int> bq;
//    memset(visited, -1, sizeof(visited));
//    visited[B] = 0;
//    bq.push(B);
//    while(!bq.empty()) {
//        int now = bq.front();
//        bq.pop();
//        int nb = now * 2;
//        if(0 <= nb && nb <= 200000 && visited[nb] == -1) {
//            visited[nb] = visited[now] + 1;
//            bq.push(nb);
//        }
//        nb = now + 1;
//        if(0 <= nb && nb <= 200000 && visited[nb] == -1) {
//            visited[nb] = visited[now] + 1;
//            bq.push(nb);
//        }
//        nb = now - 1;
//        if(0 <= nb && nb <= 200000 && visited[nb] == -1) {
//            visited[nb] = visited[now] + 1;
//            bq.push(nb);
//        }
//    }
//    int speed = 0;
//    int t = 0;
//    int ans = -1;
//    for(int i=C; i<=200000; i+=speed) {
//        speed++;
//        if(visited[i] == t) {
//            ans = t;
//            break;
//        }
//        t++;
//    }
//    cout << ans;
//}


//#include <iostream>
//#include <vector>
//#include <map>
//#include <cstring>
//#include <algorithm>
//#include <math.h>
//using namespace std;
//
//int main(void) {
//    int n, m;
//    int n_len, m_len;
//    vector<string> n_id, m_id;
//    vector<string> n_header, m_header;
//
//    // n 테이블 입력
//    cin >> n;
//    getchar();
//    map<string, vector<string>> n_map;
//    map<string, vector<string>> m_map;
//    for(int i=0; i<n; ++i) {
//        string s;
//        getline(cin, s);
//        int j = 0;
//
//        vector<string> temp;
//
//        for(int k=0; k<3; ++k) {
//            string now="";
//            for (; j < s.size(); ++j) {
//                if (s[j] == ' ') {
//                    j++;
//                    break;
//                }
//                now += s[j];
//            }
//            if(now != "") {
//                temp.push_back(now);
//            }
//        }
//        if(i==0) {
//            n_header = temp;
//            continue;
//        }
//        n_id.push_back(temp[0]);
//
//        vector<string> row;
//        for(int i=1; i<temp.size(); ++i) {
//            row.push_back(temp[i]);
//        }
//        n_len = row.size();
//
//        n_map.insert(make_pair(temp[0], row));
//    }
//
//    // m 테이블 입력
//    cin >> m;
//    getchar();
//    for(int i=0; i<m; ++i) {
//        string s;
//        getline(cin, s);
//        int j = 0;
//
//        vector<string> temp;
//
//        for(int k=0; k<3; ++k) {
//            string now="";
//            for (; j < s.size(); ++j) {
//                if (s[j] == ' ') {
//                    j++;
//                    break;
//                }
//                now += s[j];
//            }
//            if(now != "") {
//                temp.push_back(now);
//            }
//        }
//        if(i==0) {
//            m_header = temp;
//            continue;
//        }
//        m_id.push_back(temp[0]);
//
//        vector<string> row;
//        for(int i=1; i<temp.size(); ++i) {
//            row.push_back(temp[i]);
//        }
//        m_len = row.size();
//
//        m_map.insert(make_pair(temp[0], row));
//    }
//
//    // n 테이블 아이디 정렬
//    sort(n_id.begin(), n_id.end());
//
//    // 헤더 먼저 출력
//    for(int i=0; i<n_header.size(); ++i) {
//        cout << n_header[i] << " ";
//    }
//    // 첫번째 헤더는 중복이므로 생략하고 다음 부터 출력
//    for(int i=1; i<m_header.size(); ++i) {
//        cout << m_header[i] << " ";
//    }
//    cout << '\n';
//    // id 에 대한 결과 출력
//    for(int i=0; i<n_id.size(); ++i) {
//        cout << n_id[i] << " ";
//        for(int j=0; j<n_map[n_id[i]].size(); ++j) {
//            cout << n_map[n_id[i]][j] << " ";
//        }
//        if(m_map.count(n_id[i])) {
//            for(int j=0; j<m_map[n_id[i]].size(); ++j) {
//                cout << m_map[n_id[i]][j] << " ";
//            }
//        }
//        else {
//            for(int j=0; j<m_len; ++j) {
//                cout << "NULL" << " ";
//            }
//        }
//        cout << '\n';
//    }
//}

//#include"bits/stdc++.h"
//using namespace std;
//
//int main() {
//    long long n;
//    cin >> n;
//    long long sqrtn = (long long)sqrt(n);
//    long long i = sqrtn;
//    for(; i>0; --i) {
//        if(n % i == 0) break;
//    }
//    cout << abs(n/i - i);
//}

//#include <iostream>
//#include <string>
//#include <vector>
//#include <math.h>
//#include <algorithm>
//
//using namespace std;
//
//bool check(vector<int> p, vector<int> c) {
//    if(p[0] % 2 == 0) return false;
//    if(p[1] % 2 == 1) return false;
//    if(c[0] % 2 == 0) return false;
//    if(c[1] % 2 == 1) return false;
//    if(p[1] - p[0] != 1) return false;
//    if(c[1] - c[0] != 1) return false;
//
//    return true;
//}
//
//int solution(vector<int> p, vector<int> c) {
//    string p1 = to_string(p[0]);
//    string p2 = to_string(p[1]);
//    string c1 = to_string(c[0]);
//    string c2 = to_string(c[1]);
//
//    if(!check(p, c)) return -1;
//
//    int mx1 = 0, mx2 = 0;
//    int sum = 0;
//    int mul = int(p1[0] - '0');
//    for (int i = 1; i < p1.size(); ++i) {
//        mul *= int(p1[i] - '0');
//    }
//    for (int i = 0; i < p1.size(); ++i) {
//        sum += int(p1[i] - '0');
//    }
//    mx1 = max(sum, mul);
//
//    sum = 0;
//    mul = int(p2[0] - '0');
//    for (int i = 1; i < p2.size(); ++i) {
//        mul *= int(p2[i] - '0');
//    }
//    for (int i = 0; i < p2.size(); ++i) {
//        sum += int(p2[i] - '0');
//    }
//    mx1 = max(mx1, max(sum, mul));
//
//    sum = 0;
//    mul = int(c1[0] - '0');
//    for (int i = 1; i < c1.size(); ++i) {
//        mul *= int(c1[i] - '0');
//    }
//    for (int i = 0; i < c1.size(); ++i) {
//        sum += int(c1[i] - '0');
//    }
//    mx2 = max(sum, mul);
//    sum = 0;
//    mul = int(c2[0] - '0');
//    for (int i = 1; i < c2.size(); ++i) {
//        mul *= int(c2[i] - '0');
//    }
//    for (int i = 0; i < c2.size(); ++i) {
//        sum += int(c2[i] - '0');
//    }
//    mx2 = max(mx2, max(sum, mul));
//    if (mx1 > mx2) {
//        return 1;
//    } else if (mx1 < mx2) {
//        return 2;
//    } else {
//        return 0;
//    }
//
//
//}
//
//int main() {
//    vector<int> p, c;
//    p.push_back(97);
//    p.push_back(98);
//    c.push_back(197);
//    c.push_back(198);
//    cout << solution(p, c);
//}

//#include "bits/stdc++.h"
//using namespace std;
//
//
//string solution(string s) {
//    string ret = "";
//    while(1) {
//        string temp = s;
//        string next = "";
//        for(int i=1; i<s.size(); ++i) {
//            if(s[i-1] == s[i]) {
//                temp[i-1] = temp[i] = '-';
//            }
//        }
//        cout << temp << '\n';
//        for(int i=0; i<s.size(); ++i) {
//            if(temp[i] != '-') {
//                next += temp[i];
//            }
//        }
//        cout << next << '\n';
//        if(next == s) return next;
//        s = next;
//    }
//}
//
//int main() {
//    cout << solution("abcdeddeed");
//}
































