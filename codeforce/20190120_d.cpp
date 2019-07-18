//#include <iostream>
//#include <string.h>
//#include <queue>
//
//using namespace std;
//
//int dy[4] = {-1, 1, 0, 0};
//int dx[4] = {0, 0, 1, -1};
//char board[1001][1001];
//int cnt[10] = {0};
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n, m, p;
//    cin >> n >> m >> p;
//    int speed[p+1];
//    for(int i=1; i<=p; ++i) {
//        cin >> speed[i];
//    }
//    queue<pair<int, int> > q;
//    for(int i=1; i<=n; ++i) {
//        string temp;
//        cin >> temp;
//        for(int j=1; j<=m; ++j) {
//            board[i][j] = temp[j-1];
//            if('1' <= board[i][j] && board[i][j] <= '9')
//                q.push(make_pair(i, j));
//        }
//    }
//    while(!q.empty()) {
//        int y = q.front().first;
//        int x = q.front().second;
//        q.pop();
//        int player = board[y][x] - '0';
//
//        for(int i=0; i<4; ++i) {
//            for(int j=1; j<=speed[player]; ++j) {
//                int ny = y + dy[i] * j;
//                int nx = x + dx[i] * j;
//                if(ny < 1 || nx < 1 || ny > n || nx > m) break;
//                if(board[ny][nx] != '.') break;
//                board[ny][nx] = board[y][x];
//                q.push(make_pair(ny, nx));
//            }
//        }
//    }
//    for(int i=1; i<=n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            if ('1' <= board[i][j] && board[i][j] <= '9')
//                cnt[board[i][j] - '0']++;
//        }
//    }
//    for(int i=1; i<=p; ++i)
//        cout << cnt[i] << ' ';
//}


//accepted
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//typedef long long int ll;
//
//queue<tuple<ll,ll,ll> > q[15]; // 왜 배열일까? 왜 투플일까?
//ll cur[15];
//int dx[4] = {0,0,-1,1}
//int dy[4] = {1,-1,0,0};
//char arr[1005][1005];
//ll val[15],cnt[15];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    ll n,m,i,j,k,p,l,r,a,b,c=0,x,y;
//    cin>>n>>m>>p;
//    for(i=0;i<p;i++)cin>>val[i];
//    for(i=0;i<n;i++){
//        for(j=0;j<m;j++){
//            cin>>arr[i][j];
//            if(arr[i][j]!='.'&&arr[i][j]!='#'){ // player
//                a = arr[i][j]-'1'+1;
//                q[a].push(make_tuple(0,i,j));
//            }
//        }
//    }
//    bool ok = true; // q가 배열이기 때문에 check 필요
//    while(ok){
//        ok = false;
//        for(i=1;i<=p;i++){
//            cur[i]+=val[i-1]; // 속도가 2이면 2, 4, 6, .. 로 커질텐데 누적합이 필요한 이유??
//            while(q[i].size() && get<0>(q[i].front()) < cur[i]){ // 확장 속도에 맞게 반복 되는지 필요
//                tie(c,a,b) = q[i].front();
//                q[i].pop();
//                for(j=0;j<4;j++){
//                    y = dy[j]+a;
//                    x = dx[j]+b;
//                    if(x<0||y<0||x>=m||y>=n)continue;
//                    if(arr[y][x]!='.')continue;
//                    arr[y][x] = '0'+i;
//                    q[i].push(make_tuple(c+1,y,x)); // c를 넘길때 누적합 c로 넘긴다. -> 이유
//                }
//            }
//            if(q[i].size()) ok = true;
//        }
//    }
//    for(i=0;i<n;i++){
//        for(j=0;j<m;j++){
//            if(arr[i][j]=='#')continue;
//            cnt[arr[i][j]-'1']++;
//        }
//    }
//    for(i=0;i<p;i++)cout<<cnt[i]<<" ";
//}