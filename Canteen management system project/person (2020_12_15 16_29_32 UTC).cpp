#include<iostream>
using namespace std;

class Person{
  protected:
      string Name;
      string Id;
      string Phn_num;
      string Address;
  public:
  string setPerson(string n,string id,string Phn_no,string add){

      Name=n;
      Id=id;
      Phn_num=Phn_no;
      Address=add;
    }
    string getPerson(){
      return Name;
      return Id;
      return Phn_num;
      return Address;
    }



};
class Customer : public Person
{  protected:
    string c_n;
    string c_id;
    string c_phn_no;

   public:
    Customer(string c_n,string c_id,string c_phn_no){
       Name=c_n;
       Id=c_id;
       Phn_num=c_phn_no;
    }
     void setName(string c_n){
       Name=c_n;
    }
   string getName(){
     return Name;
   }

    void setId(string c_id){
       Id=c_id;
    }
   string getId(){
     return Id;
   }

    void setPhn_no(string c_phn_no){
    Phn_num=c_phn_no;
    }
   string getPhn_no(){
     return Phn_num;
   }
};
class Teacher : public Person{

   public:
    Teacher(string t_n,string t_id,string t_Phn_nom){
       Name=t_n;
       Id=t_id;
       Phn_num=t_Phn_nom;

       }
     void setName(string t_n){
       Name=t_n;
    }
   string getName(){
     return Name;
   }

    void setId(string t_id){
       Id=t_id;
    }
   string getId(){
     return Id;
   }

    void setPhn_no(string t_Phn_nom){
      Phn_num=t_Phn_nom;

    }
      string getPhn_no(){
     return Phn_num;
   }

   };

     void showDetails(){
     cout<<"======================================="<<endl;
     cout<<"Customer Name      :"<<Name<<endl;
     cout<<"Customer Id        :"<<Id<<endl;
     cout<<"Customer Phone No  :"<<Phn_num<<endl;
     cout<<"======================================="<<endl;


   }

   void showDetails1(){
     cout<<"======================================="<<endl;
     cout<<"Teacher Name      :"<<Name<<endl;
     cout<<"Teacher Id        :"<<Id<<endl;
     cout<<"Teacher Phone No  :"<<Phn_num<<endl;
     cout<<"======================================="<<endl;


   }







};
int main(){
    Customer c1("Rakib","c101","12345654344");

    //cout<<"Enter Your Customer name:"<<endl;
    /*cin>> Name;
    cout<<"Enter your Customer Id:"<<endl;
    cin>>Id;
    cout<<"Enter your Customer Phone num:"<<endl;
    cin>>Phn_num;*/

     //c1("Name","Id","Phn_num");
                         //("Rakib","c101","12345654344");
    Customer c2("Sakib","c102","12345634444");


       c1.showDetails();
        c2.showDetails();

     Teacher t1("Nazmul Hossain","T-17-1","01367376366");
     Teacher t2("Mohaiminul","T-17-2","014737737377");



     t1.showDetails1();
     t2.showDetails1();



}



