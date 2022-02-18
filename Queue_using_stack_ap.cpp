//Order = O(n)
//Using 2 stack
#include "bits/stdc++.h"
using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }
    int pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty \n";
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topVal = s2.top();
        s2.pop();
        return topVal;
    }

    bool empty()
    {
        if (s1.empty() && s2.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.pop() << endl;

    q.push(5);

    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
}

//Order = constant
//Using 1 stack and 1 recursive function
#include "bits./stdc++.h"
using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (s1.empty())
        {
            cout << "Queue is empty....\n";
            return -1;
        }

        int x = s1.top();
        s1.pop();

        if (s1.empty())
        {
            return x;
        }

        int item = pop(); //Recursive call
        s1.push(x);
        return item;
    }

    bool empty()
    {
        if (s1.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.pop() << endl;

    q.push(5);

    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
}