// NAME - SHLOKA PATEL 
// PRN - 23070123120 
// EXPERIMENT - 12(C) 

#include<iostream>
using namespace std;
int count=0;
class destruct{
    public:
    destruct()
    {
        count++;
        cout<<"Number of objects created: "<<count<<"\n";
    }
    ~destruct()
    {
        count--;
        cout<<"Number of objects destroyed: "<<count<<"\n";
    }
};
int main()
{
    destruct aa,bb,cc;
    {
        destruct dd;
    }
    return 0;
} 

// Output 
// Number of objects created: 1
// Number of objects created: 2
// Number of objects created: 3
// Number of objects created: 4
// Number of objects destroyed: 3
// Number of objects destroyed: 2
// Number of objects destroyed: 1
// Number of objects destroyed: 0 
