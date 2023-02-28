#include<iostream>
using namespace std;

class Person{
  protected:
      string Name;
      string Id;
      string Phn_num;
      string Address;
  public:
  /*Person(string n,string id,string Phn_no,string add){

      Name=n;
      Id=id;
      Phn_num=Phn_no;
      Address=add;
    }*/
    void setName(string n){
    Name=n;
    }
    string getName(){
    return Name;
    }
    void setId(string id){
    Id=id;
    }
    string getId(){
    return Id;
    }
     void setPhn_num(string phn_no){
    Phn_num=phn_no;
    }
    string getPhn_num(){
    return Phn_num;
    }
     void setAddress(string add){
    Address=add;
    }
    string getAddress(){
    return Address;
    }

};
class ADMIN : public Person
{
protected:
    string adminname;
    string admin_Id="9999";
     string admin_email;
      string admin_password="12345";

public:
    ADMIN()
    {
        cout << "******" << endl;
    }
    ADMIN(string AName, string aID, int adpass, string e)
    {
        cout << "Valued constructor" << endl;

        adminname = AName;
        admin_Id = aID;
        admin_password = adpass;
        admin_email = e;
    }

    void setADMINName(string AName)
    {
        adminname = AName;
    }
    string getADMINName()
    {
        return adminname;
    }
    void setADMINId(string aID)
    {
        admin_Id = aID;
    }
    string getADMINId()
    {
        return admin_Id;
    }
       void setADMINemail(string e)
    {
         admin_email= e;
    }
    string getADMINemail()
    {
        return admin_email;
    }

    void setADMINIpassword(string adpass)
    {
        admin_password = adpass;
    }
    string getADMINpassword()
    {
        return admin_password;
    }


    void showInfo()
    {
        cout << "=======> ADMIN Details <=========" << endl;
        cout << "ADMINName          : " << adminname << endl;
        cout << "ADMINId         :    " << admin_Id << endl;
        cout << "Email               : " << admin_email << endl;
        cout << "ADMINpassword        : " << admin_password << endl;

    }
};

int main(){
    ADMIN A1;




   string id,pass;
  cout<<"Enter Your Id:"<<endl;
  cin>> id;
  cout<<"Enter Your Password:"<<endl;
  cin>> pass;
  if(id==A1.getADMINId() && pass==A1.getADMINpassword()){

    cout<<"Login Successfully:"<<endl;

  }
  else
    cout<<"Please Enter Again:";
}




