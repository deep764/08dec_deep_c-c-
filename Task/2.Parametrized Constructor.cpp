#include<iostream>
using namespace std; 
class Parametrized
{
	public:
		int x;
		Parametrized(int no)
		{
		   cout<<"value of number is:"<<no;
		}	
};
int main()
{
    Parametrized per(70);
}
