#include <iostream>
#include "intArray.h"

using namespace std;

int main()
{
    try
    {
        intArray array(0);

        cout <<"Size of array: " << array.getSize() << endl;

        //добавляем элементы в массив

        array.setElem(0, 1); 
        array.setElem(1, 2);
        array.setElem(2, 3);
        array.setElem(3, 4);
        array.setElem(4, 5);
        array.setElem(5, 6);

        cout << "Element at index 3: " << array.getElem(3) << endl;
        cout << "Element at index 6: " << array.getElem(6) << endl;
        cout << "Element at index -2: " << array.getElem(-2) << endl;

    }
    catch (const bad_lenght& e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }
    catch (const bad_range& e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }
}