
#include<bits/stdc++.h>
using namespace std;

class stackArray
{
    int*data;
    int nextIndex;
    int capacity;
    public:
    stackArray(int totalSize)
    {
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }
    int size1()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        if(nextIndex)
            return false;
        return true;
    }
    void push(int element)
    {
        if(nextIndex==capacity)
        {
           int * newData = new int[2*capacity];
           for(int i=0;i<capacity;i++)
           {
               newData[i] = data[i];
           }
           capacity *=2;
           delete [] data;
           data = newData;
                    }
        data[nextIndex] = element;
        nextIndex++;
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Empty Stack"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top()
    {
        if(isEmpty())
        {
            cout<<"Empty Stack no top"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};
main()
{
    stackArray s(4);
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.size1()<<endl;
    s.push(50);
    cout<<s.top()<<endl;
    cout<<s.size1()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size1()<<endl;
}
