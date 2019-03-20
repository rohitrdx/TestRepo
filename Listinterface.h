//
// Created by rdx321 on 3/20/2019.
//

#ifndef NEWPROJECT_LISTINTERFACE_H
#define NEWPROJECT_LISTINTERFACE_H

template <class ItemType>
class Interface
{
public:
    virtual bool isEmpty () const = 0;
    virtual bool getLength (const ItemType& newEntry) = 0;
    virtual bool insert (const ItemType& newEntry) = 0;

}

#endif //NEWPROJECT_LISTINTERFACE_H
