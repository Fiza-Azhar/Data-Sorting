#include "Menu.h"
#include "SortBL.h"
#include "SortDL.h"
#include <conio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
     string f1E = "E-organize100.csv", f2E = "E-organize1000.csv",
           f3E = "E-organize10000.csv", f4E = "E-organize100000.csv", f5E = "E-organize500000.csv";
    string f1i = "I-organize100.csv", f2i = "I-organize1000.csv",
           f3i = "I-organize10000.csv", f4i = "I-organize100000.csv", f5i = "I-organize500000.csv";
    menus m;
    SortDL s;
    int opt = 0;
    int opt1 = 0;
    while (true)
    {
        //double start = clock();
        system("CLS");
        opt = m.mainMenu();
        if (opt == 1) // 100csv
        {
            s.loadData("organizations-100.csv");
            system("CLS");
            int m2 = m.subMenu();
            int m3;
            if (m2 == 1) // bubble sort
            {
                m3 = m.subMenu2();
                if (m3 == 1)
                {
                    double start = clock();
                    s.bubbleSort_index(f1i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.bubbleSort_Emp(f1E);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if (m2 == 2) // selection sort
            {
                m3 = m.subMenu2();
                if (m3 == 1)
                {
                    double start = clock();
                    s.selectionSort_Index(f1i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.selectionSort_Emp(f1E);
                    m.Time(start);
                    m.clearScreen();
                }
            }
            else if (m2 == 3) // insertion sort
            {
                m3 = m.subMenu2();
                if (m3 == 1)
                {
                    double start = clock();
                    s.insertionSort_index(f1i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.insertionSort_Emp(f1E);
                    m.Time(start);
                    m.clearScreen();
                }
            }
            else if (m2 == 4) // Merge Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-100.csv");
                if (m3 == 1)
                {
                    double start = clock();
                    s.mergeSort_Index(0, 100);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.mergeSort_Emp(0, 100);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if (m2 == 5) // Quick Sort
            {
                m3 = m.subMenu2();
                if (m3 == 1)
                {
                    double start = clock();
                    s.quickSort_Index(s.vt, 0, 100);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.quickSort_Emp(s.vt, 0, 100);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if (m2 == 6) // Heap Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-100.csv");
                if (m3 == 1)
                {
                    double start = clock();
                    s.heapSort_Index(s.vt, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.heapSort_Emp(s.vt, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 7) //Count Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-100.csv");
                if(m3 == 1)
                {
                    double start = clock();
                    s.countSort_I(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    double start = clock();
                    s.countSort_E(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 8) // Radix Sort
            {
                m3 = m.subMenu2();
               // s.loadData("organizations-100.csv");
                if(m3 == 1)
                {
                    double start = clock();
                    s.radixSort_Index(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    double start = clock();
                    s.radixSort_Emp(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 9) //Bucket Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-100.csv");
                if(m3 == 1)
                {
                    double start = clock();
                    s.bucketSort_Index(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    double start = clock();
                    s.bucketSort_Emp(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 10)
            {
                break;
            }
        }
        else if (opt == 2) // 1000csv
        {
            s.loadData("organizations-1000.csv");
            system("CLS");
            int m2 = m.subMenu();
            int m3;
            if (m2 == 1) // bubble sort
            {
                m3 = m.subMenu2();
                if (m3 == 1)
                {
                    double start = clock();
                    s.bubbleSort_index(f2i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.bubbleSort_Emp(f2E);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if (m2 == 2) // selection sort
            {
                m3 = m.subMenu2();
                if (m3 == 1)
                {
                    double start = clock();
                    s.selectionSort_Index(f2i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.selectionSort_Emp(f2E);
                    m.Time(start);
                    m.clearScreen();
                }
            }
            else if (m2 == 3) // insertion sort
            {
                m3 = m.subMenu2();
                if (m3 == 1)
                {
                    double start = clock();
                    s.insertionSort_index(f2i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {

                    double start = clock();
                    s.insertionSort_Emp(f2E);
                    m.Time(start);
                    m.clearScreen();
                }
            }
            else if (m2 == 4) // Merge Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-1000.csv");
                if (m3 == 1)
                {
                 double start = clock();   
                    s.mergeSort_Index(0, 1000);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.mergeSort_Emp(0, 1000);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if (m2 == 5) // Quick Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-1000.csv");
                if (m3 == 1)
                {
                    double start = clock();
                    s.quickSort_Index(s.vt, 0, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.quickSort_Emp(s.vt, 0, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if (m2 == 6) // Heap Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-1000.csv");
                if (m3 == 1)
                {
                    double start = clock();
                    s.heapSort_Index(s.vt, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.heapSort_Emp(s.vt, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
             else if(m2 == 7) //Count Sort
            {
                m3 = m.subMenu2();
               // s.loadData("organizations-1000.csv");
                if(m3 == 1)
                {
                    double start = clock();
                    s.countSort_I(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    double start = clock();
                    s.countSort_E(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 8) // Radix Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-1000.csv");
                if(m3 == 1)
                {
                    double start = clock();
                    s.radixSort_Index(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    double start = clock();
                    s.radixSort_Emp(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 9) //Bucket Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-1000.csv");
                if(m3 == 1)
                {
                    double start = clock();
                    s.bucketSort_Index(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    double start = clock();
                    s.bucketSort_Emp(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 10)
            {
                break;
            }
        }
        else if (opt == 3) // 10000 csv
        {
            s.loadData("organizations-10000.csv");
            system("CLS");
            int m2 = m.subMenu();
            int m3;
            if (m2 == 1) // bubble sort
            {
                m3 = m.subMenu2();
                if (m3 == 1)
                {
                    double start = clock();
                    s.bubbleSort_index(f3i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.bubbleSort_Emp(f3E);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if (m2 == 2) // selection sort
            {
                m3 = m.subMenu2();
                if (m3 == 1)
                {
                    double start = clock();
                    s.selectionSort_Index(f3i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.selectionSort_Emp(f3E);
                    m.Time(start);
                    m.clearScreen();
                }
            }
            else if (m2 == 3) // insertion sort
            {
                m3 = m.subMenu2();
                if (m3 == 1)
                {
                    double start = clock();
                    s.insertionSort_index(f3i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.insertionSort_Emp(f3E);
                    m.Time(start);
                    m.clearScreen();
                }
            }
            else if (m2 == 4) // Merge Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-10000.csv");
                if (m3 == 1)
                {
                    double start = clock();
                    s.mergeSort_Index(0, 10000);
                    s.addinfile(f3i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.mergeSort_Emp(0, 10000);
                    s.addinfile(f3E);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if (m2 == 5) // Quick Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-10000.csv");
                if (m3 == 1)
                {
                    double start = clock();
                    s.quickSort_Index(s.vt, 0, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.quickSort_Emp(s.vt, 0, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if (m2 == 6) // Heap Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-10000.csv");
                if (m3 == 1)
                {
                    double start = clock();
                    s.heapSort_Index(s.vt, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.heapSort_Emp(s.vt, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
             else if(m2 == 7) //Count Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-10000.csv");
                if(m3 == 1)
                {
                    double start = clock();
                    s.countSort_I(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    double start = clock();
                    s.countSort_E(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 8) // Radix Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-10000.csv");
                if(m3 == 1)
                {
                    double start = clock();
                    s.radixSort_Index(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    double start = clock();
                    s.radixSort_Emp(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 9) //Bucket Sort
            {
                m3 = m.subMenu2();
                //s.loadData("organizations-10000.csv");
                if(m3 == 1)
                {
                    double start = clock();
                    s.bucketSort_Index(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    double start = clock();
                    s.bucketSort_Emp(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 10)
            {
                break;
            }
        }
        else if (opt == 4) // 100000 csv
        {
            s.loadData("organizations-100000.csv");
            system("CLS");
            int m2 = m.subMenu();
            int m3;
            if (m2 == 1) // bubble sort
            {
                m3 = m.subMenu2();
                if (m3 == 1)
                {
                    double start = clock();
                    s.bubbleSort_index(f4i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    double start = clock();
                    s.bubbleSort_Emp(f4E);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if (m2 == 2) // selection sort
            {
                m3 = m.subMenu2();
                double start = clock();

                if (m3 == 1)
                {
                    s.selectionSort_Index(f4i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    s.selectionSort_Emp(f4E);
                    m.Time(start);
                    m.clearScreen();
                }
            }
            else if (m2 == 3) // insertion sort
            {
                m3 = m.subMenu2();
                    double start = clock();

                if (m3 == 1)
                {
                    s.insertionSort_index(f4i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    s.insertionSort_Emp(f4E);
                    m.Time(start);
                    m.clearScreen();
                }
            }
            else if (m2 == 4) // Merge Sort
            {
                m3 = m.subMenu2();
                double start = clock();

                //s.loadData("organizations-100000.csv");
                if (m3 == 1)
                {
                    s.mergeSort_Index(0, 100000);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    s.mergeSort_Emp(0, 100000);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if (m2 == 5) // Quick Sort
            {
                m3 = m.subMenu2();
                    double start = clock();

                //s.loadData("organizations-100000.csv");
                if (m3 == 1)
                {
                    s.quickSort_Index(s.vt, 0, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    s.quickSort_Emp(s.vt, 0, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if (m2 == 6) // Heap Sort
            {
                m3 = m.subMenu2();
                    double start = clock();

                //s.loadData("organizations-100000.csv");
                if (m3 == 1)
                {
                    s.heapSort_Index(s.vt, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    s.heapSort_Emp(s.vt, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
             else if(m2 == 7) //Count Sort
            {
                m3 = m.subMenu2();
                    double start = clock();

                //s.loadData("organizations-100000.csv");
                if(m3 == 1)
                {
                    s.countSort_I(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    s.countSort_E(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 8) // Radix Sort
            {
                m3 = m.subMenu2();
                    double start = clock();

                //s.loadData("organizations-100000.csv");
                if(m3 == 1)
                {
                    s.radixSort_Index(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    s.radixSort_Emp(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 9) //Bucket Sort
            {
                m3 = m.subMenu2();
                    double start = clock();

                //s.loadData("organizations-100000.csv");
                if(m3 == 1)
                {
                    s.bucketSort_Index(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    s.bucketSort_Emp(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 10)
            {
                break;
            }
        }
        else if (opt == 5) // 500000csv
        {
            s.loadData("organizations-500000.csv");
            system("CLS");
            int m2 = m.subMenu();
            int m3;
            if (m2 == 1) // bubble sort
            {
                m3 = m.subMenu2();
                    double start = clock();

                if (m3 == 1)
                {
                    s.bubbleSort_index(f5i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    s.bubbleSort_Emp(f5E);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if (m2 == 2) // selection sort
            {
                m3 = m.subMenu2();
                    double start = clock();

                if (m3 == 1)
                {
                    s.selectionSort_Index(f5i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    s.selectionSort_Emp(f5E);
                    m.Time(start);
                    m.clearScreen();
                }
            }
            else if (m2 == 3) // insertion sort
            {
                m3 = m.subMenu2();
                    double start = clock();

                if (m3 == 1)
                {
                    s.insertionSort_index(f5i);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    s.insertionSort_Emp(f5E);
                    m.Time(start);
                    m.clearScreen();
                }
            }
            else if (m2 == 4) // Merge Sort
            {
                m3 = m.subMenu2();
                    double start = clock();

                //s.loadData("organizations-500000.csv");
                if (m3 == 1)
                {
                    s.mergeSort_Index(0, 500000);
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    s.mergeSort_Emp(0, 500000);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "wrong input" << endl;
                }
            }
            else if (m2 == 5) // Quick Sort
            {
                m3 = m.subMenu2();
                    double start = clock();
                if (m3 == 1)
                {
                    s.quickSort_Index(s.vt, 0, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    s.quickSort_Emp(s.vt, 0, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if (m2 == 6) // Heap Sort
            {
                m3 = m.subMenu2();
                    double start = clock();
                
                if (m3 == 1)
                {
                    s.heapSort_Index(s.vt, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else if (m3 == 2)
                {
                    s.heapSort_Emp(s.vt, s.vt.size());
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
             else if(m2 == 7) //Count Sort
            {
                m3 = m.subMenu2();
                    double start = clock();

                //s.loadData("organizations-500000.csv");
                if(m3 == 1)
                {
                    s.countSort_I(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    s.countSort_E(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 8) // Radix Sort
            {
                m3 = m.subMenu2();
                    double start = clock();

                //s.loadData("organizations-500000.csv");
                if(m3 == 1)
                {
                    s.radixSort_Index(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    s.radixSort_Emp(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 9) //Bucket Sort
            {
                m3 = m.subMenu2();
                    double start = clock();

                //s.loadData("organizations-500000.csv");
                if(m3 == 1)
                {
                    s.bucketSort_Index(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                 else if (m3 == 2)
                {
                    s.bucketSort_Emp(s.vt);
                    m.Time(start);
                    m.clearScreen();
                }
                else
                {
                    cout << "You Entered Wrong" << endl;
                }
            }
            else if(m2 == 10)
            {
                break;
            }
        }
        else if(opt == 6)
        {
            s.addinfile("Sorting.csv");
        }
        else if (opt == 7)
        {
            cout << "You entered Exit Option" << endl;
            break;
        }
        else
        {
            cout << "You Entered Wrong Option" << endl;
        }
    }
}
