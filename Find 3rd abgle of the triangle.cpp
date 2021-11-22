#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    double first_angle,second_angle,third_angle;
    cout<<"Enter your first angle of the triangle : "<<endl;
    cin>>first_angle;
    cout<<"Enter your second angle of the triangle : "<<endl;
    cin>>second_angle;

    third_angle = 180-(first_angle+second_angle);
    cout<<"The 3rd angle of the triangle is : "<<third_angle<<endl;
    getch();
}
