/*NAME: Aron kipkoech langat
 REG No: CT101/G/26629/25
 GROUP B; BSC computer science */

#include <iostream>
using namespace std;

int main (){
   string student_name;
   int age,score;
   string admission_status;
   
   cout <<"What is your name?:"<<endl;
   cin >>student_name;

   cout <<"What is your age?:"<<endl;
   cin >>age;
   
   cout <<"What is your  exams score?:"<<endl;
   cin >>score;

   if (age >=18)
    if (score >= 50)
        admission_status = "Admitted";
    else{
     admission_status = "Not Admitted:low score";
     }
    else{
        admission_status = "Not Admitted: Underage";
    }

    cout <<"STUDENT ADMISSION "<< endl;
    cout <<"Student name:"<< student_name<<endl;
    cout <<"Student age:"<< age<<endl;
    cout << "Exams score:"<< score<<endl;
    cout <<"Admission status:"<<admission_status<<endl;

    return 0;
}