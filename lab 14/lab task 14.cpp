#include <iostream>
using namespace std;

// =======================================
// Function Prototypes
// =======================================

// Marks input lene ka function
void inputMarks(int marks[], int n);

// Average calculate karne ka function
float calculateAverage(int marks[], int n);

// Maximum marks find karne ka function
int findMaximum(int marks[], int n);

// Minimum marks find karne ka function
int findMinimum(int marks[], int n);

// Relative grading assign karne ka function
char assignGrade(int marks, float average);

// Result display karne ka function
void displayResult(int marks[], int n, float average);

// =======================================
// Main Function
// =======================================

int main()
{
    // Students ki total quantity
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Students ke marks store karne ke liye array
    int marks[n];

    // Functions call
    inputMarks(marks, n);

    float average = calculateAverage(marks, n);

    int maximum = findMaximum(marks, n);

    int minimum = findMinimum(marks, n);

    displayResult(marks, n, average);

    cout << "\n==============================" << endl;
    cout << "Class Average = " << average << endl;
    cout << "Maximum Marks = " << maximum << endl;
    cout << "Minimum Marks = " << minimum << endl;
    cout << "==============================" << endl;

    return 0;
}

// =======================================
// Function: inputMarks()
// =======================================

void inputMarks(int marks[], int n)
{
    // Har student ke marks input lena
    for(int i = 0; i < n; i++)
    {
        cout << "Enter marks of Student " << i + 1 << ": ";
        cin >> marks[i];
    }
}

// =======================================
// Function: calculateAverage()
// =======================================

float calculateAverage(int marks[], int n)
{
    // Total marks store karega
    int sum = 0;

    // Sare marks add karna
    for(int i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }

    // Average return karna
    return (float)sum / n;
}

// =======================================
// Function: findMaximum()
// =======================================

int findMaximum(int marks[], int n)
{
    // Pehla element maximum maan liya
    int max = marks[0];

    // Sab values compare karna
    for(int i = 1; i < n; i++)
    {
        if(marks[i] > max)
        {
            max = marks[i];
        }
    }

    return max;
}

// =======================================
// Function: findMinimum()
// =======================================

int findMinimum(int marks[], int n)
{
    // Pehla element minimum maan liya
    int min = marks[0];

    // Sab values compare karna
    for(int i = 1; i < n; i++)
    {
        if(marks[i] < min)
        {
            min = marks[i];
        }
    }

    return min;
}

// =======================================
// Function: assignGrade()
// =======================================

char assignGrade(int marks, float average)
{
    // Relative grading average ke hisab se

    if(marks >= average + 15)
    {
        return 'A';
    }
    else if(marks >= average + 5)
    {
        return 'B';
    }
    else if(marks >= average - 5)
    {
        return 'C';
    }
    else if(marks >= average - 15)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

// =======================================
// Function: displayResult()
// =======================================

void displayResult(int marks[], int n, float average)
{
    cout << "\n========== FINAL RESULT ==========\n";

    // Har student ka result display karna
    for(int i = 0; i < n; i++)
    {
        char grade = assignGrade(marks[i], average);

        cout << "Student " << i + 1
             << " | Marks = " << marks[i]
             << " | Grade = " << grade
             << endl;
    }
}