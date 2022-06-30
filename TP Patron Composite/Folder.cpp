#include <iostream>
#include "IListable.h"
#include "IComposableOfListable.cpp"

class Folder : public IComposableOfListable{
    public:
    Folder();
    void  list (int depth){
        
    };
    void add(IListable* component){
        for(int i = 0; i < 5 ; i++)
        {
        
        };
    };
    virtual void remove(IListable* component);
};
