//Algorithm: Find Vector Sum
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(){
    vector<int> num ={3,2,1,5,4};
    int sum;

    //print vector elements
    cout<<"Vector Element: ";
    for(int i: num){
        cout<<i<<", ";
    }
    cout<<endl;

    //find sum of all num elements
    sum = accumulate(num.begin(),num.end(),0);

    //print sum
    cout<<"Sum of vector element= "<<sum;

    return 0;
}