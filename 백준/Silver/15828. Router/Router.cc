#include <queue>
#include <iostream>

using namespace std;

int main(void)
{
    queue<int> q;
    int n;
    cin >> n;
    int q_val = 0;
    // q size는 n
    while(1)
    {
        cin >> q_val;
        if(q_val == 0)
        {
            if(!q.empty()) q.pop();
        } else if(q_val == -1){
            break;
        } else if(q_val > 0 && (q.size() < n)){
            q.push(q_val);
        }
    }
    //q.pop();
    if(q.empty()) cout << "empty";
    else {
        while(!q.empty()){
            cout << q.front() << " ";
            q.pop();
        }
    }
}