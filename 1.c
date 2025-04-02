
int main() {
   
    int totalQuestions = 75;
    int cppQuestions = 10;
    int cQuestions = 30;
    int javaQuestions = 35;


    float cppCorrectPercentage = 0.70f;
    float cCorrectPercentage = 0.40f;
    float javaCorrectPercentage = 0.60f;
     int cppCorrectAnswers = cppCorrectPercentage * cppQuestions;
    int cCorrectAnswers = cCorrectPercentage * cQuestions;
    int javaCorrectAnswers = javaCorrectPercentage * javaQuestions;

    int totalCorrectAnswers = cppCorrectAnswers + cCorrectAnswers + javaCorrectAnswers;

    float requiredPercentage = 0.60f;
    int requiredMarks = requiredPercentage * totalQuestions;

    int marksMissed = requiredMarks - totalCorrectAnswers;

    printf("The geek missed the interview call by %d marks.\n", marksMissed);

    return 0;
}

