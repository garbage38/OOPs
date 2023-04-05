#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class Animal{
  //************** Access modifier************************
private:
 string color;
 public:
//************ state or Properties*************************
  int weight;
  int age;
  string name;

  //***********behaviour or function************************
  void eat(){
  cout<<"Eating"<<endl;
  }
  void sleep(){
    cout<<"sleeping"<<endl;
  }
//*************** CONSTRUCTOR ******************************

//default Constructor
Animal(){
  this->age =0;
  this->weight =0;
  this->name ="";
}
//Parameterized constructor
Animal(int age){
  this->age=age;
  cout<<"Parameterized constructor is called"<<endl;
}
//Copy constructor
Animal(Animal &obj){ //Pass by refference
  this->age=obj.age;
  this->weight=obj.weight;
  this->name=obj.name;
  cout<<"I am inside the copy constructor"<<endl;
}
//*************Destructor*****************************
  ~Animal(){
    cout<<"I am inside the Destructor"<<endl;
//     I am inside the Destructor
// I am inside the Destructor :-> Two time calls due to dog and cat two object ..
}

  //*********For access private data type line no 7-8************

  string getColor(){
    return color;
  }
  void setColor(string color){
    //                    |
    this->color =      color;
    //string color line 8
  }
      
};

  int main()
{
  //*****************static allocation***************************
 Animal dog; 
 dog.weight=12;
 dog.age=5;
 dog.name="siro";

 cout<<"Name of the dog is :"<<dog.name<<endl;
 cout<<"age of the dog is :"<<dog.age<<endl;
 cout<<"weight of the dog is :"<<dog.weight<<endl;
 dog.eat();

//  how to Access private data in outside of the class?
dog.setColor("brown");
cout<<"Color of the dog is :"<<dog.getColor()<<endl;

//***************Dynamic Memoey allocation*********************
// Animal *cat= new Animal; 

//*****Parameterized constructor call*****
Animal *cat= new Animal(100); 
//******Copy construtor call***
// Animal lion = dog;
// cat.weight=6; //Here code is not working because cat give a pointer which store the address of the object  so we have to derefferncing
// cat.age=7;

(*cat).weight=6;
(*cat).age=7;

//Or using arrow operator
cat->weight=6;
cat->age =7; 

cat->eat();
cout<<"Weight of the cat is "<<cat->weight<<endl;
cout<<"Age of the cat is "<<cat->age<<endl;


//**********For Dynamic destructor call we should call manually**********
 delete cat;
  return 0;
}