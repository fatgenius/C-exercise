/* 
This is my personal test for the hashtable 
which is pretty useful in the C++
*/


#include <iostream>
#include <list>
#include <cstring>
using namespace std;


//hashtable to implement 

class HashTable
{
    private:
        static const int hashGroups =10;
        list<pair<int,string>> table[hashGroups];/* data */
    public:
        bool isEmpty() const;
        int hashFunction(int key);  //hashtable won`t be hashtable if there is no hashfunction 
        void insertItem(int key, string value);
        void removeItem(int key);
        string searchTable(int key);
        void printTable();
};

bool HashTable::isEmpty() const{
    int sum{};
    for(int i{};i<hashGroups;i++){
        sum+=table[i].size();
    }
    if(!sum){return true;}
    return false;
   }

int HashTable::hashFunction(int key){
    return key %hashGroups;
}

void HashTable::insertItem(int key, string value){
    int hashValue = hashFunction(key);
    auto& cell =table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for (; bItr!=end(cell);bItr++){
        if (bItr->first==key)
        {
          keyExists =true;
          bItr->second = value;
          cout<<"Value swaped"<<endl;/* code */
          break;  
        }
    }
    if (!keyExists)
    {
       cell.emplace_back(key,value); /* code */
    }
    return;
}

void HashTable::removeItem(int key){
    int hashValue = hashFunction(key);
    auto& cell =table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for (; bItr!=end(cell);bItr++){
        if (bItr->first==key)
        {
          keyExists =true;
          bItr = cell.erase(bItr);
          cout<<"Value REMOVE"<<endl;/* code */
          break;  
        }
    }
    if (! keyExists)
    {
        cout<<"key not found"<<endl;/* code */
    }
    return;
}

void HashTable::printTable(){
    for (int i{};i<hashGroups;i++)
    {
        if(table[i].size()==0) continue;
        auto bItr = table[i].begin();
        for (; bItr !=table[i].end(); bItr++)
        {
          cout<<"key: "<<bItr->first<<" value: "<<bItr->second<<endl;  /* code */
        }       /* code */
    }
    return; 
}


int main(){
    HashTable HT;


    // if(HT.isEmpty()){
    //     cout<<"good to go"<<endl;
    // }else{
    //     cout<<"somethings wrong"<<endl;
    // }

    HT.insertItem(101,"JIM");
    HT.insertItem(301,"DU");
    HT.insertItem(103,"YU");
    HT.insertItem(130,"FEI");
    HT.insertItem(401,"DUDU");
    HT.insertItem(561,"BABBA");
    HT.insertItem(171,"KOVE");
    HT.insertItem(781,"ANIMAL");
    HT.insertItem(941,"JIMMY");
    HT.insertItem(345,"CHOU");
    HT.insertItem(551,"MIMIMI");

    HT.printTable();
    HT.removeItem(301);
    HT.removeItem(103);

    return 0;
}