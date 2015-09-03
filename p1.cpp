#include "p1.h"
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;

class Data {
    const int operator[] (size_t i) const;
    //int& operator[] (size_t i){
    //    cout<<"Ya!!!!"<<endl;
    //}
    void setValue(){
        ;
    }
    private:
        int *_cols;
        int Value;
};

int main(){
    fstream fin;
    fin.open("p1.txt",ios::in);
    
    string csvFile;
    fin>>csvFile;
    
    int i=0;
    int tmp=0;
    while(i<csvFile.length()){
        if(csvFile[i]==','){
            tmp=0;
            cout<<"\t";
            i++;
        }
        else if(csvFile[i]=='^'){
            tmp=0;
            cout<<endl;
            i=i+2;
        }
        else{
            tmp=tmp*10+(csvFile[i]-'0');
            i++;
            if(csvFile[i]-'0'<=9&&csvFile[i]-'0'>-1)
                continue;
            else
                cout<<tmp;
        }
    }
    
    return 0;
}