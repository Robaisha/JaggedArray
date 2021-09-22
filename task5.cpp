#include<iostream>
using namespace std;
int main(){
	float total_points=0;
	float total_credit_hr=0;
	float total_credit_points=0;
	float GPA=0;
	string name;
	int rows;
	int col;
	float **jag_arr=new float *[5];
	int size[5];
	size[0]=5;
	size[1]=4;
	size[2]=3;
	size[3]=3;
	size[4]=5;
	for(rows=0;rows<5;rows++){
		cout<<"Enter name of student ";
		cin>>name;
		cout<<"\nEnter grade point for student  "<<rows+1<<endl;
		int i=0;
		for(col=0;col<size[i];col++){
			cin>>jag_arr[rows][col];
			total_points+=jag_arr[rows][col];
			total_credit_points=total_points*3;
			total_credit_hr+=3;
			GPA=total_credit_points/total_credit_hr;
		}
		i++;
		
		cout<<"\nThe GPA is "<<GPA<<endl;
	}
	delete [] jag_arr;
}
