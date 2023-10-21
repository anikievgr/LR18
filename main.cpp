#include <iostream>
#include "Queue.h"
int main() {
    Queue q(7);

    q.addElement("item1");
    q.addElement("item2");
    q.addElement("item3");
    q.addElement("item3");
    q.addElement("item3");


    q.foreachElement();
cout << "================================="<< endl;
    try {
        q.delFirstElement();
        q.delFirstElement();
    }catch(const char *massage) {
        cout<< massage<< endl;
        q.foreachElement();

    }

    return 0;
}
