#include <iostream>

int main() {
    // Marks for 4 subjects (out of 100)
    int marks[] = {85, 66, 75, 80};
    int totalSubjects = 4;
    
    // Standard credit hours assigned to each subject (assuming 4 credits per subject)
    int credits[] = {4, 4, 4, 4}; 

    // 1. Calculate Total and Average Marks
    int totalMarks = 0;
    for (int i = 0; i < totalSubjects; i++) {
        totalMarks += marks[i];
    }
    float average = (float)totalMarks / totalSubjects;

    // 2. Calculate SGPA based on a standard 10-point grading scale
    float totalGradePointsEarned = 0.0;
    int totalCredits = 0;

    for (int i = 0; i < totalSubjects; i++) {
        float gradePoint = 0.0;
        
        // Convert marks to grade points (10-point scale conversion)
        if (marks[i] >= 90) gradePoint = 10.0;
        else if (marks[i] >= 80) gradePoint = 9.0;
        else if (marks[i] >= 70) gradePoint = 8.0;
        else if (marks[i] >= 60) gradePoint = 7.0;
        else if (marks[i] >= 50) gradePoint = 6.0;
        else if (marks[i] >= 40) gradePoint = 5.0;
        else gradePoint = 0.0; // Fail

        totalGradePointsEarned += (gradePoint * credits[i]);
        totalCredits += credits[i];
    }

    float sgpa = totalGradePointsEarned / totalCredits;
    
    // Assuming this is the first/only semester, CGPA equals SGPA
    float cgpa = sgpa; 

    // Output Results
    std::cout << "--- Academic Performance ---" << std::endl;
    std::cout << "Total Marks: " << totalMarks << " / " << (totalSubjects * 100) << std::endl;
    std::cout << "Average Percentage: " << average << "%" << std::endl;
    std::cout << "SGPA: " << sgpa << std::endl;
    std::cout << "CGPA: " << cgpa << std::endl;

    return 0;
}
