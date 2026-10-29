#include <iostream>
#include <cstdio>

using namespace std;

double square(double sideA)
{
    return sideA * sideA;
}

double rectangle(double length, double width)
{
    return length * width;
}

double triangle(double base, double height)
{
    return (0.5 * base * height);
}

int shape()
{
    int choice;
    cout <<"please select the area of the shape to calculate"<<endl;
    printf(" %d. square\n %d. rectangle\n %d. triangle\n %d. quit program\n", 1, 2, 3, 4);
    cout << "enter selection :";
    while(1){
        if(cin >> choice)
        {
            if(choice > 4)
            {
                cout <<"your input was :"<<choice<<". which is an invalid input. please enter a valid input!!! \n";
                return choice;
            }
            else
                break;
        }
        else 
            cout <<"please enter a valid choice \n";
            cin.clear();
            cin.ignore(3000, '\n');
    }
    return choice;
}
int main()
{
    double sideA;
    double sideB;
    int selection;
    bool state = 1;
    
    while(state)
    {
        int selection = shape();
        for(;selection > 4;){
            selection = shape();
        }
        switch(selection)
        {
            case 1:
                {
                    cout<< "enter the length of the sides :";
                    cin >> sideA;
                    cout<< "the area of the square is " << square(sideA)<< endl; 
                    break;
                }
            case 2:
                {
                    cout<< "enter the length :";
                    cin >> sideA;
                    cout<< "enter the width :";
                    cin >> sideB;
                    cout<< "the area of the square is " << rectangle(sideA, sideB)<< endl; 
                    break;
                }
            case 3:
                {
                    cout<< "enter the size of height :";
                    cin >> sideA;
                    cout<< "enter the size of base :";
                    cin >> sideB;
                    cout<< "the area of the triangle is " << triangle(sideA, sideB)<< endl; 
                    break;
                }
            default:
                state = 0;
                break;
        }
    }
            
    return 0;
}
