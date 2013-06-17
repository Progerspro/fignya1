#include <iostream>
#include <string.h>
using namespace std;
struct person
{
	char* name;
	int age;
	float weight;
};

void output(person p1)
{
  cout << "Welcome " << p1.name <<"   "<< p1.age <<"   "<< p1.weight  << endl;
}

int main()
{
	person p_to = {"Edward",16,64.9};
	output(p_to);
  cin.get();
  return 0;
}
