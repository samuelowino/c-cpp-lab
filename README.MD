# The C++ Programming Language

![Bjarne Stroustrap](book_cover.jpg)

- - - 

<img src="https://raw.githubusercontent.com/isocpp/logos/master/cpp_logo.png" alt="C++ Logo" width="306" height="344" />

## Notes and Code Samples Based on Bjarne's Book, **The C++ Programming Language**

## The book is divided into four parts;

* **Part 1: A tour of C++**
* **Part 2: Basic facilities**
* **Part 3: Abstraction mechanisms**
* **Part 4: The Standard Library**

> Each section has multiple chapters that deal with specific subjects and language features

- - -

# Part 1: Introduction

## Sections
* Notes to the reader
* A Tour of C++: The Basics
* A Tour of C++: Abstraction Mechanisms
* A Tour of C++: Containers and Algorithms
* A Tour of C++: Concurrency and Utilities

- - -

C++ is a **compiled langauge**.

For a C++ program to run, 

* It's **source text** has to be processed by a **compiler**, producing **object files**.
* **Object files** are combined by a **linker**, producing an **executable program**

![Bjarne Stroustrap](cpp-execution.png)

A C++ executable program is created for a specific hardware/system combination and is not portable to say Mac to Windows or Linux Systems. 
C++ source code can however be compiled and run on any hardware/system.

The **ISO C++ Standard** contains two main components:

* **Core Language Features** - such as built in types (**int**, **char** and so on), loops and operators and so on.
* **Standard Library Components** - such as containers (**vectors**, **arrays**), **IO operations** (**<<**, **>>**) and so on.

C++ is **statically typed**

That is, the type of every value is known to the compiler at the time of it's use. The type of value determined the type of operations that can be performed on it.

- - -

> The minimal C++ program is:

```c++
int main() {}
```
> This defines a program that takes no arguments and does nothing.
> Curly braces **{ }** indicated grouping in c++.

Every C++ program must have one global function named **main()**

### Hello World!

```c++
#include <iostream>

int main(){
    std::cout<<"Hello World";
}
```
> This program prints out "Hello World!"
> The line *#include iostream* instructs the compiler to include the **standard stream IO** facilities. Without this declaration *std::cout<<"Hello World!";* would not work.

To minimize the time you wait for the compiler it is good include only the **headers** you need. Many people include **iostream** even when they do not need to and this can penalize your runtime as well.

> iostream header file

```c++
#ifndef _GLIBCXX_IOSTREAM
#define _GLIBCXX_IOSTREAM 1

#pragma GCC system_header

#include <bits/c++config.h>
#include <ostream>
#include <istream>

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  /**
   *  @name Standard Stream Objects
   *
   *  The &lt;iostream&gt; header declares the eight <em>standard stream
   *  objects</em>.  For other declarations, see
   *  http://gcc.gnu.org/onlinedocs/libstdc++/manual/io.html
   *  and the @link iosfwd I/O forward declarations @endlink
   *
   *  They are required by default to cooperate with the global C
   *  library's @c FILE streams, and to be available during program
   *  startup and termination. For more information, see the section of the
   *  manual linked to above.
  */
  ///@{
  extern istream cin;		/// Linked to standard input
  extern ostream cout;		/// Linked to standard output
  extern ostream cerr;		/// Linked to standard error (unbuffered)
  extern ostream clog;		/// Linked to standard error (buffered)

#ifdef _GLIBCXX_USE_WCHAR_T
  extern wistream wcin;		/// Linked to standard input
  extern wostream wcout;	/// Linked to standard output
  extern wostream wcerr;	/// Linked to standard error (unbuffered)
  extern wostream wclog;	/// Linked to standard error (buffered)
#endif
  ///@}

  // For construction of filebuffers for cout, cin, cerr, clog et. al.
  static ios_base::Init __ioinit;

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace

#endif /* _GLIBCXX_IOSTREAM */
```
> iostream declares **the 8 standard stream objects**

* **istream cin**
* **ostream cout**
* **ostream cerr**
* **ostream clog**
* **wistream wcin**
* **wostream wcout**
* **wostream wcerr**
* **wostream wclog**



