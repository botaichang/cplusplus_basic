#include "../include/CArray.hpp"

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

CArray::CArray(int len)
{
    size = len;
    if (len == 0) 
       ptr = NULL; 
    else 
       ptr = new int[len];
}

CArray::~CArray()
{
   if (ptr) delete [] ptr;
}

CArray::CArray(CArray &c)
{
 if(!c.ptr)
 { 
    size = 0; 
    ptr = NULL ;
    return ;
 }
 else
 {
    size = c.size; 
    ptr = new int[size];
    memcpy(ptr,c.ptr,sizeof(int)*size);

 }
}
int CArray::length()
{
    return size;
}

CArray CArray::operator=(const CArray &c )
{
  if(ptr == c.ptr)
     return *this;
  if(c.ptr == NULL)
  {
    if (ptr)  delete[]ptr; 
    size = 0; 
    ptr = NULL; 
    return *this;
  }
  if (size < c.size) 
  {
    if (ptr)
      delete []ptr;
    ptr = new int[c.size];
  }
  memcpy(ptr,c.ptr,sizeof(int)*c.size);
  size = c.size; 
  return *this;
}

void  CArray::push_back(int v)
{
  if (ptr)
  {
    int *tmpPtr = new int[size + 1];
    memcpy(tmpPtr, ptr, sizeof(int)*size);
    delete []ptr; 
    ptr = tmpPtr; 
  }
  else 
    ptr = new int[1];
  ptr[size++] = v; 
}


int &  CArray::operator[](int i)
{
  return ptr[i];
}
