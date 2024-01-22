#include <iostream>
using namespace std;

class fatherproperty 
{    private:
    string propvalue ="1,000,000,000kyats";
    public:
    void father()
    {
        cout << "father_property is "<< this ->propvalue<< endl;
    }
};
class motherrproperty
{
    protected:
    string propvalue ="1,000,000,000kyats";
public:
void mother ()
{
  cout << "mother_property is "<< this -> propvalue<< endl;
}
};
class son : public motherrproperty
{   public:
    void  getproperty (){
     cout << "son property is "<< endl;
    getline(cin,propvalue);//Please enter money for your son
    }
};
int main (){
   son s1;
   s1.getproperty();
   fatherproperty fp;
   fp.father();
   motherrproperty mp;
   mp.mother ();
   return 0;
}
