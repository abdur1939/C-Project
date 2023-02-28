#include<iostream>
using namespace std;
int main()
{
    int Enter;
    //cout << endl;

    cout << "--------------- WELLCOME TO BANGALIYA BOJJ---------- \n\n"
         << endl
         << endl;
    cout << "===============================================================\n"
         << endl;
    cout << " ********************* 1.Admin **********************" << endl;
    cout << "********************** 2.OLD COUSTOMER **********************" << endl;
    cout << " ********************* 3.NEW COUSTOMER **********************" << endl;
    cout << "********************** 4.EXIT          **********************" << endl
         << endl;
    cout << "===============================================================\n\n"
         << endl;

    cout << "  How can i help you SIR/MAM ???PLEASE ENTER OUR KEY ???  " << endl;

    cin >> Enter;

     string name,Id,pass,sal,desig;
     int n;
     for(int i=0;i<3;i++){
       if (Enter ==1)
    {
         cout << " Enter your Admin ID" << endl;
         cin>>Id;
        cout<<"Enter your Admin password:"<<endl;
        cin>> pass;
        if( Id=="17-12345" && pass=="12345"){

           cout<<"login succesfully"<<endl;
           cout<<"******1.Add New Employee Details ******"<<endl;
           cout<<"******2.Display All Employee Record ******"<<endl;
           cout<<"******3.View Sales Record ******"<<endl;
           cout<<"******4.Clear Sales Record *****"<<endl;
           cout<<"Press Any key That You Want to Know:"<<endl;
           cin>>Enter;

           if(Enter==1){
          cout<<"****************Enter Your New Employee Details******************"<<endl;
          cout<<"Enter Your New Employee Name:"<<endl;
          cin>>name;
          cout<<"Enter Your New Employee Id:"<<endl;
          cin>>Id;
          cout<<"Enter Your New Employee Salary:"<<endl;
          cin>>sal;
          cout<<"Enter Your New Employee Designation:"<<endl;
          cin>>desig;

         }


          break;
        }
        else{
            cout<<"Please Enter Again:"<<endl;
        }

    }

     }
     //cout<<"Sorry:"<<endl;
}
