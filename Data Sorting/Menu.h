 #include<iostream>
 #include<chrono>
 #include<conio.h>
using namespace std;
class menus{
    public:
    int mainMenu()
        {
            int a;
            cout<<"Select the file to be sorted"<<endl;
            cout<<"1. 100 data."<<endl;
            cout<<"2. 1000 data."<<endl;
            cout<<"3. 10000 data."<<endl;
            cout<<"4. 100000 data."<<endl;
            cout<<"5. 500000 data."<<endl;
            cout<<"6. Write Data"<<endl;
            cout<<"7. Exit"<<endl;
            cout<<"Your Option: ";
            cin>> a;
            return a;
        }
    int subMenu()
    {
        int a;
        cout<<"1. Bubble Sort."<<endl;
        cout<<"2. Selection Sort."<<endl;
        cout<<"3. Insertion Sort. "<<endl;
        cout<<"4. Merge Sort."<<endl;
        cout<<"5. Quick Sort."<<endl;
        cout<<"6. Heap Sort."<<endl;
        cout<<"7. Counting Sort."<<endl;
        cout<<"8. Radix Sort."<<endl;
        cout<<"9. Bucket Sort."<<endl;
        cout<<"10. Exit"<<endl;
        cout<<"Option: ";
        cin>> a;
        return a;
    }

     void Time(double start)
    { 
        double stop = clock();
        cout << "time: " << (stop - start)/1000 << endl;
    }
    int subMenu2()
    {
        int a;
        cout<<"How to sort data?"<<endl;
        cout<<"1. By Index"<<endl;
        cout<<"2. By Number of Employees"<<endl;
        cin>> a;
        return a;
    }
    void clearScreen()
    {
        cout<<"Enter any key"<<endl;
        getch();
    }
};