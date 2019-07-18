//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//    int N, M;
//    cin >> N >> M;
//    int time[N];
//    cin >> time[0];
//    for(int i=1; i<N; ++i) {
//        int input;
//        cin >> input;
//        time[i] = time[i-1] + input;
//    }
//    for(int i=0; i<M; ++i) {
//        int input;
//        cin >> input;
//        int ans = lower_bound(time, time+N, input) - time;
//        if (time[ans] != input)
//            ans--;
//        cout << ans+1 << '\n';
//    }
//}