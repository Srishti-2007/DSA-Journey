#include <iostream>
#include <queue>
using namespace std;


queue<int> q;

//  push operation
void push(int x) {
    q.push(x);

    int size = q.size();

    // rotate elements so last inserted comes to front
    for (int i = 0; i < size - 1; i++) {
        q.push(q.front());
        q.pop();
    }
}

//  pop operation
int pop() {
    if (q.empty()) {
        cout << "Stack is empty\n";
        return -1;
    }

    int ans = q.front();
    q.pop();
    return ans;
}

//  top operation
int top() {
    if (q.empty()) {
        cout << "Stack is empty\n";
        return -1;
    }

    return q.front();
}

//  empty check
bool isEmpty() {
    return q.empty();
}

//  print function 
void printStack(queue<int> temp) {
    cout << "Stack (top to bottom): ";
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}


int main() {

    push(10);
    push(20);
    push(30);

    printStack(q);   // 30 20 10

    cout << "Top: " << top() << endl;   // 30

    cout << "Pop: " << pop() << endl;   // 30

    printStack(q);   // 20 10

    cout << "Top: " << top() << endl;   // 20

    cout << "Is Empty: " << isEmpty() << endl; // 0 (false)

    pop();
    pop();

    cout << "Is Empty after removing all: " << isEmpty() << endl; // 1 (true)

    return 0;
}