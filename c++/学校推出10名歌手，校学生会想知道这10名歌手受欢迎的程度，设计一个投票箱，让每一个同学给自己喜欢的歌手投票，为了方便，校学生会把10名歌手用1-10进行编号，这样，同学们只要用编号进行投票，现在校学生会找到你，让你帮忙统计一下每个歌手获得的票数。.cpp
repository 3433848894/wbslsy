//学校推出10名歌手，校学生会想知道这10名歌手受欢迎的程度，设计一个投票箱，让每一个同学给自己喜欢的歌手投票，为了方便，校学生会把10名歌手用1-10进行编号，这样，同学们只要用编号进行投票，现在校学生会找到你，让你帮忙统计一下每个歌手获得的票数。


#include<iostream>
using namespace std;
int main(){
	int a[500]={};
	int n=0,temp=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		a[temp]++;
	}
	cout<<"1 2 3 4 5 6 7 8 9 10"<<endl;
	for(int i=1;i<=10;i++){
		cout<<a[i]<<" ";
	}
    return 0;
}
