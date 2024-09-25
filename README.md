# Experiment-12
## Aim
To study and implement Constructors and Destructors.

## Software
Visual Studio Code

## Theory
Constructors:

A constructor is a member functoin of a class that has the same name as the class name.

It helps to initialize the object of a class.
It is called whenever an instance of the class is created.
Constructors are mostly declared inthe pulic section of the class though it can be declared in the private section of the class.
Constructors can be overloaed.
They can be defined inside or outside the class declaration.
They are classified into three types - (1) Default Constructor, (2) Parameterized Constructor and (3) Copy Constructor.

Destructors:
A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor.
Destructor has the same name as their class name preceded by a tilde (~) symbol.
It is not possible to define more than one destructor.
Destructor cannot be overloaded.

Destructor neither requires any argument nor returns any value.
It is automatically called when an object goes out of scope.
Destructor release memory space occupied by the objects created by the constructor. Objectsaredestroyedc in the reverse of an object creation.

## Code and Output
(A)
```
// NAME - SAURABH BIHANI
// PRN- 23070123166
// EXPERIMENT - 12(A) 

#include<iostream> 
#include<string>
using namespace std; 
class Data {
    string name;
    int roll_no;
    char dept[50];
    char division;

    public:
    Data() {
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll Number: ";
        cin>>roll_no;
        cout<<"Department: ";
        cin>>dept;
        cout<<"Division: ";
        cin>>division;
    }
    void display() {
        cout<<"\n"<<"DETAILS:"<<"\n"<<name<<"  "<<roll_no<<"  "<<dept<<"  "<<division<<"\n";
    }
};
int main() 
{
    Data d1;
    d1.display();
} 
```
![Output_12A](https://github.com/user-attachments/assets/21462ff2-f4dc-45f9-8cee-22b74a2d9119)

(B)
```
// NAME - SAURABH BIHANI
// PRN - 2307012366 
// EXPERIMENT - 12(B)

#include<iostream>
using namespace std;
class Num
{
    public:
    Num(int c, int d)
    {
        if(c>d)
        {
            cout<<c<<" is greater.";
        }
        else 
        {
            cout<<d<<" is greater.";
        }
    }
};
int main()
{
    Num n1(4,3);
} 
```
![Output_12B](https://github.com/user-attachments/assets/ab0d23ad-ad8d-4c98-a0be-0404fb97df87)

(C)
```
// NAME - SAURABH BIHANI
// PRN - 23070123166
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
```
![Output_12C](https://github.com/user-attachments/assets/3e3b8358-451b-40b2-9c3d-b3fe9a9d65d5)
