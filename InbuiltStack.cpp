#include <iostream>
#include<stack>
using namespace std;
main()
{
    stack <int> s1;
    cout<<s1.empty()<<endl;
    s1.push(10);
    s1.push(15);
    s1.push(69);
    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;

}

