#include <iostream>

class TestScores {
private:
    double score1, score2, score3;

public:
    // Constructor
    TestScores(double s1, double s2, double s3) : score1(s1), score2(s2), score3(s3) {}

    // Accessor functions
    double getScore1() const { return score1; }
    double getScore2() const { return score2; }
    double getScore3() const { return score3; }

    // Mutator functions
    void setScore1(double s1) { score1 = s1; }
    void setScore2(double s2) { score2 = s2; }
    void setScore3(double s3) { score3 = s3; }

    // Member function to calculate average
    double calculateAverage() const {
        return (score1 + score2 + score3) / 3.0;
    }
};

int main() {
    double score1, score2, score3;

    // Get test scores from the user
    std::cout << "Enter the first test score: ";
    std::cin >> score1;
    std::cout << "Enter the second test score: ";
    std::cin >> score2;
    std::cout << "Enter the third test score: ";
    std::cin >> score3;

    // Create an instance of the TestScores class
    TestScores scores(score1, score2, score3);

    // Display the average of the scores
    std::cout << "Average score: " << scores.calculateAverage() << std::endl;

    return 0;
}
