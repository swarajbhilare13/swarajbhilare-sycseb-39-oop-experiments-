#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

struct Person {
    string name; string birth; string phone;
};

int main() {
    // Stack
    stack<int> s; s.push(1); s.push(2); s.push(3);
    cout << "Stack: "; while (!s.empty()) { cout << s.top() << " "; s.pop(); }

    // Queue
    queue<int> q; q.push(4); q.push(5); q.push(6);
    cout << "\nQueue: "; while (!q.empty()) { cout << q.front() << " "; q.pop(); }

    // Records
    vector<Person> v = {
        {"Zara", "1990", "111"}, {"Bob", "1985", "222"}, {"Alice", "1992", "333"}
    };
    sort(v.begin(), v.end(), [](Person a, Person b) { return a.name < b.name; });
    cout << "\nSorted Records:\n"; for (auto p : v) cout << p.name << " ";

    string target = "Bob";
    auto it = find_if(v.begin(), v.end(), [&](Person p) { return p.name == target; });
    if (it != v.end()) cout << "\nFound: " << it->name << ", " << it->birth << ", " << it->phone << endl;

    return 0;
}
