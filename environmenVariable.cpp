#include<iostream>
using namespace std;
extern char **environ;
int main(){
	int i=0;
	for(i=0;environ[i]!=NULL;i++){
		cout<<environ[i]<<endl;
	}
}
