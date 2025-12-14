/*1. You are given a text file, named “students.txt” that contains students’ records. Each Line
contains information of a single student in the form of <Student Name, Roll No,
Department>.
A. Read the records from the file into an array of structures.
B. Three Options will turn up: (1) Bubble Sort, (2) Binary Search, and (3) Quit. In the
following we describe what your C/C++ program will do on Selecting the options.
(1) Bubble Sort: Sorts the records based on Student Name. If more than One students has
the same name, then sort them on their roll no.
(2) Binary Search: Given a student name, the function will return all the Student records
<Student Name, Roll No, Department> having the Student name.
(3) Quit: Exit the program.*/

#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

struct student
{
    string name;
    int roll_no;
    string department;
};

// Function to sort the students using Bubble Sort
void bubbleSort(vector<student> &students)
{
    int n = students.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
         {
            if (students[j].name > students[j + 1].name ||
                (students[j].name == students[j + 1].name && students[j].roll_no > students[j + 1].roll_no))
            {
                swap(students[j], students[j + 1]);
            }
        }
    }
}

// Function to perform Binary Search
void binarySearch(const vector<student>& students, const string& targetName) {
    int left = 0, right = students.size() - 1;
    vector<student> results;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (students[mid].name == targetName) {
            // Find all records with the same name
            int i = mid;
            while (i >= 0 && students[i].name == targetName) {
                results.push_back(students[i]);
                i--;
            }
            i = mid + 1;
            while (i < students.size() && students[i].name == targetName) {
                results.push_back(students[i]);
                i++;
            }
            break;
        } else if (students[mid].name < targetName) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Display results
    if (results.empty()) {
        cout << "No student found with the name: " << targetName << endl;
    } else {
        for (const student& student : results) {
            cout << "Name: " << student.name << ", Roll No: " << student.roll_no 
                 << ", Department: " << student.department << endl;
        }
    }
}



main()
{
    // opening the file
    ifstream inFile("students.txt");
    if (!inFile)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // vector to store student data
    vector<student> students;

    // read file line by line
    string line;
    while (getline(inFile, line))
    {
        student student;

        // parse the line
        int pos1 = line.find(',');
        int pos2 = line.find(',', pos1 + 1);

        student.name = line.substr(0, pos1);
        student.roll_no = stoi(line.substr(pos1 + 1, pos2 - pos1 - 1));
        student.department = line.substr(pos2 + 1);

        // add student to our vector
        students.push_back(student);
    }

    inFile.close();

    // Print the student data
    for (int i = 0; i < students.size(); ++i)
    {
        cout << "Name: " << students[i].name
             << ", Roll No: " << students[i].roll_no
             << ", Department: " << students[i].department << endl;
    }

    int choice;
    do {
        cout << "\nMenu:\n1. Bubble Sort\n2. Binary Search\n3. Quit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                bubbleSort(students);
                cout << "Records sorted successfully!" << endl;
                break;
            }
            case 2: {
                string targetName;
                cout << "Enter the student name to search: ";
                cin.ignore();
                getline(cin, targetName);
                binarySearch(students, targetName);
                break;
            }
            case 3:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);


    return 0;
}