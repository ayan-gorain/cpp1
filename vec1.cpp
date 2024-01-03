#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>v;
    cout<<"Size"<<" "<<v.size()<<endl;
    cout<<"Capacity"<<" "<<v.capacity();
    v.push_back(1);
    cout<<endl;
    cout<<"Size"<<" "<<v.size()<<endl;
    cout<<"Capacity"<<" "<<v.capacity();
 v.push_back(2);
    cout<<endl;
    cout<<"Size"<<" "<<v.size()<<endl;
    cout<<"Capacity"<<" "<<v.capacity();
 v.push_back(3);
    cout<<endl;
    cout<<"Size"<<" "<<v.size()<<endl;
    cout<<"Capacity"<<" "<<v.capacity();
    v.resize(5);
    cout<<endl;
    cout<<"Size"<<" "<<v.size()<<endl;
    cout<<"Capacity"<<" "<<v.capacity();




  return 0;
}