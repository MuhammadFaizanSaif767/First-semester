#include <iostream>
#include <fstream>
using namespace std;

int main()
{ int columns=3,rows=3,sum=0,counter=0,maxval=0,save=0;
int array[rows][columns]={{1,2,33},{4,5,6},{9,2,1}};
for(int r=0;r<rows;r++){
    for(int c=0;c<columns;c++){
        sum=sum+array[r][c];

        }
            save=sum;
           sum=0;
            if(save>maxval){
                maxval=save;
                counter=r;
                counter+=1;
            }
    }
cout<<"the row index with max number is: "<<counter;
    return 0;
}
