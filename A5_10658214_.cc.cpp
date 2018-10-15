#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct Student
{
    int ID_number[5];
    string name[5];
    int Age[5];
    string Gender[5];
    double Score[5];
    string grade[5];

};
int main()

{

    double totalscores=0;
    int  totalage=0;

    int countmale=0;

    int countfemale=0;

    double averagescore=0;

    double averageage=0;

    int numstudents;

    numstudents=5;

    double myscore;

    Student Me;

    for (int i=0; i<numstudents; i++)

    {
       cout << "Enter your ID: "<<endl;
       cin >> Me.ID_number[i];
       cout << " Enter your Name: "<<endl;
       cin >> Me.name[i];
       cout << " Enter your age: "<<endl;
       cin >> Me.Age[i];
       cout << " Enter your Gender: "<<endl;
       cin >> Me.Gender[i];
       cout << "Enter your Score: "<<endl;
       cin >> Me.Score[i];

       if (Me.Score[i]>80 && Me.Score[i]<=100)
       {
           Me.grade[i]="A";
       }

       else if (Me.Score[i] >=70 && Me.Score[i] <80)
       {
          Me.grade[i]="B";
       }
       else if (Me.Score[i]>=60 && Me.Score[i] <70)
       {
          Me.grade[i]="C";
       }
       else if(Me.Score[i]>=50 && Me.Score[i]<60)
       {
           Me.grade[i]="D";
       }
       else if(Me.Score[i] >=40 && Me.Score[i]<50 )
       {
           Me.grade[i]="E";
       }
       else
       {
           Me.grade[i]="F";
       }


       cout << endl;

                  if (Me.Gender[i]=="male")
           {
               countmale++;
           }
           else if( Me.Gender[i]=="female")
           {
               countfemale++;
           }


    }


cout << "*********************************" <<endl;
cout << " ID" << "      " << "Name " << "       " << "Age" << "             " << "Gender " << "         " << "Score" << "        " << "Grade " << endl;

cout << "********************************" << endl;
    for (int i=0;i <numstudents; i++)
    {

        totalscores=totalscores+Me.Score[i];

           totalage= totalage+Me.Age[i];

          averagescore= totalscores/numstudents;

           averageage= totalage/numstudents;

            cout << Me.ID_number[i] << "\t" << Me.name[i] << "\t" << Me.Age[i] << "\t" << Me.Gender[i];
        cout << "\t" << Me.Score[i] << "\t" << Me.grade[i] ;

       cout << endl;
    }



    cout << "The average age is:  " << averageage << endl;

    cout << "The average score is: " << averagescore << endl;

    cout << "The number of females are: " << countfemale << endl;

    cout << "The number of males are: " << countmale << endl;

    ofstream student;
    student.open("Studentts.txt", ios:: app);

    student << "*********************************" <<endl;

    student << " ID" << "  " << "Name " << "     " << "Age" << "      " << "Gender " << "     " << "Score" << "       " << "Grade " << endl;

    student <<  "********************************" << endl;

     for (int i=0;i <numstudents; i++)
    {

          totalscores=totalscores+Me.Score[i];

           totalage= totalage+Me.Age[i];

          averagescore= totalscores/numstudents;

           averageage= totalage/numstudents;

            student << Me.ID_number[i] << "\t" << Me.name[i] << "\t" << Me.Age[i] << "\t" << Me.Gender[i];
        student << "\t" << Me.Score[i] << "\t" << Me.grade[i] ;

       student << endl;
    }

     student << "The average age is:  " << averageage << endl;

    student << "The average score is: " << averagescore << endl;

    student << "The number of females are: " << countfemale << endl;

    student << "The number of males are: " << countmale << endl;

    student.close();




    return 0;
}
