#ifndef ILISTABLE_H
#define ILISTABLE_H

class IListable{
    public:
    ~IListable();
    virtual void list() const = 0;
};

#endif