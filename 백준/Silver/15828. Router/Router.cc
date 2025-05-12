#include <queue>
#include <iostream>

using namespace std;

int main(void)
{
    queue<int> q;
    int n;
    cin >> n;
    int q_val = 0;
    while(q_val != -1)
    {
        cin >> q_val;
        if(q_val != 0 && q_val != -1)
        {
            q.push(q_val);
        }
        else if(q_val == 0){
            q.pop();
        }
    }
    int size = q.size();
    for(int i = 0; i < size; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
}