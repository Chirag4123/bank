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
