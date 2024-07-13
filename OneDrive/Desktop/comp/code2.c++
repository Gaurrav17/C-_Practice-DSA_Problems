

/* Code By Devi Sri Prasad */
#include<iostream>
using namespace std;
class Subject{
	public:
		string Sname;
		double Pe;
		double Att;
		double St;
		double Pmst;
		double ws;
		double q;
		double Ass;
		double Tmst;
		double total;
		double total1;
};
int main ()
{
	int n;
	cout<<"Enter no of Hybrid Subjects : ";
	cin>>n;
	cout<<endl;
	cout<<"NOTE : Enter all Subject Details."<<endl;
	cout<<endl;
	Subject s[n];
	for (int i=0;i<n;i++)
	{
		cout<<"\nEnter the Subject "<<i+1<<" Name : ";
		cin>>s[i].Sname;
		cout<<"\nEnter the Practical Evaluations : ";
		cin>>s[i].Pe;
		cout<<"\nEnter the Attendance Marks : ";
		cin>>s[i].Att;
		cout<<"\nEnter the Surprise Test Marks : ";
		double x;
		cin>>x;
		s[i].St=((x*4)/12.0);
		cout<<"\nEnter the Practical Mst Marks : ";
		cin>>x;
		s[i].Pmst=((x*15)/10.0);
		cout<<"\nEnter the Worksheets Marks."<<endl;
		for (int j=0;j<10;j++)
		{
			double y;
			cout<<"\nEnter the Worksheet "<<j+1<<" Marks : ";
			cin>>y;
			x=x+y;
		}
		s[i].ws=((x*45)/300.0);
		cout<<"\nEnter the quiz marks : ";
		cin>>s[i].q;
		cout<<"\nEnter the Assignment Marks : ";
		cin>>s[i].Ass;
		cout<<"\nEnter the Theory MST - 1 Marks : ";
		cin>>x;
		cout<<"\nEnter the Theory MST - 2 Marks : ";
		double y;
		cin>>y;
		s[i].Tmst=(x+y)/4.0;
		s[i].total=s[i].Pe+s[i].Att+s[i].St+s[i].Pmst+s[i].ws+s[i].q+s[i].Ass+s[i].Tmst;
        s[i].total1=(s[i].total/2.0);
	}
	cout<<"\n\nFinal Report. "<<endl;
	cout<<endl;
	cout<<"Subject Name "<<"\t"<<"Internal Marks"<<endl;
	for (int j=0;j<n;j++)
	{
		cout<<endl;
		cout<<s[j].Sname<<" "<<"\t\t"<<s[j].total1<<endl;
	}
	cout<<endl;
	cout<<endl;
	int a;
	cout<<"For Detailed Marks list Press 1 : "<<endl;
	cout<<endl;
	cout<<"For Exit                Press 2  : "<<endl;
	cout<<endl;
	cin>>a;
	if (a==1)
	{
		for (int i=0;i<n;i++)
		{
		cout<<"\n\nDetailed Result "<<endl;
		cout<<endl;
	  	cout<<"\nSubject Name              : "<<s[i].Sname<<endl;
		cout<<"\nPractical Evaluations     : "<<s[i].Pe<<endl;
		cout<<"\nAttendanece out of 2      : "<<s[i].Att<<endl;
		cout<<"\nSurprise Test out of 4    : "<<s[i].St<<endl;
		cout<<"\nPractical MST out of 15   : "<<s[i].Pmst<<endl;
		cout<<"\nWorksheet Marks out of 45 : "<<s[i].ws<<endl;
		cout<<"\nQuiz Marks out of 4       : "<<s[i].q<<endl;
		cout<<"\nAssignment Marks out of 10: "<<s[i].Ass<<endl;
		cout<<"\nTheory MST out of 20      : "<<s[i].Tmst<<endl;
		cout<<"\n"<<endl;
		cout<<"Total out of 70  : "<<s[i].total1<<endl;
		}
		cout<<endl;
		cout<<"Best Wishes from Devi Sri Prasad"<<endl;
		cout<<"Thank You!"<<endl;
		cout<<"Have a Good Day!"<<endl;
		return 0;
	}
	else
	{
		cout<<endl;
		cout<<"Best Wishes "<<endl;
		cout<<"Thank You!"<<endl;
		cout<<"Have a Good Day!"<<endl;
		return 0;
	}
}
