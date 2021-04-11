#include<bits/stdc++.h>
using namespace std;
struct student
{
  int age, standard;
  string first_name,last_name;
};

int main()
{
    student stu;
    cin >> stu.age ;
    cin >> stu.first_name ;
    cin >> stu.last_name ;
    cin >> stu.standard ;
    cout << stu.age << " " << stu.first_name << " " << stu.last_name << " " << stu.standard;
    
    return 0;

}
