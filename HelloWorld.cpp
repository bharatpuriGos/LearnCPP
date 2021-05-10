▲
Related Articles
Writing first C++ program : Hello World example
Is it fine to write “void main()” or “main()” in C/C++?
int (1 sign bit + 31 data bits) keyword in C
Difference between “int main()” and “int main(void)” in C/C++?
Variable length arguments for Macros
Multiline macros in C
CRASH() macro – interpretation
The OFFSETOF() macro
Branch prediction macros in GCC
Diffference between #define and const in C?
Interesting Facts about Macros and Preprocessors in C
Compiling a C program:- Behind the Scenes
Program error signals
Escape Sequences in C
Line Splicing in C/C++
C/C++ Tokens
Variables and Keywords in C
How are variables scoped in C – Static or Dynamic?
Scope rules in C
How Linkers Resolve Global Symbols Defined at Multiple Places?
Complicated declarations in C
Redeclaration of global variable in C
Internal Linkage and External Linkage in C
Different ways to declare variable as constant in C and C++
Vector in C++ STL
The C++ Standard Template Library (STL)
Map in C++ Standard Template Library (STL)
std::sort() in C++ STL
Arrays in C/C++
Initialize a vector in C++ (6 different ways)
Writing first C++ program : Hello World example
Difficulty Level : Basic
Last Updated : 17 Feb, 2021
Learning  C++ programming can be simplified into:

Writing your program in a text-editor and saving it with correct extension(.CPP, .C, .CP)
Compiling your program using a compiler or online IDE
Understanding the basic terminologies.
The “Hello World” program is the first step towards learning any programming language and also one of the simplest programs you will learn. All you have to do is display the message “Hello World” on the screen. Let us now look at the program:





// Simple C++ program to display "Hello World"
  
// Header file for input output functions
#include<iostream> 
  
using namespace std;
  
// main function -
// where the execution of program begins
int main()
{
    // prints hello world
    cout<<"Hello World";
      
    return 0;
}