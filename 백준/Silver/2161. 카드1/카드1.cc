#include <deque>
#include <iostream>
#include <vector>

using namespace std;
int main(void)
{
    deque<int> d_q;
    int n;
    cin >> n;
    vector<int> popped_array;
    for(int i = 1;  i <=n; i++)
    {
        d_q.push_back(i);
    }

    while(d_q.size() >= 1)
    {
        popped_array.push_back(d_q.front());
        d_q.pop_front();
        d_q.push_back(d_q.front());
        d_q.pop_front();
    }
    
    for(int i = 0; i < popped_array.size(); i++)
    {
        cout << popped_array[i] << " ";
    }


    return 0;
}