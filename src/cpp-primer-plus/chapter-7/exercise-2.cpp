#include <iostream>

int input(double[]);

double calculateAverage(const double[], int);

void output(double[], int);

const int SCORE_NUMBER = 10;

int main() {
    using namespace std;
    int scoreNumber;
    double scores[SCORE_NUMBER] = {0.0};

    scoreNumber = input(scores);
    double average = calculateAverage(scores, scoreNumber);
    output(scores, scoreNumber);
    cout << "平均数 : " << average << endl;

    return 0;
}

int input(double scores[]) {
    using namespace std;

    int i;
    for (i = 0; i < SCORE_NUMBER; ++i) {
        cout << "输入高尔夫成绩 : ";
        double score;
        cin >> score;
        if (score <= 0.0) {
            break;
        }
        scores[i] = score;
    }
    return i;
}

double calculateAverage(const double scores[], int scoreNumber) {
    double sum = 0;
    for (int i = 0; i < scoreNumber; ++i) {
        sum += scores[i];
    }
    return sum / scoreNumber;
}

void output(double scores[], int n) {
    int i;
    for (i = 0; i < n; ++i)
        std::cout << scores[i] << " ";
    std::cout << std::endl;
}