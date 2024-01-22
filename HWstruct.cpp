#include <iostream>
using namespace std;
 
 struct list 
 { 
    char student_name [50];
    int roll_no=0;
    bool roll_call;};
    int grade(list one){
     cout << "Please enter your info.:" <<endl;
    cout << "Name: ";
    cin.get (one.student_name,50);
    cout << "Roll_No: ";
    cin >>one.roll_no;
    return 0;
    } 

    void Tuto (list one){
        cout << "present or absent?(1 for present ,0 for absent): ";
        cin >> one.roll_call;
        if (one.roll_call=1){
            cout << "Present";
        }
        else {
            cout << "Absent";
        }
    } 


 int main (){
    list one,two,three,four;
   grade (one);
   Tuto (one);
    return 0;
 }

