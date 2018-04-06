#include<iostream>
#include "polygon.h"
using namespace std;
int main()
{
  polygon d1;
  d1.add(*(new vertices(3,5)));
  d1.add(*(new vertices(5,7)));
  d1.add(*(new vertices(4,1)));
  d1.add(*(new vertices(1,2)));
  d1.add(*(new vertices(9,5)));
  d1.add(*(new vertices(7,6)));
  d1.add(*(new vertices(8,0)));
  d1.display();
  cout << endl <<"Index :"<<d1.search(1)<<endl;
  d1.Delete(9);
  d1.display();
  system("pause");

};
