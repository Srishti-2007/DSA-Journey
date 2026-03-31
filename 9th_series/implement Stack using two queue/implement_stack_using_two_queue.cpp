#include <iostream>
#include <queue>
using namespace std;

queue<int> q1, q2;

// push
void push(int x) {
    q1.push(x);
}

// pop
int pop() {
    int n = q1.size();

    for (int i = 0; i < n - 1; i++) {
        q2.push(q1.front());
        q1.pop();
    }

    int ans = q1.front();
    q1.pop();

    // swap
    swap(q1, q2);

    return ans;
}

// top
int top() {
    int n = q1.size();

    for (int i = 0; i < n - 1; i++) {
        q2.push(q1.front());
        q1.pop();
    }

    int ans = q1.front();
    q1.pop();

    q2.push(ans);

    swap(q1, q2);

    return ans;
}

// empty
bool empty() {
    return q1.empty();
}
// printing
void printQueue(queue<int> q) {  // pass by value (copy)
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    cout<<endl;
    printQueue(q1);
    cout << "Top: " << top() << endl;
    cout << "Pop: " << pop() << endl;
    cout << "Top: " << top() << endl;
    cout << "Empty: " << empty() << endl;

    return 0;
}