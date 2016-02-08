## CSCI 2312: Programming Assignment 1

*******************************************************
*  Name      :  Joshua Brummet       
*  Student ID:  105795915              
*  Class     :  CSC 2312           
*  PA#       :  1                
*  Due Date  :  Feb. 7th, 2016
*******************************************************


Read Me


*******************************************************
*  Description of the program
*******************************************************

The program Takes three dimentional points and calculates the area of a triangle formed by the three points. 


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
Main program.  uses a test-driven system to calculate the area of the three points

Name:  Point.h
Contains the definition for the class Point.  

Name: Point.cpp
Defines and implements the Point class for implementing three coordinate points.  
This class provides routines to construct and get the data, as
well as a distanceto function to allow calculations of the points.

Name: Area.cpp

This defines a non-member function which takes three reference point objects, and calculates the area of a triangle formed by the points.
It uses herons formula to calculate the area.

Name: PointTests.cpp 

This implements the test driven system, to check multiple circumestances with calculating the area of a triangle with three point objects.

Name: PointTests.h

This header file calls the tests in the PointTest.cpp

Name: ErrorContext.cpp

This prints out statements for the PointTests

Name: ErrorContext.h

Prints out statements for correctness with the Tests.

*******************************************************
*  Circumstances of programs
*******************************************************

The program runs successfully.  

The program was developed and tested on the Xcode compiler. 


*******************************************************
*  How to build and run the program
*******************************************************

1.Open File 

Now you should see a directory named homework with the files:
main.cpp
Point.h
Point.cpp
Area.cpp
PointTests.cpp
PointTests.h
ErrorContext.cpp
ErrorContext.h
Readme.md

2. Build the program.

3. Should print out the results, with 56 tests built in with the Test-Driven system.
