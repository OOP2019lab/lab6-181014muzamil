#include<iostream>
using namespace std;

class student
{
static int counter;
int ID;
float * quizScore;
int quizcapacity;
int quizTaken;
float GPA;

public:
	student();
	student(int,int);
	student (const student & otherstudent);
	~student();
	void addQuizScore(int);
	void setGPA(float);
	float getGPA()const;
	void print() const;
	bool compare (student);
	void updateScore(int,int);
	void printstudentarray(student * arr,int size);
};