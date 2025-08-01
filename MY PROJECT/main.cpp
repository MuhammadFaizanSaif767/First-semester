#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
struct item{
    string ID;
     string name;
    int quantity;
    float price;
};
void search(){
    cout<<"ENTER THE ID TO SEARCH"<<endl;
    string input;
    cin>>input;
    item i;
   bool found=false;
   string header;

    ifstream file("create.txt");
    getline(file,header);
    while(file>>i.ID>>i.name>>i.quantity>>i.price){
        if(input==i.ID){
            cout<<"ID: "<<i.ID<<endl;
            cout<<"NAME: "<<i.name<<endl;
            cout<<"QUANTITY: "<<i.quantity<<endl;
            cout<<"PRICE: "<<i.price<<endl;
            found=true;
            break;
        }}if(!found)cout<< "ITEM WITH ID " << input << " NOT FOUND." << endl;
cout<<"-----------------------------------------------------"<<endl;
    cout<<" "<<endl;
  }

  void watch(){
      ifstream file("create.txt");
      string line;
      while(getline(file,line)){
        cout<<line<<endl;
        cout<<"-------------------------------------------------------"<<endl;
      }
   cout<<" "<<endl;}
void update(){
watch();
cout<<"ENTER ID OF THE ITEN YOU WANT TO UPDATE: "<<endl;
 string input;
    cin>>input;
    item i;
    bool found=false;
    ifstream file("create.txt");
    ofstream temp("temp.txt");
    string header;
    getline(file,header);
    temp<<header<<endl;
    while(file>>i.ID>>i.name>>i.quantity>>i.price){
        if(i.ID==input){found=true;
        cout<<"ENTER NEW DETAILS OF ITEMS: "<<endl;
        cout<<"ENTER NEW ID: ";
        cin>>i.ID;
        cout<<"ENTER NEW NAME: ";
        cin>>i.name;
        cout<<"ENTER NEW QUANTITY: ";
        cin>>i.quantity;
        cout<<"ENTER NEW PRICE: ";
        cin>>i.price;
        }
            temp<<i.ID<<"        "<<i.name<<"             "<<i.quantity<<"             "<<i.price<<endl;}

  file.close();
  temp.close();
  string line;
  if(found==true){
  ifstream file("temp.txt");
  ofstream ofile("create.txt");
  while (getline(file,line)){
  ofile<<line<<endl;}
  cout << "ITEM WITH ID " << input << " UPDATE SUCCESSFULLY." << endl;
    } else {
        cout << "ITEM WITH ID " << input << " NOT FOUND." << endl;


    cout << "-----------------------------------------------------" << endl;
    }}

void deletefunction() {
watch();
    cout << "ENTER THE ID OF THE ITEM YOU WANT TO DELETE: ";
    string input;
    cin>>input;
    item i;
    bool found=false;
    ifstream file("create.txt");
    ofstream temp("temp.txt");
    string header;
    getline(file,header);
    temp<<header<<endl;
    while(file>>i.ID>>i.name>>i.quantity>>i.price){
        if(i.ID!=input){
            temp<<i.ID<<"        "<<i.name<<"             "<<i.quantity<<"             "<<i.price<<endl;}
       else{found=true;} }
  file.close();
  temp.close();
  string line;
  if(found==true){
  ifstream file("temp.txt");
  ofstream ofile("create.txt");
  while (getline(file,line)){
  ofile<<line<<endl;}
  cout << "ITEM WITH ID " << input << " DELETED SUCCESSFULLY." << endl;
    } else {
        cout << "ITEM WITH ID " << input << " NOT FOUND." << endl;
    }

    cout << "-----------------------------------------------------" << endl;
    }
void additem() {
    cout << "ADD ITEMS: " << endl;
    cout << "How many items do you want to add? ";
    int input;
    cin >> input;

    item newItems[input];
    for (int j = 0; j < input; j++) {
        cout << "Enter ID: ";
        cin >> newItems[j].ID;
        cout << "Enter Name: ";
        cin >> newItems[j].name;
        cout << "Enter Quantity: ";
        cin >> newItems[j].quantity;
        cout << "Enter Price: ";
        cin >> newItems[j].price;
    }
    item i;
    ifstream temp("create.txt");
    ofstream file("temp.txt");
    string header;
    getline(temp, header);
    file << header << endl;
    while (temp >>i.ID >> i.name >> i.quantity >> i.price) {
        file << i.ID << "        " << i.name << "             " << i.quantity << "             " << i.price << endl;
    }
    for (int j = 0; j < input; j++) {
        file << newItems[j].ID << "        " << newItems[j].name << "             " << newItems[j].quantity << "             " << newItems[j].price << endl;
    }
    temp.close();
    file.close();
    ifstream tempFile("temp.txt");
    ofstream originalFile("create.txt");
    string line;
    while (getline(tempFile, line)) {
        originalFile << line << endl;
    }

    tempFile.close();
    originalFile.close();

    cout << "NEW ITEMS ADDED SUCCESSFULLY!" << endl;
    cout << "-----------------------------------------------------" << endl;
}







int main(){
    int input;

    do{
            cout<<"  FURNITURE MANGEMENT SYSTEM  "<<endl;
        cout<<"ENTER 1 TO  ADD NEW FURNITURE"<<endl;
        cout<<"ENTER 2 TO  SEARCH ITEM "<<endl;
        cout<<"ENTER 3 TO  WATCH THE FURNITURE "<<endl;
        cout<<"ENTER 4 TO  DELETE FURNITURE "<<endl;
        cout<<"ENTER 5 TO  UPDATE ITEMS "<<endl;
        cout<<"ENTER 6 TO  EXIT "<<endl;

        cin>>input;
        switch(input){
             case 1: additem();break;
             case 2: search();break;
             case 3: watch();break;
             case 4: deletefunction();break;
             case 5: update();break;
              }if(input>6){cout<<"YOU ENTER THE WRONG NUMBER"<<endl;}

 cout









 << endl;
       }
    while(input!=6);


    return 0;
}
