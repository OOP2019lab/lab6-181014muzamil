//#include"Class.h";
//
//int main()
//{
//	student s1;           // //def con for id 1 because no parameters are passed
//	s1.addQuizScore(10);  
//	s1.addQuizScore(3);
//	s1.addQuizScore(7);
//	s1.addQuizScore(1);
//	
//	
//	student s2(4,2);     // //over con for id 1 because it is passed by parameters
//	s2.addQuizScore(9);
//    s2.addQuizScore(4);
//    s2.addQuizScore(6);
//	s2.print();
//	
//	
//	student s3(s1);      // //copy con for id 1 because we are copying 1 in 3
//    s3.updateScore(1,3);
//    s3.updateScore(10,3);
//	
//	
//	bool stack=s1.compare(s2);
//	cout<<"compare :"<<stack<<endl;
//	
//	
//	s3.setGPA(3.0);
//	cout<<endl;
//	s3.print();
//	cout<<endl;
//	s1.print();
// //the id which created at last will be destructed first
// //des for id 1 because id 1 copies in id 3
// //des for id 2 
// //dea for id 1
//}