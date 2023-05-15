#include <iostream>

using namespace std;

class array_obj
{
    public:
    int value;
};

int main()
{
    array_obj obj1, obj2;
    array_obj arr[] = {obj1, obj2};
    for(int i = 0;i < sizeof(arr)/sizeof(array_obj); i++)
    {
        arr[i].value = i;
        cout << "arr.value = " << arr[i].value << endl;
    }
    
    array_obj *ptr = new array_obj;
    ptr->value = 25;
    cout << "ptr->value: " << ptr->value << endl;
    

    return 0;
}
