// Without Using Built-In String Functions

/*
 a program which should implement your own function equivalent to the library
function to perform various string operations
such as copy, length, reversing, palindrome, concatenation 
and to find occurrence of a sub-string. (Your user define function must
have same parameter & return type as library function but different in name)  */

#include<iostream>
using namespace std;


void copy_string( char destination[], char source[] ){

    int i;
    for ( i = 0; source[i]!='\0'; i++)
    {
        destination[i] = source [i];
    }
    destination[i] = '\0';
}
int length_of_string(char str[] ){

    int count=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse_string(char rev[], char str[]){

    int i, len=0,temp=0;
    len = length_of_string(str)-1;
    temp = len;
    for ( i = 0; i <= temp; i++, len--)
    {
        rev[i] = str[len];
    }

}
int palindrome_string(char str[]){

    char rev[20];
    reverse_string(rev, str);
    int len=0, flag=0; 
    len = length_of_string(str);
    for (int i = 0; i < len; i++)
    {
        if ( rev[i]!=str[i])
            flag=1;
    }
    if( flag == 1)
        return flag;
    else
        return flag;
}
void concat_string( char str1[], char str2[]){

    int i, len1=0, len2=0;

    len1 = length_of_string(str1);
    len2 = length_of_string(str2);
    cout<<"\t "<<len1<<"\t "<<len2;
    for ( i = len1; i < (len1 + len2); i++)
    {
        str1[i] = str2[i-len1];
    }
    str1[i] = '\0';
}
void occur_of_string(char str[], char sub[]){

    int i, j, flag, N=0, M=0;
    int count=0;
    N = length_of_string(str);
    M = length_of_string(sub);

    /* A loop to slide sub[] one by one */
    for ( i = 0; i <= N; i++)
    {
        for ( j = 0; j <= M; j++)
        {
            /* for current index i, check for 
            pattern match */
            if ( str[ i+j ] != sub[j])
            {
                break;
            }
            
        }
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        if (j == M)  
        {
           count++;
           j = 0;
        }
    }
    if( count!=0)
        cout<<"\n\t Sub String Ocurred "<<count<<" times.";
    else
        cout<<"\n\t Sub String Is Not Found.";
}
// Main function
int main(){

    int ch=0;
    char str1[20], str2[20], cpy[20], rev[20];
    int len, flag=0;

    cout<<"\n\t Which Operation do you want to perform on string. \n";
    cout<<"\n\t\t 1. Copy string.";
    cout<<"\n\t\t 2. length of string.";
    cout<<"\n\t\t 3. Reverse string.";
    cout<<"\n\t\t 4. Check string is palindrome or not.";
    cout<<"\n\t\t 5. String Concatenation.";
    cout<<"\n\t\t 6. Find Occurance of sub-string.";
    cout<<"\n\t\t 7. EXIT.";

    while ( 1 )
    {
        cout<<"\n\t Your Choice: ";
        cin>>ch;
        switch ( ch )
        {
        case 1:
            cout<<"\n Enter a string: ";
            cin>>str1;
            copy_string(cpy, str1);
            cout<<"\n\t str1 copied into cpy: "<<cpy;
            break;
        case 2:
            cout<<"\n Enter a string: ";
            cin>>str1;
            len = length_of_string(str1);
            cout<<"\n\t Length of "<<str1<<" is : "<<len;
            break;
        case 3:
            cout<<"\n Enter string to reverse: ";
            cin>>str1;
            reverse_string(rev, str1);
            cout<<"\n\t Reversed string: "<<rev;
            break;
        case 4:
            cout<<"\n Enter a string : ";
            cin>>str1;
            flag = palindrome_string(str1);
            if( flag==1 )
                cout<<"\n\t String is not palindrome.";
            else
                cout<<"\n\t is palindrome.";
            break;
        case 5:
            cout<<"\n Enter a string 1 : ";
            cin>>str1;
            cout<<"\n Enter a string 2 : ";
            cin>>str2;
            concat_string(str1, str2);
            cout<<"\n\t Concatination of str1 and str2 : "<<str1;
            break;
        case 6:
            cout<<"\n Enter a string: ";
            cin>>str1;
            cout<<"\n Enter sub string to find in above string: ";
            cin>>str2;
            occur_of_string(str1, str2);
            break;
        case 7:
            exit(1);
        default:
            cout<<"\n\t PLEASE, CHOOSE CORRECT CHOICE.";
            break;
        }
    }
    
    return 0;
}