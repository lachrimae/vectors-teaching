// references.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// topics:
// 
// use cin to get number inputs
// assignment and reassignment
// vectors are objects
// we can loop over vectors with for_each
// 
// we can write anonymous functions inline if it's more concise
//     vector<int> v(100);
//     iota(v.begin(), v.end(), 1);
//     for_each(v.begin(), v.end(), [](int i) { cout << i << endl; });
    /*
    int sum = 0;
    vector<int> v(100);
    iota(v.begin(), v.end(), 1);
    for_each(v.begin(), v.end(), [&sum](int n) { sum = sum + n; });
    cout << sum << endl;
    for_each(v.begin(), v.end(), [](int n) { cout << "hello" << endl; });

    set<int> s(v.begin(), v.end());
    for_each(s.begin(), s.end(), [](int n) { cout << n << endl; });
    */
// 
// print all the numbers from 1 to 5
// print "Hello world" five times
// find all the numbers from 1 to 100 which are divisible by 2, using ifs and for_each
// 
// find all the numbers from 1 to n which are divisible by 3
// find all the numbers from 1 to n which are divisible by 5
// find all the numbers from 1 to n which are divisible by both 3 and 5
// write FizzBuzz
// 
// add all the numbers from 1 to 5 and print the output

// 
// 
// conditionals
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <assert.h>
#include <set>
#include "printvector.h"

using namespace std;

void assignAndReassign() {
    int n;             // <--- n is declared
    n = 1;             // <--- n is assigned to the value 1
    // assert(n == ?);
    n = n + 1;
    // assert(n == ?);
    n = n * 3;
    // assert(n == ?);

    int m = 5;         // <--- n is declared and assigned simultaneously; i.e., initialized
                       //      we call it "initialization" when both happen at once
    // assert(m == 5);
    m = n + 2;
    // assert(m == ?);
    n = m + 2;
    // assert(m == ?);
    return;
}


void constructVectors() {
    // declaring an empty list of ints, then pushing values into it
    vector<int> z;
    cout << "empty container: ";
    print_container(z);

    z.push_back(1);
    z.push_back(2);
    z.push_back(3);
    /*
    cout << "container with 3 elements";
    print_container(z);

    z.push_back(4);

    cout << "container with 4 elements";
    print_container(z);

    z.push_back(5);
    z.push_back(6);
    z.push_back(7);
    z.push_back(8);
    z.push_back(9);
    z.push_back(10);
    cout << "container with 10 elements";
    print_container(z);
    */

    // declaring a list of ten 5s:
    //vector<int> a{ 5, 5, 5, 5, 5, 5, 5, 5, 5, 5 };
    //cout << "list of just 5s: ";
    //print_container(a);

    /*
    vector<int> b(10, 5);
    cout << "list of just 5s: ";
    print_container(b);

    // here we edit the list of 5s
    b[0] = 4;
    cout << "slightly edited list: ";
    print_container(b);
    b[2] = b[2] + 1;
    cout << "more edited list: ";
    print_container(b);
    
    // declaring a list of integers
    vector<int> c{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << "list of ints: ";
    print_container(c);

    // declaring a list of integers with slightly different notation
    vector<int> d(10);
    iota(d.begin(), d.end(), 1);
    cout << "list of ints: ";
    print_container(d);

    // declaring a long list of integers
    vector<int> e(100);
    iota(e.begin(), e.end(), 1);
    cout << "long list of ints: ";
    print_container(e);
    */
}


int main()
{
    bool x = true;
    bool y = false;
    bool z = x and y;
    if (z) {
        cout << "wowza" << endl;
    }
    //assignAndReassign();
    //constructVectors();

    return 0;
}