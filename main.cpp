#include <iostream>
#include <string>
#include <valarray>
#include "val.h"
using namespace std;

int main ()
{
    val Stack;
    Stack.push ('a');
    Stack.push ('b');
    Stack.push ('c');
    Stack.push ('r');

    cout << Stack.getSize() <<endl;

    cout << Stack.pop() << " ";
    cout << Stack.pop() << " ";
    cout << Stack.pop() << " ";
    cout << Stack.pop() << " ";
    cout<<Stack.isEmpty()<<endl;
    Stack.Clear();
    cout<<Stack.isEmpty()<<endl;


}
