// #include<stdio.h>
// int main() {
//     printf("hello boys");
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int motherAmount;
//     cout << "Enter Mother Amount :";
//     cin >> motherAmount;
//     cout << "Enter father amount :";
//     int fatherAmount;
//     cin >> fatherAmount;
//     int sum = motherAmount + fatherAmount;
//     cout << "sum of father and mother amount is :" << sum;

//     return 0;
// }

// two different method for print hello world 👇👇

// #include<iostream>
// using namespace std;
// int main(){
//     cout << "Hello world\n";
//     return 0;
// }

// #include <cstdio>
// using namespace std;
// int main(){
//     puts("Hello s");
//     return 0;
// }

// return type in c++.. we have to return depends on our methosd declaration... like if we declar our
// method with int , then we have to return 0,1 or any other integer
// if we declare method with void , then we have to return nothing
// if we declare method with char , then we have to return charecter like this 👇

// #include <iostream>
// using namespace std;

// void nothing();
// char someChar();
// int main()
// {
//     nothing();
//     someChar();
//     return 0;
// }
// void nothing()
// {
//     cout << "nothing" << endl;
// };

// char someChar(){
//     printf("someChar");
//     return('h');
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string firstName;
//     string secondName;
//     cout << "Enter your first Name:";
     
//     getline(cin, firstName);
//     cout << "Enter your second Name:";
//     getline(cin, secondName);
//     cout << "Hey.. " << firstName << " "<<secondName<<" how are you?" << endl;
    
//     return 0;
// }



#include <iostream>
#include <string>
using namespace std;
int main()
{
    int card = 40;
    int *cardPtr=&card;
    printf("The value of cardPtr is :%d\n", cardPtr);

    printf("The value of Card is :%d\n", card);
    return 0;
}
