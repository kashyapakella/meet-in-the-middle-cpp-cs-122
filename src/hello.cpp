#include <string>

#include "hello.hpp"

DyArray::DyArray()
{
   cap = 10;
   length = 0;
   data = new int[cap];
}

DyArray::~DyArray()
{
   delete[] data;
}

void DyArray::add(int v)
{

   if (length == cap)
   {
      int newCap = cap * 2;
      int *newData = new int[newCap];

      for (int i = 0; i < length; i++)
      {
         newData[i] = data[i];
      }

      delete[] data;
      data = newData;
      cap = newCap;
   }

   data[length] = v;
   length += 1;
}

int DyArray::get(int i)
{

   return data[i];
}

int DyArray::size()
{
   return length;
}