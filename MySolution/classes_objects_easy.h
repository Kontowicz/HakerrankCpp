#pragma once
#include <iostream>
#include <vector>

class Student
{
public:
	void input()
	{
		for (int i = 0; i < 5; i++)
		{
			int tmp(0);
			std::cin >> tmp;
			score.push_back(tmp);
		}
	}

	int calculateTotalScore()
	{
		int sum(0);
		for (auto sum1 : score)
		{
			sum += sum1;
		}
		return sum;
	}
private:
	std::vector<double> score;
};

void classes()
{
	int n; // number of students
	std::cin >> n;
	Student *s = new Student[n]; // an array of n students

	for (int i = 0; i < n; i++) {
		s[i].input();
	}

	// calculate kristen's score
	int kristen_score = s[0].calculateTotalScore();

	// determine how many students scored higher than kristen
	int count = 0;
	for (int i = 1; i < n; i++) {
		int total = s[i].calculateTotalScore();
		if (total > kristen_score) {
			count++;
		}
	}

	// print result
	std::cout << count;
}
