// OOPs
// object orienred programming concept
// paradigm based on thr concept of objects
// uses: reusability, modularity, organized,efficient and secure.
// class has data and function 
//

// #include<iostream>
// #include<string>
// using namespace std;

// class student{
//     public:
//     string name;
//     int age;
//     void display(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"age: "<<age<<endl;

//     }
// };
// int main(){
//     student s1;
//     s1.name = "Alice";
//     s1.age = 20;
//     s1.display();

// }

// constructor is a member of class
// the constructor is called when an object of class is created
// constructor has the same name as class name
// constructor cant be static and it cant be const and virtual 
// constructor doesnt have any return type
// used for initialization and referencing 
// the types of constructor is :
// default constructor, parameterized constructor, non parameterized constructor
// #include<iostream>
// #include<string>
// using namespace std;

// class student{
//     string name;
//     int age;
//    public:
//     student(string n, int a){
//         name = n;
//         age = a;
//     }
// };
// int main(){
//     student s1("Alice", 20);
//     return 0;
// }
#include<iostream>
using namespace std;
class demo{
    public:
    demo(){
        cout<<"Constructor called"<<endl;
    }
    ~demo(){
        cout<<"Destructor called"<<endl;

    }
};
int main(){
    cout<<"Inside main function"<<endl;
    demo d1;
    cout<<"End of main function"<<endl;
    return 0;

}

