//#include "bits/stdc++.h"
//using namespace std;
//
//int temp[1000001];
//vector<int> v;
//int n;
//
//void merge(int left, int right) {
//    int mid = (left + right) / 2;
//    int i = left, j = mid + 1, k = 0;
//
//    while(i <= mid && j <= right) {
//        if(v[i] <= v[j]) temp[k++] = v[i++];
//        else temp[k++] = v[j++];
//    }
//    while(i <= mid) temp[k++] = v[i++];
//    while(j <= right) temp[k++] = v[j++];
//    for(int i = left; i <= right; ++i) {
//        v[i] = temp[i - left];
//    }
//}
//
//void sort(int left, int right) {
//    if(left == right) return;
//    int mid = (left + right) / 2;
//    sort(left, mid);
//    sort(mid + 1, right);
//    merge(left, right);
//}
//
//void quick(int left, int right) {
//    if(left >= right) return;
//    int pivot = left;
//    int lo = left;
//    int hi = right + 1;
//    while(lo < hi) {
//        do  {
//            lo++;
//        } while(lo <= right && v[lo] < v[pivot]);
//        do {
//            hi--;
//        } while(hi >= left && v[hi] > v[pivot]);
//        if(lo < hi) {
//            swap(v[lo], v[hi]);
//        }
//    }
//    swap(v[pivot], v[hi]);
//    quick(left, hi - 1);
//    quick(hi + 1, right);
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n;
//    for(int i=0; i<n; ++i) {
//        int input;
//        cin >> input;
//        v.push_back(input);
//    }
//    sort(0, v.size()-1);
//    for(auto it : v)
//        cout << it << '\n';
//}