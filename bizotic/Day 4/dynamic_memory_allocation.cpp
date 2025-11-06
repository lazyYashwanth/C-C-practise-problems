// dynamic memory allocation in c++
// 1. new: for single variable, new[]: for muptiple varible
// 2. delete, delete[]  


// new is a keyword which allocates the memory for single variable

// #include<iostream>
// using namespace std;

// int main(){
//     int *p = new int; // dynamically allocating memory in heap
//     *p = 100;
//     cout<<"value stored in p:"<<*p<<endl;
//     delete p; // deallocating the memory
//     return 0;
// };

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the size of the array:";
//     cin>>n;
//     int *arr = new int[n]; // dynamically allocating memory for array
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"the array elements are:";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     delete[] arr; // deallocating the memory
//     return 0;

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the size of the array:";
//     cin>>n;
//     int*arr = new int[n];
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
        
//     }
//     int sum = 0;
    
//     for(int i = 0; i < n; i++){
        
//         sum+=arr[i];
//     }
//     cout<<"\n sum of elements:"<<sum;

//     delete[] arr;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int threshold = 75;
//     class student{
//         public:
//         int ID;
//         string Name;
//         float Attendance;
//         bool isbelowthreshold(float threshold) const {
//             return Attendance < threshold;
//         }
//     };

//     int n;
//     cout<<"enter the number of students:";
//     cin>>n;

//     student *s = new student[n];
//     for(int i = 0; i < n; i++){
//         cout<<"ID:";
//         cin>>s[i].ID;
//         cout<<"Name:";
//         cin>>s[i].Name;
//         cout<<"Attendance:";
//         cin>>s[i].Attendance;
//     }
//     for(int i = 0; i < n; i++){
//         cout<<"\n ID:"<<s[i].ID<<" Name:"<<s[i].Name<<" Attendance:"<<s[i].Attendance;
//     }
//     delete[] s;
// };

