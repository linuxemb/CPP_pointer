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
        return ref;  // ref itself will decay to a  pointer
}

template<typename T, int size>

T* End(T (&ref)[size])
{
    return (ref + size);  // as ref itself will decay to a pointer
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
    int arr1[5];
    int arr2[5]{};
    
    int arr[] = { 1,2,3,4,5 };
    int arr3[] = { 13,24,4,1,10 };
    //Print(arr);
    std::sort(std::begin(arr3), std::end(arr3));

    arr[0] = 100;
    int* p = arr;
   // *(p + 6) = 800;
    p[2] = 700;

   int* psort = arr3;
    int* pend = arr3 + 5;
    std::sort(psort, pend);
    Print(arr3);
    std::cout << std::endl;
    //OR
    int* pbegin = Begin(arr3);
    int* pending = End(arr3);
  //  std::sort(Begin(arr3,End(arr3)));
    std::sort(pbegin, pend);
    std::sort(psort, pending);
    Print(arr3);
    std::cout << std::endl;
    Print(arr);

    // OR using std begin
    int* pstd = std::begin(arr3);
    int* endstd = std::end(arr3);
    std::sort(std::begin(arr3), std::end(arr3));

  //  Print(arr, sizeof(arr1) / sizeof(int));
    /*
    int elem{ 3 };
    auto found = Find_If(Begin(arr), End(arr), Less3);
    if (found !=End(arr)) {
        std::cout << "!!! found !\n";
        std::cout << *found << std::endl;
    }
    else {
        std::cout << "Not found !\n";
    }
    */
    system("Pause");
    
}
