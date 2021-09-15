#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int *p = new int[5] {1,2,3,4,5};
    for (int *q = p ; q != p + n ; q++){
        cout << *q << endl;
    }

    delete [] p;

    cout << *p << endl;

    return 0;
}
