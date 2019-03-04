#include"Class.h";

int student::counter=0;
student::student()
{
	++counter;
	ID=counter;
	quizcapacity=3;
	quizTaken=0;
	quizScore=new float [quizcapacity];
	for(int i=0;i<quizcapacity;i++)
		quizScore[i]=-1;
	GPA=0.0;
}

student::student(int quizcap,int gpa)
{
	++counter;
	ID=counter;
	quizcapacity=quizcap;
	quizTaken=0;
	quizScore=new float[quizcapacity];
	for(int i=0;i<quizcapacity;i++)
	quizScore[i]=-1;
	GPA=gpa;
}

student::student(const student & otherstudent)
{
	ID=otherstudent.ID;
	quizcapacity=otherstudent.quizcapacity;
	quizTaken=otherstudent.quizTaken;
    quizScore=new float[quizcapacity];
	for(int i=0;i<quizTaken;i++)
	{
		quizScore[i]=otherstudent.quizScore[i];
	}
	GPA=otherstudent.GPA;
}

student::~student()
{
	delete [] quizScore;
}

void student::addQuizScore(int inputscore)
{
	if(quizcapacity>quizTaken)
	{
		quizScore[quizTaken]=inputscore;
		quizTaken++;
	}
	else
		cout<<"No space to add quiz score"<<endl;
}

void student::setGPA(float inputgpa)
{
	GPA=inputgpa;
}

float student::getGPA()const
{
	return GPA;
}

void student::print()const
{
	cout<<"Student ID :"<<ID<<endl;
	cout<<"GPA :"<<GPA<<endl;
	cout<<"Quizzes Taken :"<<quizTaken<<endl;
	cout<<"Score in Quizzes :"<<endl;
	for(int i=0;i<quizTaken;i++)
	{
		cout<<"Quizz "<<i<<" Score "<<quizScore[i]<<endl;
	}
	cout<<endl;
}
bool student::compare(student otherstudent)
{
	if(GPA>otherstudent.GPA)
	{
	return true;
	}
	else
		return false;
}

void student::updateScore(int quiznum,int newscore)
{
	
	if(quizScore[quiznum]!=-1)
		quizScore[quiznum]=newscore;
       else
		cout<<"Quizz "<<quiznum<<" not taken yet"<<endl;
}