# Experiment - 1
**Aim:** <br>
Expt 1	Downloading and Installing VS Code, (Hello World and Calculator program)<br>
<br>
**Objectives:** <br>
a. To display 'Hello World'.<br>
b. To display the sum of two numbers.<br>
c. To display the average of two numbers.<br>
d. To determine whether a number is an odd or an even number.<br>
e. To determine whether a year is a leap year or not.<br>
<br>
**Theory:** <br>
C++ is programming language that is procedural, object-oriented, and generic in nature. The language was developed by Bjarne Stroustrup, C++ is an extension of C, adding classes and objects to enhance its capabilities. At its core, C++ programs consist of functions, variables, and control structures.<br>
C++ introduces the concept of classes, which encapsulate data and functions which brings about object-oriented programming. Objects are instances of classes, allowing data abstraction and inheritance. Operator overloading and templates enhance functionality, enabling code flexibility.<br>
Standard libraries in C++ are crucial because they contain needed functions and data structures, which include vectors, lists and strings. These comprise bold container classes and algorithms in Standard Template Library (STL). There is a solid error management provided by exception handling.<br>
<br>
**Code:** <br>
a.<br> 
```
*#include <iostream> <br>
using namespace std; <br>
<br>
int main() <br>
{<br>
    cout<<"Hello World";<br>
    return 0;<br>
}<br>*
```
<br>
b.<br>
*#include <iostream><br>
using namespace std;<br>
<br>
int main()<br>
{<br>
    int a,b,s = 0;<br>
    cout << "Enter first number: ";<br>
    cin >> a;<br>
    cout << "Enter second number: ";<br>
    cin >> b;<br>
    s = a + b;<br>
    cout << "Sum: "<<s;<br>
    return 0;<br>
}<br>*
<br>
c. <br>
*#include <iostream><br>
using namespace std; <br>
<br>
int main()<br>
{<br>
    int a,b,s;<br>
    float avg;<br>
    cout << "Enter first number: ";<br>
    cin >> a;<br>
    cout << "Enter second number: ";<br>
    cin >> b;<br>
    s = a + b;<br>
    avg = s/2;<br>
    cout << "Average: "<<avg;<br>
    <br>
}<br>*
<br>
d.<br>
*#include <iostream><br>
using namespace std;<br>
<br>
int main()<br>
{<br>
    int a;<br>
    cout << "Enter a number: ";<br>
    cin >>a;<br>
    if (a % 2 == 0)<br>
    {<br>
        cout << "It is an even number. ";<br>
    }<br>
    else<br>
    {<br>
        cout << "It is an odd number. ";<br>
    }<br>
    return 0;<br>*
}<br>
<br>
e.<br>
*#include <iostream><br>
using namespace std;<br>
<br>
int main()<br>
{<br>
    int y;<br>
    cout << "Enter a year: ";<br>
    cin >>y;<br>
    if (y % 400 == 0 or y % 4 == 0 and y % 100 != 0)<br>
    {<br>
        cout << "It is a leap year. ";<br>
    }<br>
    else<br>
    {<br>
        cout << "It is not a leap year. ";<br>
    }<br>
    return 0;<br>
}<br>*
<br>
**Outputs:** <br>
a.<br>
![exp1a output](https://github.com/tanishaamenon/CDS---Basics/blob/main/exp1a.JPG)
<br>
b.<br>
![exp1b output](https://github.com/tanishaamenon/CDS---Basics/blob/main/exp1b.JPG)
<br>
c.<br>
![exp1c output](https://github.com/tanishaamenon/CDS---Basics/blob/main/exp1c.JPG)
<br>
d.<br>
![exp1d output](https://github.com/tanishaamenon/CDS---Basics/blob/main/exp1d.JPG)
<br>
e.<br>
![exp1e output](https://github.com/tanishaamenon/CDS---Basics/blob/main/exp1e.JPG)
<br>
**Conclusion:** <br>
&#8594; We learnt basics of C++. <br>
&#8594; We learnt how to perform basic operations on C++. <br>
<br>
*******

