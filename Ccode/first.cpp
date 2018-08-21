#include <iostream>
using namespace std;
void recou(int times);
int main ()
{
    int tiem;
    cout<<"Please enter any value."<<endl;
    cin>>tiem;
    recou(tiem);
    return 0;

}
void recou(int times)
{
   if(times>0)
        {
            cout<<"this"<<endl;
            recou(times-1);
        }

}
