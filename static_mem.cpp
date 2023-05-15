#include <iostream>

using namespace std;

class static_mem
{
    public:
    static int num;
    
    static_mem()
    {
        num = num + 1;
    }
};

int static_mem::num = 0;

int main()
{
    static_mem s1;
    cout << "s1 num: " << s1.num << endl;
    static_mem s2;
    cout << "s2 num: " << s2.num << endl;
    return 0;
}
