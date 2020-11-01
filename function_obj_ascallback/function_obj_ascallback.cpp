// function_obj_ascallback.cpp : https://subscription.packtpub.com/video/programming/9781800564145/p9/video9_6/
//function-objects-as-callbacks
#include <iostream>
#include <algorithm>
#include <array>
bool Great3(int x);
bool Less3(int x);
void Print(int* ptr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << ptr[i] << ' ';
        // std::cout <<*(ptr+i)<<;;;
    }
}

template<typename T, int size>

void Print(T(&ref)[size]) {

    for (int i = 0; i < size; ++i)
    {
        std::cout << ref[i] << ' ';
        // std::cout <<*(ptr+i)<<;;;
    }
}

template<typename T, int size>

T* Begin(T (&ref)[size]) 
    
{
        return ref;
}

template<typename T, int size>

T* End(T (&ref)[size])
{
    return (ref + size);
}
template <typename T, typename ElemType>
T Find_If(T beg, T end, bool (*pfn)(ElemType elem)) {
    while (beg != end)
    {
        if (pfn(*beg))
            break;
        ++beg;
    }
    return  beg;
}
 
bool Less3(int x)
{
    return x < 3;
}

bool Great3(int x)
{
    return x > 3;
}
int main()
{
    int arr[] = { 1,2,3,4,5 };
    Print(arr);

    int elem{ 3 };
    auto found = Find_If(Begin(arr), End(arr), Less3);
    if (found !=End(arr)) {
        std::cout << "!!! found !\n";
        std::cout << *found << std::endl;
    }
    else {
        std::cout << "Not found !\n";
    }
    system("Pause");
}
