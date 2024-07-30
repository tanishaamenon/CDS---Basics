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
#include <iostream>
using namespace std;

int main()
{
    cout<<"Hello World";
    return 0;
}
```
<br>

b.<br>

```
#include <iostream>
using namespace std;

int main()
    int a,b,s = 0;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    s = a + b;
    cout << "Sum: "<<s;
    return 0;
}
```

<br>
c. <br>

```
#include <iostream> 
using namespace std;  
 
int main() 
{ 
    int a,b,s; 
    float avg; 
    cout << "Enter first number: "; 
    cin >> a; 
    cout << "Enter second number: "; 
    cin >> b; 
    s = a + b; 
    avg = s/2; 
    cout << "Average: "<<avg; 
     
}
```

<br>
d.<br>

```
#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int a; 
    cout << "Enter a number: "; 
    cin >>a; 
    if (a % 2 == 0) 
    { 
        cout << "It is an even number. "; 
    } 
    else 
    { 
        cout << "It is an odd number. ";
    }
    return 0;
}
```

<br>
e.<br>

```
#include <iostream>
using namespace std;
<br>
int main()
{
    int y;
    cout << "Enter a year: ";
    cin >>y;
    if (y % 400 == 0 or y % 4 == 0 and y % 100 != 0)
    {
        cout << "It is a leap year. ";
    }
    else
    {
        cout << "It is not a leap year. ";
    }
    return 0;
}
```

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

