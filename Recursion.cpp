#include <iostream>
using namespace std;
int Factorial(int Number) {
    if (Number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1; // Return -1 to indicate an error
    }
    if (Number == 0 || Number == 1) {
        return 1;
    } else {
        return Number * Factorial(Number - 1);
    }
}
//FibonacciSeries
int FibonacciSeries(int Number)
{
    if(Number==1||Number==2)
    {
        return 1;
    }
    else{
        return FibonacciSeries(Number-1) + FibonacciSeries(Number-2);
    }
}
//Binary Search Tree
string BinarysearchTree(int Left,int Right,int NumberToCheckFoundOrNot)
{
    int Middle = (Left+Right)/2;
    if(NumberToCheckFoundOrNot==Middle){
        return "The Number Is Found";
    }
    else if (NumberToCheckFoundOrNot>Middle)
    {
        Left = Middle + 1;
        return BinarysearchTree(Left,Right,NumberToCheckFoundOrNot);
    }
    else{
        Right = Middle - 1;
        return BinarysearchTree(Left,Right,NumberToCheckFoundOrNot);
    }
    
}
int main(){
    //Base Case 
    //Recursion Function
    //Example Factorial
    int Number ;
    cout<<"Enter Number : ";
    cin>>Number;
    cout<<"The Result Of Factorial Is "<<Factorial(Number)<<"\n";
    cout<<"The Result Of FibonacciSeries Is  : "<<FibonacciSeries(Number);
    return 0;
}
