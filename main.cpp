#include <iostream>
#include<bits/stdc++.h>
#define random(x) (rand()%x)
using namespace std;
int Symbol[6]={0};
int topics_num;
int max_num;
int questionNum = 0;
void Generation_four_operations()
{
    ofstream file("Generation_four_operations.txt",ios::out|ios::ate);
    srand((int)time(0) +questionNum);
    for(int j=0;j<topics_num;j++)
    {
        if(Symbol[4])///������С��
        {
            if(Symbol[5])///����������
            {
                double ans1=(random(max_num)+1)*0.4;
                file<<ans1;
                cout<<ans1;
                questionNum++;
                while(1)
                {
                    int choice=random(4);
                    questionNum++;
                    if(choice==0&&Symbol[0]==1)
                    {
                        file<<'+';
                        cout<<'+';
                        break;
                    }
                    if(choice==1&&Symbol[1]==1)
                    {
                        file<<'-';
                        cout<<'-';
                        break;
                    }
                    if(choice==2&&Symbol[2]==1)
                    {
                        file<<"��";
                        cout<<"��";
                        break;
                    }
                    if(choice==3&&Symbol[3]==1)
                    {
                        file<<"��";
                        cout<<"��";
                        break;
                    }
                }
                file<<"(";
                cout<<"(";
                double ans2=(random(max_num)+1)*0.4;
                file<<ans2;
                cout<<ans2;
                while(1)
                {
                    int choice=random(4);
                    questionNum++;
                    if(choice==0&&Symbol[0]==1)
                    {
                        file<<'+';
                        cout<<'+';
                        break;
                    }
                    if(choice==1&&Symbol[1]==1)
                    {
                        file<<'-';
                        cout<<'-';
                        break;
                    }
                    if(choice==2&&Symbol[2]==1)
                    {
                        file<<"��";
                        cout<<"��";
                        break;
                    }
                    if(choice==3&&Symbol[3]==1)
                    {
                        file<<"��";
                        cout<<"��";
                        break;
                    }
                }
                double ans3=(random(max_num)+1)*0.4;
                cout<<ans3;
                cout<<")";
                cout<<"="<<endl;
                file<<ans3;
                file<<")";
                file<<"="<<endl;
            }
            else
            {
                double ans4=(random(max_num)+1)*0.4;
                cout<<ans4;
                file<<ans4;
                questionNum++;
                while(1)
                {
                    int choice=random(4);
                    questionNum++;
                    if(choice==0&&Symbol[0]==1)
                    {
                        file<<'+';
                        cout<<'+';
                        break;
                    }
                    if(choice==1&&Symbol[1]==1)
                    {
                        file<<'-';
                        cout<<'-';
                        break;
                    }
                    if(choice==2&&Symbol[2]==1)
                    {
                        file<<"��";
                        cout<<"��";
                        break;
                    }
                    if(choice==3&&Symbol[3]==1)
                    {
                        file<<"��";
                        cout<<"��";
                        break;
                    }
                }
                double ans5=(random(max_num)+1)*0.4;
                cout<<ans5;
                cout<<"="<<endl;
                file<<ans5;
                file<<"="<<endl;
            }
        }
        else
        {
            if(Symbol[5])///����������
            {
                int anss1=random(max_num)+1;
                cout<<anss1;
                file<<anss1;
                questionNum++;
                while(1)
                {
                    int choice=random(4);
                    questionNum++;
                    if(choice==0&&Symbol[0]==1)
                    {
                        cout<<'+';
                        file<<'+';
                        break;
                    }
                    if(choice==1&&Symbol[1]==1)
                    {
                        cout<<'-';
                        file<<'-';
                        break;
                    }
                    if(choice==2&&Symbol[2]==1)
                    {
                        cout<<"��";
                        file<<"��";
                        break;
                    }
                    if(choice==3&&Symbol[3]==1)
                    {
                        cout<<"��";
                        file<<"��";
                        break;
                    }
                }
                int anss2=random(max_num)+1;
                cout<<"(";
                cout<<anss2;
                file<<"(";
                file<<anss2;
                while(1)
                {
                    int choice=random(4);
                    questionNum++;
                    if(choice==0&&Symbol[0]==1)
                    {
                        cout<<'+';
                        file<<'+';
                        break;
                    }
                    if(choice==1&&Symbol[1]==1)
                    {
                        cout<<'-';
                        file<<'-';
                        break;
                    }
                    if(choice==2&&Symbol[2]==1)
                    {
                        cout<<"��";
                        file<<"��";
                        break;
                    }
                    if(choice==3&&Symbol[3]==1)
                    {
                        cout<<"��";
                        file<<"��";
                        break;
                    }
                }
                int anss3=random(max_num)+1;
                cout<<anss3;
                cout<<")";
                cout<<"="<<endl;
                file<<anss3;
                file<<")";
                file<<"="<<endl;
            }
            else
            {
                int anss4=random(max_num)+1;
                cout<<anss4;
                file<<anss4;
                questionNum++;
                while(1)
                {
                    int choice=random(4);
                    questionNum++;
                    if(choice==0&&Symbol[0]==1)
                    {
                        file<<'+';
                        cout<<'+';
                        break;
                    }
                    if(choice==1&&Symbol[1]==1)
                    {
                        file<<'-';
                        cout<<'-';
                        break;
                    }
                    if(choice==2&&Symbol[2]==1)
                    {
                        file<<"��";
                        cout<<"��";
                        break;
                    }
                    if(choice==3&&Symbol[3]==1)
                    {
                        file<<"��";
                        cout<<"��";
                        break;
                    }
                }
                int anss5=random(max_num)+1;
                cout<<anss5;
                cout<<"="<<endl;
                file<<anss5;
                file<<"="<<endl;
            }
        }
    }
    return ;
}
int main()
{
    while(1)
    {
        int wrong_flag=0;
        cout<<"��ӭʹ����������ģ����"<<endl;
        cout<<"���������������"<<endl;
        cin>>topics_num;
        cout<<"�Ƿ���ӡ� + �����㣿 ����������1����֮����0"<<endl;
        int add_flag;
        cin>>add_flag;
        if(add_flag)
        {
            Symbol[0]=1;
            wrong_flag=1;

        }
        cout<<"�Ƿ���ӡ� - �����㣿 ����������1����֮����0"<<endl;
        int sub_flag;
        cin>>sub_flag;
        if(sub_flag)
        {
             Symbol[1]=1;
             wrong_flag=1;
        }
         cout<<"�Ƿ���ӡ� �� �����㣿 ����������1����֮����0"<<endl;
         int mul_flag;
         cin>>mul_flag;
         if(mul_flag)
         {
             Symbol[2]=1;
             wrong_flag=1;
         }
         cout<<"�Ƿ���ӡ� �� �����㣿 ����������1����֮����0"<<endl;
         int div_flag;
         cin>>div_flag;
         if(div_flag)
         {
             Symbol[3]=1;
             wrong_flag=1;
         }
         cout<<"�Ƿ���ӡ� С�� �����㣿 ����������1����֮����0"<<endl;
         int decimal_flag;
         cin>>decimal_flag;
         if(decimal_flag)
         {
             Symbol[4]=1;
         }
         cout<<"�Ƿ���ӡ� ���� �����㣿 ����������1����֮����0"<<endl;
         int brackets_flag;
         cin>>brackets_flag;
         if(brackets_flag)
         {
             Symbol[5]=1;
         }
         while(1)
         {
             cout<<"���������������������ȡֵ��Χ��ע���粻����100������100����"<<endl;
             cin>>max_num;
             if(max_num<=0)
             {
                cout<<"����С��0���������룡"<<endl;
             }
             else
             {
                 break;
             }
         }
         if(wrong_flag==0)
         {
             cout<<"δѡ������޷������������㣬������ѡ��"<<endl;
         }
         else
         {
             break;
         }
    }
    Generation_four_operations();
    cout<<"��ӡ����ļ���Ϊ:Generation_four_operations.txt"<<endl;
    //file<<max_num<<"   hello c++!\n";
   /* FILE* fp;
	fp = fopen("sizeyunsuan.txt", "w+");
	fprintf(fp, "%d ", max_num);*/
    return 0;
}
