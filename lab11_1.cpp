#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;
int main(){
    string grade[9]={"A","B+","B","C+","C","D+","D","F","W"};
    srand(time(0));
    int n=rand()%9;
    cout << "Press Enter 3 times to reveal your future." << endl;
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << grade[n] << " in this 261102."  ;
    
    
    
}