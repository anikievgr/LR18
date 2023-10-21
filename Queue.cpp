//
// Created by anikievgr on 21.10.23.
//

#include "Queue.h"

Queue::Queue(int maxSize) {
    size = maxSize;
}

void Queue::addElement(string item) {
    if (!checNumberOfElementsCreated()){
        throw "Переполнение очереди";
    }
    if (pNext == nullptr){ //создаем совершенно новый элемент
        Element *e = new Element;
        e->pointer = pNext;
        e->data = item;
        pNext = reinterpret_cast<int *>(e);
        firstElement = pNext;// записываем самый первый элемент списка
    }
    else{ //создаем элемент после какого-то элемента
        Element *previousElement = reinterpret_cast<Element *>(pNext);
        Element *e = new Element;
        e->pointer = nullptr;
        e->data = item;
        pNext = reinterpret_cast<int *>(e);
        previousElement->pointer = pNext; // в предыдущем элементе изменяем ссылку с NULL на ссылку этого элемента
    }
    amountOfElements++;
}

void Queue::delFirstElement() {
    Element *e = reinterpret_cast<Element *>(firstElement);;//получаем элемент для его удаления
    if (!isNull(e->pointer)){
        throw "Вы больше не можете удалить";
    }
    firstElement = e->pointer;
    delete e;
}

bool Queue::checNumberOfElementsCreated() {
    if (amountOfElements >= size){
        return false;
    }
    return true;
}

bool Queue::isNull(int *link) {
    if (link == nullptr){
        return false;
    }
    return true;
}

void Queue::foreachElement() {
    int *data = firstElement;
    while (data != nullptr){
        Element *e = reinterpret_cast<Element *>(data);
        cout<< e->pointer<< "\t" << e->data<<"\t"<<e<<endl;
        data = e->pointer;
    }
}

