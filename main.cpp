#include <iostream>
#include <string>
using namespace std;

int main() {


 int Mark[3][4];
 int sum=0;


  for (int x=0;x<3;x++){
        cout<<"Enter the Mark (Ex: 1 54 231 3) :";
        for(int j=0;j<4;j++){
            cin>>Mark[x][j];
            sum = sum + Mark[x][j];
    }
}
 for (int x=0;x<3;x++){
    for(int j=0;j<4;j++){
	cout<<endl<<"List Mark are :" <<Mark[x][j];
    }
}
cout<<endl<<endl<<"Total Mark = "<<sum;
  return 0;
}
