// runme.cpp
// coder: alex
// purpose: to run quick code tests

#include<iostream>
#include<cctype>
#include<string>
using namespace std;


int main() {
    
    cout << "Enter the number of students: ";
    
    int num_students = 0;
    
    cin >> num_students;
    
    cout << "Enter 4 scores: ";
    
    int scores_array[num_students];
    
    for (int i = 0; i < num_students; i++) {
        cin >> scores_array[i];
    }
    
    int best = scores_array[0];
    for (int i = 1; i < num_students; i++) {
        if (scores_array[i] > best) best = scores_array[i];
    }
    
    for (int i = 0; i < num_students; i++) {
        
        if (scores_array[i] >= best - 10) {
            cout << "Student " << i << " score is " << scores_array[i] << " and grade is A" << endl;
        } else if (scores_array[i] >= best - 20) {
            cout << "Student " << i << " score is " << scores_array[i] << " and grade is B" << endl;
        } else if (scores_array[i] >= best - 30) {
            cout << "Student " << i << " score is " << scores_array[i] << " and grade is C" << endl;
        } else if (scores_array[i] >= best - 40) {
            cout << "Student " << i << " score is " << scores_array[i] << " and grade is D" << endl;
        } else {
            cout << "Student " << i << " score is " << scores_array[i] << " and grade is F" << endl;
        }
    }
    
    return 0;
    
}

/*

  Student 0 score is 40 and grade is C
  Student 1 score is 55 and grade is B
  Student 2 score is 70 and grade is A
  Student 3 score is 58 and grade is B

*/