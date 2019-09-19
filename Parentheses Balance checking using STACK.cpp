#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[10]="()()()()";
    stack <char> mystack;
    for(int i=0;str[i];i++)
    {
        if(!mystack.empty()&&mystack.top()=='('&&str[i]==')')
            mystack.pop();
        else
            mystack.push(str[i]);
    }
    if(mystack.empty())
        cout<<str<<" IS Blancesed \n";
    else
                cout<<str<<" IS NOT Blancesed \n";

    return 0;

}
