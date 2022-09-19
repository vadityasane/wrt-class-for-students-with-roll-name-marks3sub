#include <iostream>

using namespace std;

class student{
    private:       //data Memebers
  int roll;
  string name;
  int mathMarks;
  int phyMarks;
  int chemMarks;

  public:           //function Memebers
  student (int r, string n, int m, int p, int c)  //constructor
  {
        roll = r;
        name = n;
        mathMarks = m;
        phyMarks = p;
        chemMarks = c;
  }

  int total()
  {
      return mathMarks+phyMarks+chemMarks;
  }

  char grade()
  {
      float average = total()/3;

      if(average > 60)
      return 'A';
      else if(average >=40 && average <= 60)
      return 'B';
      else
      return 'C';
   }
};

int main()
{
    int roll;
    string name;
    int m,p,c;

    cout<<"Enter the Roll Number of a Student: ";
    cin>>roll;
    cout<<"Enter the Name of a Student: ";
    cin>>name;
    cout<<"Enter the Marks in 3 subjects: ";
   cin>>m>>p>>c;

   student s(roll, name, m, p, c);

   cout<<"Total Marks:"<<s.total()<<endl;
   cout<<"Grade of Student: "<<s.grade()<<endl;

    return 0;
}
