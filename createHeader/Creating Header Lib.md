# Creating Header Lib



## Introduction

You will learn how to create and maintain my own library/header file

For this tutorial, we will create ;

- Declare all your functions in `myNP_tutorial.h`
- Define all your functions in `myNP_tutorial.c`



---------------------------



## Step 1. Workspace Folder



### Create local directory for programming

We will create the main directory under

**C:\Users\yourID\source\repos**

> e.g. **C:\Users\ykkim\source\repos**

You can search for 'repos' in window menu

![img](https://user-images.githubusercontent.com/38373000/185348195-07f482ba-3aac-4fc8-8298-9928f06fc534.png)



This is where your assignment projects should be located.

For this tutorial, let us create the new workspace directory as

- Name the directory as "**NP**"

  > A name that clearly shows the course name

Create more necessary sub directories



#### Example:

- **C:\Users\yourID\source\repos\NP**
- **C:\Users\yourID\source\repos\NP\tutorial**
- **C:\Users\yourID\source\repos\NP\include**



--------------------------



## Step 2. Create a tutorial C Project

Under **\tutorial** Directory, create a new folder named as **TU_createheader**

- **C:\Users\yourID\source\repos\NP\tutorial\TU_createheader**

Create a new empty project in Visual Studio Community. Name the project as **TU_createheader**

Create a new C/C++ source file for main()

- Name the source file as `TU_createHeader_main.cpp`



Paste the following code or[ download src file from here](https://github.com/ykkimhgu/Tutorial-C-Program/tree/main/createHeader/TU_createHeader_main.cpp)

```c++
#include "stdio.h"
#include "stdlib.h"

// Include path will be included at the end of tutorial
// #include "myNP_tutorial.h"

void printVec(double* vec, int row);

int main(int argc, char* argv[])
{

	// PART 1
	printf("\n**************************************************");
	printf("\n|                     PART 1.                    |");
	printf("\n**************************************************\n");

	double x[3] = { 1, 2, 3 };
	int x_size = sizeof(x)/sizeof(double);

	printVec(x, x_size);


	// Part 2
	printf("\n**************************************************");
	printf("\n|                     PART 2.                    |");
	printf("\n**************************************************\n");

	double A[5] = { 10, 20, 30, 40, 50 };
	double B[5] = { 1, 2, 3, 4, 5 };

	double C[5] = {};
	addVec(A, B, C, 5);
	printVec(C, 5);

	system("pause");
	return 0;
}


void printVec(double* vec, int size)
{
	for (int i = 0; i < size; i++)
		printf("Vector[%d] = %.1f \n", i, vec[i]);
	printf("\n");
}
```



## Part 2. Create your Header files

Under the directory of **\include,** create **'myNP_tutorial.cpp**' and '**myNP_tutorial.h**'.

- **C:\Users\yourID\source\repos\NP\include**
- [You can download source files here](https://github.com/ykkimhgu/Tutorial-C-Program/tree/main/createHeader)



Do not make duplicate copies of these files in your local drive. Update these files as you do assignments.

myNP_tutorial.h

myNP_tutorial.cpp

/*----------------------------------------------------------------\

@ C-Tutorial by Young-Keun Kim - Handong Global University



Author           : [YOUR NAME]

Created          : 26-03-2018

Modified         : 19-08-2022

Language/ver     : C++ in MSVS2022



Description      : myNP_tutorial.h

----------------------------------------------------------------*/



\#ifndef		_MY_NP_H		// use either (#pragma once) or  (#ifndef ...#endif)

\#define		_MY_NP_H



\#include <iostream>

\#include <string>

\#include <fstream>



void printVec(double* _vec, int _row);

void addVec(double A[], double B[], double C[], int size);



\#endif



## Part 3. Include your Header files

In the above main() program, include your header library by finding the path.

Now, you need to delete the function definition of `printVec() & addVec()` in main(), for we have included the function from the header library file.

The main source file should be modified as

```
#include "stdio.h"
#include "stdlib.h"
#include "../../../include/myNP_tutorial.h"


int main(int argc, char* argv[])
{

	// PART 1
	printf("\n**************************************************");
	printf("\n|                     PART 1.                    |");
	printf("\n**************************************************\n");

	double x[3] = { 1, 2, 3 };
	int x_size = sizeof(x)/sizeof(double);

	printVec(x, x_size);

}
```