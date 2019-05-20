#include <iostream>
#include <string>

using namespace std;

int main() {
int fNum;
int sNum;
cout<<"enter first number"<<endl;
cin>>fNum;
cout<<"enter second number"<<endl;
cin>>sNum;
if (sNum < fNum) {
    cout<<"your first number was greater than the second"<<endl;
}
else {
    cout<<"your second number was greater than the first"<<endl;
} 

        return 0;
}
