#include "bits/stdc++.h"
using namespace std;

void f(vector<int>& v) {
    v.push_back(2);
}

int main() {
    vector<int> cnt;
    f(cnt);
    cout << cnt[0];
}