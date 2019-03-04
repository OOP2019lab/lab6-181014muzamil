#include"Class.h";
void printstudentarray(student ** arr,int size)
{
for(int i=0;i<size;i++)
{
	(*arr[i]).print();
}
}

student * arrwith2gpa(student * arr,int size)
{
	student * arr2=new student[size];
	for(int i=0;i<size;i++)
	{
		if(arr[i].getGPA()>2.0)
			arr[i].setGPA(-1.0);
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i].getGPA()==-1.0)
		arr[i]=arr[i+1];
	}
	for(int i=0;arr[i].getGPA()!=-1.0;i++)
	{
		arr2[i]=arr[i];
	}
	return arr2;
}

void sort(student * arr,int size)
{
for(int i=0;i<size;i++)
{
	if(arr[i].getGPA()<arr[i+1].getGPA())
	{
	student temp(arr[i]);
	arr[i]=arr[i+1];
	arr[i+1]=temp;
	}
}
}

int main()
{
	student arr[3]={student(3,2.0),student(3,3.0),student(4,2.33)};//over con for id 1,2,3 because they are passed by parameters
	arr[0].addQuizScore(1);
	arr[0].addQuizScore(4);
	arr[0].addQuizScore(10);
	arr[1].addQuizScore(10);
	arr[1].addQuizScore(4);
	arr[1].addQuizScore(9);
	arr[2].addQuizScore(9);
	arr[2].addQuizScore(8);
	arr[2].addQuizScore(7);
	for(int i=0;i<3;i++)
		arr[i].print();

	sort(arr,3);
	student * arr2=arrwith2gpa(arr,3);

	cout<<endl<<endl;
	student ** dyarr=new student * [3];
	dyarr[0]=new student(3,2.0); //def con for id 4 because it is passed by parameters
	dyarr[1]=new student(3,3.0); //def con for id 5 because it is passed by parameters
	dyarr[2]=new student(4,2.33); //def con for id 6 because it is passed by parameters
	(*dyarr[0]).addQuizScore(1);
	(*dyarr[0]).addQuizScore(4);
	(*dyarr[0]).addQuizScore(10);
	(*dyarr[1]).addQuizScore(10);
	(*dyarr[1]).addQuizScore(4);
	(*dyarr[1]).addQuizScore(9);
	(*dyarr[2]).addQuizScore(9);
	(*dyarr[2]).addQuizScore(8);
	(*dyarr[2]).addQuizScore(7);
	printstudentarray(dyarr,3);

	for(int i=0;i<3;i++)   //id 4,5,6 will be deleted here
{
	delete dyarr[i];
}
	delete [] dyarr;
    //the id which created at last will be destructed first
	//des for id 3
	//des for id 2
	//des for id 1
}