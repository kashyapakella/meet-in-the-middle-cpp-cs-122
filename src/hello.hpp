#ifndef HELLO_HPP
#define HELLO_HPP

#include <string>

class DyArray
{
private:
    int *data;
    int cap;
    int length;

public:
    DyArray();
    ~DyArray();
    void add(int v);
    int get(int i);
    int size();
};

#endif