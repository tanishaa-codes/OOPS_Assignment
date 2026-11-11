
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {

    // Stack operations
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack top element: " << s.top() << endl;

    s.pop();

    cout << "Stack after pop, top element: "
         << s.top() << endl;


    // Queue operations
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "\nQueue front element: " << q.front() << endl;

    q.pop();

    cout << "Queue after pop, front element: "
         << q.front() << endl;

    return 0;
}
