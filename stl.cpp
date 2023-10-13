#include<bits/stdc++.h>
using namespace std;
void Pair(){
    pair<int,int> p ={1,3};
    //the data type can be anything in the pair
    pair<string,string> q = {"hi","hello"};

    //to access the elements in the pair
    cout << p.first << " "<< p.second;

    //nested pair
    pair<int ,pair<int ,int>>w = {1,{2,3}};
    cout << w.second.second << w.second.first;//2  3

    pair<int ,int> arr[] = { {1,2} ,{2,3}};
    cout<< arr[1].second;//3-----------^
}

void Vector(){

    // in backend it is a singly linked list
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);//similar to pushback but faster

    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);//benefits of emplace i.e., shortcut

    vector<int>ve(5,20);// 20 20 20 20 20 ---> already initialised
    vector<int>a(5);//------>garbage value or zeroes will be placed
    //just for the sake of space

    vector<int>v2(ve);//copies the values from ve .. 5 x 20

    //accesing the elements
    cout <<v[0];//----> most basic method

    //**iterators**//
    vector<int>::iterator aa = v.begin();
    //v.begin will be pointing towards the address of the starting element 
    
    //accessing through the address/iterator
    cout << *(aa);//points at the first element
    aa++;
    cout << *(aa);//points at the next elemrnt ; second one
    aa = aa + 2;

    //end() will points at next of the last point of the vector
    //this can be used while we were operating with the range operations
   
    vector<int>::iterator s = v.end();
    //we also have rend()  (vector<int>::iterator it= v.rend();)  would reverse the order and prints the last element 
    //of the list hence we would get the value of the element 
    //before the first element of the list
    

    //beginning element of the reversed array mens the last element directly
    //vector<int>::iterator it= v.rbegin();

    cout<< v.back();//simply the last element of the lsit

    for (vector<int>::iterator it = v.begin(); it != v.end();it++){
        cout<< *(it);
    }
    //shortcut for the above one
    //auto will automatically assign it to datatype depends
    //on the data
    for(auto it = v.begin();it != v.end(); it++){
        cout << *(it);
    }

    for (auto it : v){
        cout << it ;
    }

    //delets the 10 in the array of 5 10 15 20
    v.erase(v.begin()+1);

    //here the elements which were going to delete were first and end - 1 
    v.erase(v.begin() + 2,v.begin() + 4);
    //ex - 10 20 30 40 50
    //----> v.begin()+ 1 , v.begin() + 4;
    //   '10'  -20-  -30-  -40- '50'
    //newly created vector ---> 10 50

   vector<int>x(2,100);// 100 100
   x.insert(x.begin(),300); //300 100 100
   x.insert(x.begin()+1 ,2,10);

   vector<int>copy(2,50);
   v.insert(v.begin(),copy.begin(),copy.end());
   //the above statement will insert the whole copy
   //vector into the v  vector

    cout << v.size();
    //displays the amount of elements present inside the
    //stl

    v.pop_back();
    //removes the last element

    v.swap(x);// renames or exchanges the variables by swapping them

    v.clear();
    //removes the vector completely

    cout<<v.empty();//---> tells true or false based on the data present inside 
    // the vector;

}


void List(){

    // it is a double linked list 
    // we can mainly do operations innthe begginning of the list unlike 
    // vector and it is very less time complicated

    list<int> a;
    a.push_back(2);//2
    a.emplace_back(4);//2 4
    a.push_front(5);// 5 2 4 
    a.emplace_front(6);// 6 5 2 4

    //begin , end , rbegin , rend , clear , insert ,
    // size , swap will be workwed here too just like the vector 

}

void Stack(){
    // it works based on the LIFO --> last in first out

    stack <int> a;
    a.push(5);//5
    a.emplace(4);// 5 4
    a.pop();
    cout << a.top();//displays the topmost element in the stack
    cout << a.size();
    cout << a.empty(); //false or true
    stack<int> b,c;
    b.swap(c);
}

void Queue(){
    //it works on FIFO or LILO
    queue<int>a;
    a.push(1);
    a.emplace();
    a.pop();//deletes the front element
    cout << a.front();//prints the first one which was inserted
    cout<< a.back();// prints the last one which was entered
    
}

void Deque(){
    // deque = double ended queue with making operations on the both sides
     deque<int> a;
    a.push_back(2);
    a.emplace_back(4);
    a.push_front(5); 
    a.emplace_front(6);
    a.emplace_back();
    a.emplace_front();
    a.back();
    a.front();

    // rest of the functions are same as the vector
    // begin , end , rbegin , rend , clear , insert , size , swap

}

void Priority_Queue(){
    //the largest element will stay at the top
    priority_queue<int> a;
    a.push(1);
    a.emplace(2);
    cout << a.top();
    a.pop();

    // size swap empty were same 

    //mininmum heap
    priority_queue<int ,vector<int>,greater<int>> a;
    a.push(3);
    a.emplace(4);
}

void Set(){
    set<int> a;
    //simply just elements were sorted and unique(not repeated)
    a.insert(1);
    a.emplace();
    //begin() end() rbegin() rend() size() empty() and swap() can be used

    auto it = a.find(3);
    auto it = a.find(6);//if not present diaplays a.end()
    a.erase(5);
    
    int cnt = a.count(5); // values can be either 0 or 1 as the values are unique

    auto it1 = a.find(2);
    auto it2 = a.find (5);
    a.erase(it1 ,it2);// removes the elements from 2 to 5

    auto it = a.upper_bound(2);
    auto it = a.lower_bound(5);

}

void Multi_set(){
    //same as set but the multiset is not unique(multiple elements were present)
    multiset<int>a;
    a.insert(1);
    a.erase(1);
     
    int cnt = a.count(1);
    //erase is also same as set and all the values will be deleted with the same values

}

void Unorderd_set(){
    unordered_set<int>a;
    //all same as map but it is unordered and unique values exists
}

void Map(){
    //first one is key and second one is values 
    // key is unique and values cnnnot be 

    map<int ,int> a;
    map<int , string> b;
    a[1] = 2;
    a.insert({2,2});
    a[3] = 10;
    for(auto it : a){
        cout << it.first << it.second;
    }

    cout<< a[1];
    
    auto it = a.find(3);

    //multimap is similar but duplicate keys exists
    //unordered map would have keys in an improper order
}


int main(){
    return 0;
}