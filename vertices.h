#include<iostream>
using namespace std;
class vertices
{
public:
vertices()     
{
  int x = 0;
  int y = 0;
};
vertices(int x , int y)
{
  this->x = x;
  this->y = y;
};
vertices (vertices & clone)
{
  this->x=clone.x;
  this->y=clone.y;
};
void set(int x, int y)  
{
  this->x = x;
  this->y = y;
};
int getx()  
{
  return this->x;
};
int gety()
{
  return this->y;
};
void display()
{
  cout<<"X :"<< this->x << " " << "Y :" << this->y << endl;

};

private:
int x, y;
};

ostream& operator <<(ostream& o , vertices& S) 
{
  return o<< "Vertices " << "X: " << S.getx() << " " << "Y: " << S.gety() << endl;
};