#include "intArray.h"

intArray::intArray(int size)
{
    if (size <= 0)
    {
        throw bad_lenght();
    }
    arr_data = new int[size];
    arr_size = size;
}

intArray::~intArray()
{
    delete[] arr_data;
}

int intArray::getSize() const
{
    return arr_size;
}

int intArray::getElem(int index) const
{
    if (index < 0 || index >= arr_size)
    {
        throw bad_range();

    }
    return arr_data[index];
}

void intArray::setElem(int index, int value)
{
    if (index < 0 || index >= arr_size)
    {
        throw bad_range();
    }
    arr_data[index] = value;
}