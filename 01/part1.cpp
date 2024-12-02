#include <algorithm>
#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

vector<int> a, b;

void input() {
    int x, y;
    while(cin >> x >> y) a.push_back(x), b.push_back(y);
}

int part1() {
    sort(begin(a), end(a));
    sort(begin(b), end(b));
    int ans = 0;
    for(int i = 0; i < size(a); ++i) ans += abs(a[i] - b[i]);
    return ans;
}

int part2() {
    unordered_map<int, int> occurs;
    for(auto y : b) ++occurs[y];
    int ans = 0;
    for(auto x : a) ans += x * occurs[x];
    return ans;
}

int main(int argc, char* argv[]) {

    input();
    cout << part2() << endl;
    return 0;
}

