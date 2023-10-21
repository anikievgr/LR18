//
// Created by anikievgr on 21.10.23.
//

#ifndef LR18_QUEUE_H
#define LR18_QUEUE_H
#include "include.h"

class Queue {
public:

    /**
    * @param pNext int указатель на следующий элемент в очереди для дальнейшего сохранения
    */
    int *pNext = nullptr;

    /**
    * @param firstElement int указатель на первый элемент списка
    */
    int *firstElement = nullptr;

    /**
    * @param size int размер очереди
    */
    int size;

    /**
    * @param amountOfElements int количество созданных эелементов
    */
    int amountOfElements = 0;


    /**
    * Инициализация
    * @param maxSize int количество элементов в очереди
    * @return void
    */
    Queue(int maxSize);

    /**
    * Создание нового элемента в конец
    * @param item string данные
    * @return void
    */
    void addElement(string item);

    /**
    * Удаляет первый элемент
    * @return void
    */
    void delFirstElement();

    /**
    * Проверяет не хотим ли мы добавить больше элементов в очередь, чем ее размер
    * @return bool
    */
    bool checNumberOfElementsCreated();

    /**
    * Проверяет, не хотим ли мы удалить последний элемент
    * @param link int указатель на элемент
    * @return bool
    */
    bool isNull(int *link);

    /**
    * Переберает очередь с первого элемента
    * @return void
    */
    void foreachElement();

private:
    class Element{
    public:
        /**
        * @param pointer int указатель на следующий элемент
        */
        int *pointer = nullptr;

        /**
        * @param data string содержимое
        */
        string data;
    };
};


#endif //LR18_QUEUE_H
