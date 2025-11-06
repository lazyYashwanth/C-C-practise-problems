// standard template library

//1. stl containers

//1. sequencial containers
// vector, list, deque, array, forward_list

//2. associative containers
// set, multiset, map, multimap

//3. unordered associative containers
// unordered_set, unordered_multiset, unordered_map, unordered_multimap

// 2. iterators in stl
// begin, end, rbegin, rend, cbegin, cend, crbegin, crend

// 3. algorithms in stl
// binary_search(searching), sorting algorithms

// 1. vector
// it is a sequencial stl container
// it is a dynamic array and it can resize itself automatically when an element is inserted or deleted
// its similar to array but with dynamic size

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v = {1,2,4,5,6,7};
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3); 
//     v.push_back(4);
//     v.push_back(5);
//     v.pop_back();
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// };

// 2. list
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int> l;
//     l.push_back(10);
//     l.push_front(20);
//     for(int x : l){
//         cout<<x<<" ";
//     }
//     l.pop_back(10);
//     cout<<endl;
//     for(int x : l){
//         cout<<x<<" ";
//     }
//     return 0;
// };


// 3.set
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
// set<int> s;
// s.insert(10);
// s.insert(20);
// s.insert(20);
//  for(int i : s){
//     cout<<i<<" ";
// }
// };

// 4. map
// it stores the element in key value pairs where key is unique
// values can be duplicated
// auto is used to avoid the long declaration of iterator and it automatically deduces the type of iterator.
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int, string> m;
//     m[1] = "apple";
//     m[55] = "Yash";
//     for(auto i : m){
//         cout<<i.first<<"-->"<<i.second<<endl;
//     }


// };
 // unordered containers
 // unordered set
// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int main(){
//     unordered_set<int> s;
//     s.insert(10);
//     s.insert(20);
//     s.insert(20);
//     for(int i : s){
//         cout<<i<<" ";
//     }
//     return 0;
// }

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {5, 2, 8, 1, 3, 4};
    cout<<"orginal vector:";
    for(int num : nums){
        cout<<num<<" ";
    }
    // sorting the vector
    sort(nums.begin(), nums.end());
    cout<<"\nsorted vector:";
    for(int num : nums){
        cout<<num<<" ";
    }
    // reversing the vector
    reverse(nums.begin(), nums.end());
    cout<<"\nreversed vector:";
    for(int num : nums){
        cout<<num<<" ";
    }
//  binary search
    int key = 4;
    if(find(nums.begin(), nums.end(), key)!= nums.end()){
        cout<<"\n element found";
    }
    if(binary_search(nums.begin(), nums.end(), key)){
        cout<<"\n element found";
    }
    return 0;
};
// home work
// 1. counting
// 2. 