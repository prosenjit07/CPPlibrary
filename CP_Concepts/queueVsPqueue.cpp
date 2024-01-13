#include <iostream>
#include <queue>
using namespace std;

void q_display(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

void pq_display(priority_queue<int> pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}

void pqr_display(priority_queue<int> pqr)
{
    while (!pqr.empty())
    {
        cout << -1 * pqr.top() << " ";
        pqr.pop();
    }
}

int main()
{
    queue<int> q;
    priority_queue<int> pq;

    // decresing order priority_queue
    priority_queue<int> pqr;

    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int k;
        cin >> k;
        q.push(k);
        pq.push(k);
        pqr.push(-k);
    }
    cout << "Q:";
    q_display(q);
    cout<<endl;
    cout << "PQ:";
    pq_display(pq);
    cout<<endl;
    cout << "PQR:";
    pqr_display(pqr);
    return 0;
}
