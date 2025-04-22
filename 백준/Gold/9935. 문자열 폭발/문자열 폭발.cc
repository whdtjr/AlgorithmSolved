#include <iostream>
#include <string>
#include <list>

using namespace std;
int main(void)
{
    string input_str;
    cin >> input_str;
    string boom_str;
    cin >> boom_str;
    
    string stack_str;
    for(int i = 0; i < input_str.length(); i++)
    {
        stack_str.push_back(input_str[i]);
        if (stack_str.back() == boom_str.back())
        {
            if (stack_str.size() >= boom_str.size())
            {
                if (stack_str.substr(stack_str.size() - boom_str.size(), boom_str.size()) == boom_str)
                {
                    stack_str.erase(stack_str.size() - boom_str.size(), boom_str.size());
                }
            }
        }
    }

    if (stack_str.empty())
    {
        cout << "FRULA";
    }
    else {
        cout << stack_str;
    }

   

}