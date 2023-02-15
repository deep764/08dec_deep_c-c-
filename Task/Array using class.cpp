#include<iostream>
using namespace std;
class Demo
{
	int id[10];
    
public:
    int getdata()
	
    {
        cout<<"Enter the value of id:";
        cin>>id[10];
    }
    void showdata()
    
    {
        cout<<"Value of id:"<<id[10];
    } 
};
int main()
{
    Demo d1;
    d1.getdata();
    d1.showdata();
}
