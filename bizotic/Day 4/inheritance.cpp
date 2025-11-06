// inheritance 
// inheritance in oops concept that have one class to inherigte the properties of another class
// 1. derived class is called as child class or sub class
// 2. base class is called as parent class or super class
// 1. reusabilithy 
// extending the possibility 

// #include<iostream>
// using namespace std;

// class vehicle{
//     public:
//      int data = 10;
//     void move(){
//         cout<<"vehicle is moving"<<endl;

//     }
// };
// // child class
// class Rollroyce : public vehicle{
//     public:
//     void horn(){
//         cout<<"Rollroyce horn is very loud"<<endl;
//     }
// };

// int main(){
//     Rollroyce r;
//     r.move();
//     r.horn();
//     return 0;
// };



// multilevel inheritance
// #include<iostream>
// using namespace std;
// class grandfather{
//     public:
//     void skills(){
//         cout<<"motivational skills"<<endl;
//     }
// };
// class father : public grandfather{
//     public:
//     void skills(){
//         cout<<"money making"<<endl;
//     }
// };
// class son : public father{
//     public:
//     void skills(){
//         cout<<"eating, sleeping, scrolling , gaming "<<endl;
//     }
// };
// class daughter : public father,  public grandfather{
//     public:
//     void skills(){
//         cout<<"dancing, singing "<<endl;
//     }
// };
// int main(){
//     son s;
//     s.skills();
//     s.father::skills();
//     s.grandfather::skills();
//     return 0;

// }



// heirchical inheritance
// #include<iostream>
// using namespace std;

// class vehicle{
//     public:
//     void start(){
//         cout<<"engine starts"<<endl;

//     }
// };
// class engine{
//     public:
//     void start(){
//         cout<<"engine starts"<<endl;
    
//     }
// };
// class car : public vehicle, public engine{
//     public:
//     void horn(){
//         cout<<"car horn is loud"<<endl;
//     }           
// };
// int main(){
//     car c;
//     c.vehicle::start();
//     c.engine::start();
//     c.horn();
//     return 0;
// }



// hybrid inheritance 
// #include<iostream>
// using namespace std;

// class vehicle{
//     public:
//     void move(){
//         cout<<"vehicle is moving"<<endl;
//     }
// };
// class engine{
//     public:
//     void move(){
//         cout<<"engine is starting"<<endl;
//     }
// };
// class car : public vehicle{
//     public:
//     void ABC(){
//         cout<<"car is moving"<<endl;
//     }
// };
// class bike : public vehicle{
//     public:
//     void XYZ(){
//         cout<<"bike is moving"<<endl;
//     }
// };
// int main(){
//     car c;
//     bike b;
//     c.move();
//     c.ABC();
//     b.move();
//     b.XYZ();
//     return 0;
// }



// polymorphism 
// 1. compile time polymorphism : 
// 2. run time polymorphism : 

// compile time polymorphism example
// function overloading :
// operator overloading :

// #include<iostream>
// using namespace std;

// class math{
//     public:
//     int add(int a, int b){
//         return a + b;
//     }
//     int add(int a, int b, int c){
//         return a + b + c;
//     }
//     double add(double a, double b){
//         return a + b;
//     }
// };
// int main(){
//     math m;
//     cout<<"sum:"<<m.add(2, 3)<<endl;
//     cout<<"sum:"<<m.add(2, 3, 4)<<endl;
//     cout<<"sum:"<<m.add(2.5, 3.5)<<endl;

// }

// runtime polymorphism
// the block of code executed after runtime means after the exe file

// 1. function overriding

// #include<iostream>
// using namespace std;

// class animal{
//     public:
//     virtual void sound(){
//         cout<<"animal makes sound"<<endl;
//     }   
// };
// class dog : public animal{
//     public:
//     void sound() override{
//         cout<<"dog barks"<<endl;
//     }
// };
// class cat : public animal{
//     public:
//     void sound() override{
//         cout<<"cat meows"<<endl;
//     }
// };
// int main(){
//     animal *a;
//     dog d;
//     a = &d;
//     a->sound();
//     d.sound();
// };



// abstraction 
// 1. to achive data hiding
// it can be achived in two ways
// 1.using abstract class
// 2. using abstract specifiers(private, protected)

// 1. abstract class
// an abstract class is a class thqt cnnot be given instance 
// achieved using virtual keyword

#include<iostream>
using namespace std;

class shape{
    public:
    // pure virtual function
    virtual void draw() = 0;
    void areamessage(){
        cout<<"calculating the area"<<endl;
    }

};
class circle : public shape{
    public:
    void draw() override{
        cout<<"drawing circle"<<endl;
    }
};

int main(){
    shape *shape = new circle();
    
    shape->draw();
    
}
