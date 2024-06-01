#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <queue>
#include <sstream>
#include <string>
#include <vector>
#include "SortBL.h"
using namespace std;
class SortDL
{
public:
    vector<SortBL> vt;
    void loadData(string fname)
    {
        fstream file;
        file.open(fname, ios::in);
        if (file.good())
        {
            cout << "file found" << endl;
            string line = "";
            getline(file, line); // getting 1st line
            line = "";
            while (getline(file, line))
            {
                int index, found, nofemploy;
                string organization, name, name2, website, country, industry, description, temp = "";
                stringstream string(line); // convert this string to stream
                getline(string, temp, ',');
                index = stoi(temp);
                temp = "";
                getline(string, organization, ',');
                getline(string, name, '"');
                if (getline(string, name, '"'))
                {
                    getline(string, name2, ',');
                    getline(string, website, ',');
                    getline(string, country, ',');
                    getline(string, description, ',');
                    getline(string, temp, ',');
                    stringstream convert;
                    convert << temp; // stoi replacement
                    convert >> found;
                    convert.clear();
                    temp = "";
                    getline(string, industry, ',');
                    getline(string, temp, ',');
                    convert << temp;
                    convert >> nofemploy;
                    convert.clear();
                    temp = "";
                }
                else
                {
                    stringstream string(name);
                    getline(string, name, ',');
                    getline(string, website, ',');
                    getline(string, country, ',');
                    getline(string, description, ',');
                    getline(string, temp, ',');
                    stringstream convert;
                    convert << temp; // stoi replacement
                    convert >> found;
                    convert.clear();
                    temp = "";
                    getline(string, industry, ',');
                    getline(string, temp, ',');
                    convert << temp;
                    convert >> nofemploy;
                    convert.clear();
                    temp = "";
                }
                SortBL s(index, organization, name, website, country, description, found, industry, nofemploy);
                vt.push_back(s);
                line = "";
            }
        }
        else
        {
            cout << "file not found" << endl;
        }
    }
    // Adding in file
    void addinfile(string filename)
    {
        ofstream myFile;
        myFile.open(filename, ios::out);
        // auto last = std::unique(vt.begin(), vt.end());
        // vt.erase(last, vt.end());
        for (int x = 0; x < vt.size(); x++)
        {
            myFile << vt[x].index << "," << vt[x].organization << "," << vt[x].website << "," << vt[x].country << "," << vt[x].description << "," << vt[x].found << "," << vt[x].industry << "," << vt[x].numOfEmployees << "," << vt[x].name << endl;
        }
    }
    // bubble Sort
    void bubbleSort_Emp(string filename)
    {
        int n = vt.size();
        for (int x = 0; x < n - 1; x++)
        {
            bool isSwapped = false;
            for (int y = 0; y < n - x - 1; y++)
            {
                if (vt[y].numOfEmployees > vt[y + 1].numOfEmployees)
                {
                    swap1(vt[y], vt[y + 1]);
                    isSwapped = true;
                }
            }
            if (!isSwapped)
            {
                break;
            }
        }
    }
    void bubbleSort_index(string filename)
    {
        int n = vt.size();
        for (int x = 0; x < n - 1; x++)
        {
            bool isSwapped = false;
            for (int y = 0; y < n - x - 1; y++)
            {
                if (vt[y].index > vt[y + 1].index)
                {
                    swap1(vt[y], vt[y + 1]);
                    isSwapped = true;
                }
            }
            if (!isSwapped)
            {
                break;
            }
        }
    }
    void swap1(SortBL &a, SortBL &b)
    {
        SortBL c;
        c = a;
        a = b;
        b = c;
    }
    // insertion
    void insertionSort_index(string fname)
    {
        int n = vt.size();
        for (int x = 1; x < n; x++)
        {
            int key = vt[x].index;
            int y = x - 1;
            while (y >= 0 && vt[y].index > key)
            {
                vt[y + 1].index = vt[y].index;
                y--;
            }
            vt[y + 1].index = key;
        }
    }

    void insertionSort_Emp(string fname)
    {
        int n = vt.size();
        for (int x = 1; x < n; x++)
        {
            int key = vt[x].numOfEmployees;
            int y = x - 1;
            while (y >= 0 && vt[y].numOfEmployees > key)
            {
                vt[y + 1].numOfEmployees = vt[y].numOfEmployees;
                y--;
            }
            vt[y + 1].numOfEmployees = key;
        }
    }
    // selectionsort
    void selectionSort_Emp(string fname)
    {
        int n = vt.size();
        for (int x = 0; x < n - 1; x++)
        {
            int minIndex = findMinimumusingemploy(vt, x, n);
            swap1(vt[x], vt[minIndex]);
        }
        cout << endl;
    }

    void selectionSort_Index(string fname)
    {
        int n = vt.size();
        for (int x = 0; x < n - 1; x++)
        {
            int minIndex = findMinimumusingindx(vt, x, n);
            swap1(vt[x], vt[minIndex]);
        }
        cout << endl;
    }

    // minimum
    int findMinimumusingindx(vector<SortBL> &vt, int start, int end)
    {
        int min = vt[start].index;
        int minIndex = start;
        for (int x = start; x < end; x++)
        {
            if (min > vt[x].index)
            {
                min = vt[x].index;
                minIndex = x;
            }
        }
        return minIndex;
    }
    int findMinimumusingemploy(vector<SortBL> &vt, int start, int end)
    {
        int min = vt[start].numOfEmployees;
        int minIndex = start;
        for (int x = start; x < end; x++)
        {
            if (min > vt[x].numOfEmployees)
            {
                min = vt[x].numOfEmployees;
                minIndex = x;
            }
        }
        return minIndex;
    }
    // Merge Sort
    void mergeusingindex(vector<SortBL> &vt, int start, int mid, int end)
    {
        int i = start;
        int j = mid + 1;
        queue<int> tempArr;
        while (i <= mid && j <= end)
        {
            if (vt[i].index < vt[j].index)
            {
                tempArr.push(vt[i].index);
                i++;
            }
            else
            {
                tempArr.push(vt[j].index);
                j++;
            }
        }
        while (i <= mid)
        {
            tempArr.push(vt[i].index);
            i++;
        }
        while (j <= end)
        {
            tempArr.push(vt[j].index);
            j++;
        }
        for (int x = start; x <= end; x++)
        {
            vt[x].index = tempArr.front();
            tempArr.pop();
        }
    }
    // using employ
    void mergeusingemploy(vector<SortBL> &vt, int start, int mid, int end)
    {
        int i = start;
        int j = mid + 1;
        queue<int> tempArr;
        while (i <= mid && j <= end)
        {
            if (vt[i].numOfEmployees < vt[j].numOfEmployees)
            {
                tempArr.push(vt[i].numOfEmployees);
                i++;
            }
            else
            {
                tempArr.push(vt[j].numOfEmployees);
                j++;
            }
        }
        while (i <= mid)
        {
            tempArr.push(vt[i].numOfEmployees);
            i++;
        }
        while (j <= end)
        {
            tempArr.push(vt[j].numOfEmployees);
            j++;
        }
        for (int x = start; x <= end; x++)
        {
            vt[x].numOfEmployees = tempArr.front();
            tempArr.pop();
        }
    }
    // mergesort
    void mergeSort_Emp(int start, int end)
    {
        if (start < end)
        {
            int mid = (start + end) / 2;
            mergeSort_Emp(start, mid);
            mergeSort_Emp(mid + 1, end);
            mergeusingemploy(vt, start, mid, end);
        }
    }
    void mergeSort_Index(int start, int end)
    {
        if (start < end)
        {
            int mid = (start + end) / 2;
            mergeSort_Index(start, mid);
            mergeSort_Index(mid + 1, end);
            mergeusingindex(vt, start, mid, end);
        }
    }
    // Partition for index
    int partitionI(vector<SortBL> &vt, int start, int end, int pivot)
    {
        int left = start;
        int right = end;
        while (left <= right)
        {
            while (vt[left].index < vt[pivot].index && left <= end)
                left++;
            while (vt[right].index >= vt[pivot].index && right >= start)
                right--;
            if (left < right)
                swap1(vt[left], vt[right]);
        }
        swap1(vt[right], vt[pivot]);
        return right;
    }
    // partition using employees
    int partitionE(vector<SortBL> &vt, int start, int end, int pivot)
    {
        int left = start;
        int right = end;
        while (left <= right)
        {
            while (vt[left].numOfEmployees < vt[pivot].numOfEmployees && left <= end)
                left++;
            while (vt[right].numOfEmployees >= vt[pivot].numOfEmployees && right >= start)
                right--;
            if (left < right)
                swap1(vt[left], vt[right]);
        }
        swap1(vt[right], vt[pivot]);
        return right;
    }
    // Quick Sort
    void quickSort_Index(vector<SortBL> &vt, int start, int end)
    {
        if (start < end)
        {
            int pivot = start;
            int mid = partitionI(vt, start + 1, end, pivot);
            cout << endl;
            quickSort_Index(vt, start, mid - 1);
            quickSort_Index(vt, mid + 1, end);
        }
    }
    void quickSort_Emp(vector<SortBL> &vt, int start, int end)
    {
        if (start < end)
        {
            int pivot = start;
            int mid = partitionE(vt, start + 1, end, pivot);
            cout << endl;
            quickSort_Emp(vt, start, mid - 1);
            quickSort_Emp(vt, mid + 1, end);
        }
    }
    // --------------Heap sort-----------
    void heapify_Index(vector<SortBL> &vt, int size, int index)
    {
        int maxIndex;
        while (true)
        {
            int lIdx = leftChildIndex(index);
            int rIdx = rightChildIndex(index);
            if (rIdx >= size)
            {
                if (lIdx >= size)
                    return;
                else
                    maxIndex = lIdx;
            }
            else
            {
                if (vt[lIdx].index >= vt[rIdx].index)
                    maxIndex = lIdx;
                else
                    maxIndex = rIdx;
            }
            if (vt[index].index < vt[maxIndex].index)
            {
                swap1(vt[index], vt[maxIndex]);
                index = maxIndex;
            }
            else
                return;
        }
    }
    void heapify_Emp(vector<SortBL> &vt, int size, int index)
    {
        int maxIndex;
        while (true)
        {
            int lIdx = leftChildIndex(index);
            int rIdx = rightChildIndex(index);
            if (rIdx >= size)
            {
                if (lIdx >= size)
                    return;
                else
                    maxIndex = lIdx;
            }
            else
            {
                if (vt[lIdx].numOfEmployees >= vt[rIdx].numOfEmployees)
                    maxIndex = lIdx;
                else
                    maxIndex = rIdx;
            }
            if (vt[index].numOfEmployees < vt[maxIndex].numOfEmployees)
            {
                swap1(vt[index], vt[maxIndex]);
                index = maxIndex;
            }
            else
                return;
        }
    }
    int leftChildIndex(int i)
    {
        return (2 * i) + 1;
    }
    int rightChildIndex(int i)
    {
        return (2 * i) + 2;
    }
    // HEAPSORT
    int heapSort_Index(vector<SortBL> &vt, int size)
    {
        for (int x = (size - 1) / 2; x >= 0; x--)
        {
            heapify_Index(vt, size, x);
        }
        for (int x = size - 1; x > 0; x--)
        {
            swap1(vt[0], vt[x]);
            heapify_Index(vt, x, 0);
        }
    }
    int heapSort_Emp(vector<SortBL> &vt, int size)
    {
        for (int x = (size - 1) / 2; x >= 0; x--)
        {
            heapify_Emp(vt, size, x);
        }
        for (int x = size - 1; x > 0; x--)
        {
            swap1(vt[0], vt[x]);
            heapify_Emp(vt, x, 0);
        }
    }
    //____________Counting Sort_______________
    // maximum Employee
    int E_maximum(vector<SortBL> &vt, int start, int end)
    {
        int max = vt[start].numOfEmployees;
        int maxIndex = start;
        for (int x = start; x < end; x++)
        {
            if (max < vt[x].numOfEmployees)
            {
                max = vt[x].numOfEmployees;
                maxIndex = x;
            }
        }
        return maxIndex;
    }
    // maximum index
    int I_maximum(vector<SortBL> &vt, int start, int end)
    {
        int max = vt[start].index;
        int maxIndex = start;
        for (int x = start; x < end; x++)
        {
            if (max < vt[x].index)
            {
                max = vt[x].index;
                maxIndex = x;
            }
        }
        return maxIndex;
    }
    // Counting Sort for Employees
    void countSort_E(vector<SortBL> &arr)
    {
        int m = E_maximum(arr, 0, arr.size());
        int max = vt[m].numOfEmployees;
        vector<int> count(max + 1);
        vector<SortBL> output(arr.size());
        for (int i = 0; i < arr.size(); i++)
        {
            count[arr[i].numOfEmployees]++;
        }
        for (int i = 1; i < count.size(); i++)
        {
            count[i] = count[i - 1] + count[i]; // cumulative sum
        }
        for (int x = arr.size() - 1; x >= 0; x--)
        {
            int index = count[arr[x].numOfEmployees] - 1;
            count[arr[x].numOfEmployees]--;
            output[index] = arr[x];
        }
        for (int x = 0; x < output.size(); x++)
        {
            arr[x] = output[x];
        }
    }
    // Counting Sort for index
    void countSort_I(vector<SortBL> &arr)
    {
        int m = I_maximum(arr, 0, arr.size());
        int max = vt[m].index;
        vector<int> count(max + 1);
        vector<SortBL> output(arr.size());
        for (int i = 0; i < arr.size(); i++)
        {
            count[arr[i].index]++;
        }
        for (int i = 1; i < count.size(); i++)
        {
            count[i] = count[i - 1] + count[i];
        }
        for (int x = arr.size() - 1; x >= 0; x--)
        {
            int index = count[arr[x].index] - 1;
            count[arr[x].index]--;
            output[index] = arr[x];
        }
        for (int x = 0; x < output.size(); x++)
        {
            arr[x] = output[x];
        }
    }
    //       ______________Radix Sort___________
    // Count for Employee
    void countingE(vector<SortBL> &arr, int place, int max)
    {
        vector<int> count(max + 1);
        vector<SortBL> output(arr.size());
        for (int x = 0; x < arr.size(); x++)
        {
            count[(arr[x].numOfEmployees / place) % 10]++;
        }
        for (int x = 1; x < count.size(); x++)
        {
            count[x] = count[x - 1] + count[x];
        }
        for (int x = arr.size() - 1; x >= 0; x--)
        {
            int index = count[(arr[x].numOfEmployees / place) % 10] - 1;
            count[(arr[x].numOfEmployees / place) % 10]--;
            output[index] = arr[x];
        }
        for (int x = 0; x < output.size(); x++)
        {
            arr[x] = output[x];
        }
    }
    // Count for index
    void countingI(vector<SortBL> &arr, int place, int max)
    {
        vector<int> count(max + 1);
        vector<SortBL> output(arr.size());
        for (int x = 0; x < arr.size(); x++)
        {
            count[(arr[x].index / place) % 10]++;
        }
        for (int x = 1; x < count.size(); x++)
        {
            count[x] = count[x - 1] + count[x];
        }
        for (int x = arr.size() - 1; x >= 0; x--)
        {
            int index = count[(arr[x].index / place) % 10] - 1;
            count[(arr[x].index / place) % 10]--;
            output[index] = arr[x];
        }
        for (int x = 0; x < output.size(); x++)
        {
            arr[x] = output[x];
        }
    }
    // Radix Sort for index
    void radixSort_Index(vector<SortBL> &arr)
    {
        int m = I_maximum(arr, 0, arr.size());
        int max = vt[m].index;
        int place = 1;
        while ((max / place) > 0)
        {
            countingI(arr, place, max);
            place = place * 10;
        }
    }
    // Radix Sort for employees
    void radixSort_Emp(vector<SortBL> &arr)
    {
        int m = E_maximum(arr, 0, arr.size());
        int max = vt[m].numOfEmployees;
        int place = 1;
        while ((max / place) > 0)
        {
            countingE(arr, place, max);
            place = place * 10;
        }
        for (int i = 0; i < 6; i++)
        {
            cout << arr[i].numOfEmployees << endl;
        }
    }
    // bucket sort for index
 void bucketSort_Index(vector<SortBL> &arr)
    {
       
        int maxVal= I_maximum(arr,0,arr.size());
        vector<vector<SortBL>> bucket(arr[maxVal].index + 1);
        for (int i = 0; i < arr.size() - 1; i++)
        {
            bucket[arr[i].index ].push_back(arr[i]);
        }
        int k = 0;
        for (int i = 0; i < bucket.size(); i++)
        {
            if (bucket[i].size() > 0)
            {
                for (int j = 0; j < bucket[i].size(); j++)
                {
                    arr[k] = bucket[i][j];
                    k++;
                }
            }
        }
        for (int i = 0; i < 6; i++)
        {
            cout << arr[i].index << endl;
        }
    }
    // Bucket Sort for employees
    void bucketSort_Emp(vector<SortBL> &arr)
    {
        int maxVal;
        maxVal=E_maximum(arr,0,arr.size());
        int m=arr[maxVal].numOfEmployees;
        vector<vector<SortBL>> bucket(m + 1);
        for (int i = 0; i < arr.size() - 1; i++)
        {
            bucket[arr[i].numOfEmployees ].push_back(arr[i]);
        }
        int k = 0;
        for (int i = 0; i < bucket.size(); i++)
        {
            if (bucket[i].size() > 0)
            {
                for (int j = 0; j < bucket[i].size(); j++)
                {
                    arr[k] = bucket[i][j];
                    k++;
                }
            }
        }
        for (int i = 0; i < 6; i++)
        {
            cout << arr[i].numOfEmployees << endl;
        }
    }
   
};