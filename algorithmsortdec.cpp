//Algorithm : sort (decending order)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector <int> num ={3,2,5,1,4};

    cout<<"Unsorted vector: ";

    //print vector element
    for(int i: num){
        cout<<i<<", ";
    }
    //sort vector elements in decending order
    sort(num.begin(),num.end(),greater<int>());

    cout<<"\nSorted Vector: ";

    for(int i : num){
        cout<<i<<", ";
    }
    return 0;
}