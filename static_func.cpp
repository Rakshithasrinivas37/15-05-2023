#include <iostream>

using namespace std;

class static_mem
{
    public:
    static int num;
    int value;
    
    static void display();
};

int static_mem::num = 0; 

void static_mem::display()
{
    cout << "Num: " << num << endl;
    //cout << "value: " << value << endl; -> error. Static functions can access static members
}

int main()
{
    static_mem s1;
    s1.num = 10;
    s1.display();
    
    return 0;
}
