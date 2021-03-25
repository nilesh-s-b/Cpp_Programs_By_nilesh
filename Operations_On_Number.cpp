/* Assignment-1
 Write a program to perform
1. Find GCD 
2. Reverse of a number
3. Palindrome number
4. Factorial */

#include<iostream>
using namespace std;
class assignment1
{
    private:
        int gcd=0, g1, g2, max=0;
        int no1, rem=0;
        int no2, p, rev=0;
        int no3, f;
    public:
        void GCD()
        {
            cout<<"\n Enter two numbers: ";
            cin>>g1>>g2;
            max = g1 > g2 ? g1 : g2 ;
            for (int i = 1; i < (max/2); i++)
            {
                if ( ( g1%i==0 ) && ( g2%i==0 ))
                {
                    gcd = i;
                }
                
            }
            cout<<"\n\t GCD OF "<<g1<<" AND "<<g2<<" IS: "<<gcd;
        }
        void reverse()
        {
            cout<<"\n Enter 2 or more than 2 digit number: ";
            cin>>no1;

            while ( no1>0 )
            {
                rem = ( no1%10 ) + (rem*10);
                no1 = no1/10;
            }
            cout<<"\n\t Reversed number is: "<<rem;
        }
        void palindrome()
        {
            cout<<"\n Enter 2 or more than 2 digit number: ";
            cin>>no2;
            p = no2;
            while ( no2>0 )
            {
                rev = ( no2%10 ) + (rev*10);
                no2 = no2/10;
            }
            if ( rev==p )
                cout<<"\n\t Number is palindrome.";
            else
                cout<<"\n\t NOT PALINDROME.";
        }
        void factorial()
        {
            cout<<"\n Enter a number to find it's Factorial: ";
            cin>>no3;
            f=1;
            while ( no3>0 )
            {
                f = f * no3;
                no3--;
            }
            cout<<"\n\t FACTORIAL : "<<f;
        }
};
int main()
{
    int ch;
    char loop='y';
    assignment1 a;
    while ( loop == 'y' )
    {
        cout<<"\n Choose the operation do you want to perform. ";
        cout<<"\n\t 1. GCD Of Two Numbers.";
        cout<<"\n\t 2. Reverse Of A Number.";
        cout<<"\n\t 3. Check Whether The Number Is Palindrome Or Not.";
        cout<<"\n\t 4. Factorial Of A Number.";

        cout<<"\n\t Your choice, please: ";
        cin>>ch;

        switch ( ch )
        {
        case 1:
           a.GCD();
            break;
        case 2:
            a.reverse();
            break;
        case 3:
            a.palindrome();
            break;
        case 4:
            a.factorial();
            break;
        default:
            cout<<"\n Wrong Choice.....!";
            break;
        }
        cout<<"\n DO YOU WANT TO CONTINUE (y/n): ";
        cin>>loop;
    }
    
    return 0;
}