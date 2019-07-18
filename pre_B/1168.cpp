// 랜덤 액세스가 안되서 시간초과..

//#include <stdio.h>
//
//const int MAX_SIZE = 100000;
//
//int n, k;
//
//struct NODE {
//    int prev, next, data;
//};
//
//struct MY_LIST {
//    NODE my_list[MAX_SIZE + 2];
//    int HEAD = MAX_SIZE;
//    int TAIL = MAX_SIZE + 1;
//    int pos;
//
//    MY_LIST() {
//        my_list[HEAD].next = my_list[HEAD].prev = TAIL;
//        my_list[TAIL].prev = my_list[TAIL].next = HEAD;
//        pos = 0;
//    }
//
//    void push_back(int data) {
//        int prev = my_list[TAIL].prev;
//        int next = my_list[prev].next;
//
//        my_list[pos].data = data;
//
//        my_list[pos].prev = prev;
//        my_list[prev].next = pos;
//
//        my_list[pos].next = next;
//        my_list[next].prev = pos;
//
//        ++pos;
//    }
//
//    void push_front(int data) {
//        int next = my_list[HEAD].next;
//        int prev = my_list[next].prev;
//
//        my_list[pos].data = data;
//
//        my_list[pos].prev = prev;
//        my_list[prev].next = pos;
//
//        my_list[pos].next = next;
//        my_list[next].prev = pos;
//
//        ++pos;
//    }
//
//    void insert(int p, int data) {
//        int next = my_list[HEAD].next;
//        for(int i=0; i<p; ++i) {
//            next = my_list[next].next;
//        }
//        int prev = my_list[next].prev;
//
//        my_list[pos].data = data;
//
//        my_list[pos].prev = prev;
//        my_list[prev].next = pos;
//
//        my_list[pos].next = next;
//        my_list[next].prev = pos;
//
//        ++pos;
//    }
//
//    void pop_back() {
//        int target = my_list[TAIL].prev;
//
//        my_list[my_list[target].prev].next = my_list[target].next;
//        my_list[my_list[target].next].prev = my_list[target].prev;
//    }
//
//    void pop_front() {
//        int target = my_list[HEAD].next;
//
//        my_list[my_list[target].prev].next = my_list[target].next;
//        my_list[my_list[target].next].prev = my_list[target].prev;
//    }
//
//    int erase(int p) {
//        int target = my_list[HEAD].next;
//        for(int i=0; i<p; ++i) {
//            target = my_list[target].next;
//            if(target == TAIL) {
//                target = my_list[HEAD].next;
//            }
//        }
//
//        my_list[my_list[target].prev].next = my_list[target].next;
//        my_list[my_list[target].next].prev = my_list[target].prev;
//
//        return my_list[target].data;
//    }
//
//    void print() {
//        int next = my_list[HEAD].next;
//        printf("<%d", my_list[next].data);
//
//        for(int i=1; i<n; ++i) {
//            next = my_list[next].next;
//            if(next == TAIL) {
//                next = my_list[HEAD].next;
//            }
//            printf(", %d", my_list[next].data);
//        }
//        printf(">\n");
//    }
//};
//
//MY_LIST people, order;
//int now = 0;
//
//int main() {
//    scanf("%d %d", &n, &k);
//
//    for(int i = 1; i <= n; ++i) {
//        people.push_back(i);
//    }
//
//    for(int i=0; i<n; ++i) {
//        now += k-1;
//        now %= (n - i); // 남은 사람 수로 나눔
//        order.push_back(people.erase(now));
//    }
//
//    order.print();
//}

// 이터레이터를 통해 랜덤 액세스
//#include "bits/stdc++.h"
//using namespace std;
//
//vector<int> v, ans;
//int n, k, now;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> k;
//    for(int i=1; i<=n; ++i) {
//        v.push_back(i);
//    }
//    for(int i=0; i<n; ++i) {
//        now += k-1;
//        now %= (n - i);
//        auto it = v.begin() + now;
//        ans.push_back(*it);
//        v.erase(it);
//    }
//    cout << "<" << ans[0];
//    for(int i=1; i<n; ++i) {
//        cout << ", " << ans[i];
//    }
//    cout << ">";
//}













