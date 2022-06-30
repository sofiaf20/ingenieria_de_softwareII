#include <iostream>
#include "IListable.h"

class IComposableOfListable{
    public:
    virtual void add(IListable* component);
    virtual void remove(IListable* component);
};