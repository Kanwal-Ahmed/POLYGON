#include<iostream>
#include<string>
#include "vertices.h"
using namespace std;
int i;
class polygon
{
  public:
  polygon()  
  {
    this->Total=0;
    this->index=0;
    this->size=5;
    list = new vertices [5];
  };

  polygon(float total , vertices *list)   
  {
    this->Total=total;
    this->list=list;
  };
  polygon(polygon & clone)  
  {
    this->Total=clone.Total;
    this->index=clone.index;
    this->list=clone.list;
    this->size=clone.size;
  };
  void setTotalcost(float Total)  
  {
    this->Total=Total;
  };
  void setindex(int index)   
  {
    this->index=index;
  };
  void setlist(vertices *list)   
  {
    this->list=list;
  };
  float gettotal()  
  {
    return this->Total;
  };
  int getindex() 
  {
    return this->index;
  };

  void add(vertices &d) 
  {
    if(index < size )
    {
      list[index] = d;
      index++;
    }
    else
    {
      incsize(d);
    }
    this->Total += d.getx();
  };
  void display()  
  {
    
    cout<< "        MY VERTICES COLLECTION    "<<endl;
    for(i=0;i<index;i++)
    {
      cout << this->list[i] <<endl;
    }
    cout<<"Total Point: " <<this->Total<<endl;
  };
int search(int y)  
  {
    vertices d1;
    int temp=0;
    for(i = 1 ; i <= index ; i++)
    {
       d1 = this->list[i-1];
      if(y == d1.gety())
      {
        temp=i;
        break;
      }
    }
      return temp;
  };
  /*int search(int x) 
  {
    vertices d1;
    int temp=0;
    for(i = 1 ; i <= index ; i++)
    {
       d1 = this->list[i];
      if(x == d1.getx())
      {
        temp=i;
        break;
      }
    }
      return temp;
  };*/
void Delete(int x)  
{
  int temp = search(x) ;
  if(temp > 0)
  { 
    for(i=temp-1 ; i < index-1 ; i++)
    {
      this->list[i] = this->list[i+1]; 
    }
    index--;
  }
  else
  {
    cout<<"Not found!!"<<endl;
  }
};
  
  protected:    
  void incsize(vertices &d)  
  {
    size = size * 2;
    vertices *newlist = new vertices[size];
    for(i=0 ; i < (size/2) ; i++)
    {
      newlist[i] = list[i]  ;
    }
    delete [] list;
    list = newlist ;
    list[index] = d;
    index++;
  };

  private:
  float Total;
  vertices *list;
  int size;
  int index;
};
