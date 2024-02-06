#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    string student_ID,name,semester;
    int th_mark[3]={0},pr_mark[3]={0},credit[3]={0};
    string th_grade[3],pr_grade[3];
    int th_grade_point[3]={0},pr_grade_point[3]={0};
    cout<<"Student Id   : ";
    cin>>student_ID;
    fflush(stdin);
    cout<<"Student Name : ";
    cin>>name;
    fflush(stdin);
    cout<<"Semester     : ";
    cin>>semester;
    fflush(stdin);
    cout<<"Enter Subject Names :-"<<endl;
    string subject[3];
    cout<<"Enter Name Of Subject 1 : ";
    getline(cin,subject[0]);
    fflush(stdin);
    cout<<"Enter Name Of Subject 2 : ";
    getline(cin,subject[1]);
    fflush(stdin);
    cout<<"Enter Name Of Subject 3 : ";
    getline(cin,subject[2]);
    fflush(stdin);
    for(int i=0; i<3; i++)
    {
        cout<<"Enter The Marks Of "<<subject[i]<<endl;
        cout<<"Theory Marks : ";
        cin>>th_mark[i];
        fflush(stdin);
        cout<<"Practical Marks : ";
        cin>>pr_mark[i];
        fflush(stdin);
//        cout<<"Enter The Credit Of The Subject : ";
//        cin>>credit[i];
//        fflush(stdin);
    }
    for(int i=0;i<3;i++){
        if(th_mark[i]>=80){
            th_grade[i]="AA";
            th_grade_point[i]=10;
        }
        if(pr_mark[i]>=80){
            pr_grade[i]="AA";
            th_grade_point[i]=10;
        }
        if(th_mark[i]<80 && th_mark[i]>=73){
            th_grade[i]="AB";
            th_grade_point[i]=9;
        }
        if(pr_mark[i]<80 && pr_mark[i]>=73){
            pr_grade[i]="AB";
            pr_grade_point[i]=9;
        }
        if(th_mark[i]<73 && th_mark[i]>=66){
            th_grade[i]="BB";
            th_grade_point[i]=8;
        }
        if(pr_mark[i]<73 && pr_mark[i]>=66){
            pr_grade[i]="BB";
            pr_grade_point[i]=8;
        }
        if(th_mark[i]<66 && th_mark[i]>=60){
            th_grade[i]="BC";
            th_grade_point[i]=7;
        }
        if(pr_mark[i]<66 && pr_mark[i]>=60){
            pr_grade[i]="BC";
            pr_grade_point[i]=7;
        }
        if(th_mark[i]<60 && th_mark[i]>=55){
            th_grade[i]="CC";
            th_grade_point[i]=6;
        }
        if(pr_mark[i]<60 && pr_mark[i]>=55){
            pr_grade[i]="CC";
            pr_grade_point[i]=6;
        }
        if(th_mark[i]<55 && th_mark[i]>=50){
            th_grade[i]="CD";
            th_grade_point[i]=5;
        }
        if(pr_mark[i]<55 && pr_mark[i]>=50){
            pr_grade[i]="CD";
            pr_grade_point[i]=5;
        }
        if(th_mark[i]<50 && th_mark[i]>=45){
            th_grade[i]="DD";
            th_grade_point[i]=4;
        }
        if(pr_mark[i]<50 && pr_mark[i]>=45){
            pr_grade[i]="DD";
            pr_grade_point[i]=4;
        }
        if(th_mark[i]<45){
            th_grade[i]="FF";
            th_grade_point[i]=0;
        }
        if(pr_mark[i]<45){
            pr_grade[i]="FF";
            pr_grade_point[i]=0;
        }

    }
//calculating SGPA
    float sgpa=0;
    float sum=0;
    for(int i=0;i<3;i++){
        sum=sum+th_grade_point[i]+pr_grade_point[i];
    }
    sgpa=(float)sum/(float)6;
//printing the content;
    cout<<endl<<endl<<"Printing The Details Of The Student :-"<<endl<<endl;
    cout<<"Student Id   : "<<student_ID<<endl;
    cout<<"Student Name : "<<name<<endl;
    cout<<"Semester     : "<<semester<<endl;
    cout<<endl<<endl;
    cout<<fixed<<setw(50)<<"Theory";
    cout<<fixed<<setw(23)<<"Practical"<<endl;
    for(int i=0;i<3;i++){
        cout<<subject[i];
        cout<<fixed<<setw(47-subject[i].size())<<th_grade[i];
        cout<<fixed<<setw(21)<<pr_grade[i];
        cout<<endl;
    }
    cout<<endl<<"SGPA : "<<setprecision(2)<<sgpa;
    return 0;
}
