#include <exception>

using namespace std;

class intArray
{
    private:
        int arr_size{};   //размер
        int *arr_data{};    //данные
    public:
        intArray(int size);
        ~intArray();

        int getSize() const;
        int getElem(int index) const;
        void setElem(int index, int value);

};

class bad_range : public exception
{
    public:
        virtual const char* what() const noexcept override
        {
            return "ERROR: Index is out of range!!";
        } 
};

class bad_lenght : public exception
{
    public:
        virtual const char* what() const noexcept override
        {
            return "ERROR: Provided lenght is invalid!!";
        }
};
