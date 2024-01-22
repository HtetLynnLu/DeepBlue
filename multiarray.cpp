#include <iostream>
using namespace std;

void array(int m[2][3])
{
   cout << m [1][0]<< endl;
}

int main (){
    int point[2][3]={{1,2,3},{4,5,6}};
    array(point);
    return 0;
}