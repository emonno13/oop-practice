#include<iostream>
#include"Cattle.h"
#include<vector>
#include<random>
#include<time.h>
using namespace std;

void Input(vector<vector<Cattle*>> &List){
    int CatchKey;
    do{
        cout<<"\tPress 1 to input Cow.\n";
        cout<<"\tPress 2 to input Sheep.\n";
        cout<<"\tPress 3 to input Goat.\n";
        cout<<"\tPress 4 to back to the main menu.\n";
        while (cin>>CatchKey&&CatchKey!=1&&CatchKey!=2&&CatchKey!=3&&CatchKey!=4)
        {
            cout<<"Just Press in range 1,2,3,4. Again: ";
        }
        switch (CatchKey)
        {
        case 1:
            int n;
            cout<<"Input number of Cows: ";
            cin>>n;
            List[0].resize(0);
            for(int i=0;i<n;i++){
                List[0].push_back(new Cow);
            }
            break;
        case 2:
            int p;
            cout<<"Input number of Cows: ";
            cin>>p;
            List[1].resize(0);
            for(int i=0;i<p;i++){
                List[1].push_back(new Sheep);
            }
            break;
        case 3:
            int m;
            cout<<"Input number of Cows: ";
            cin>>m;
            List[2].resize(0);
            for(int i=0;i<m;i++){
                List[2].push_back(new Goat);
            }
            break;
        default:
            break;
        }
    }while(CatchKey!=4);
}

void Print(vector<vector<Cattle*>> &List){
    cout<<"-----Print List Cattle----\n";
    for(int i=0;i<List.size();i++){
        for(int j=0;j<List[i].size();j++){
            List[i][j]->Print();
            cout<<endl;
        }
    }
    cout<<"--------------------------\n";
}
void Say(vector<vector<Cattle*>> &List){
    cout<<"-----Say to feed----\n";
    for(int i=0;i<List.size();i++){
        for(int j=0;j<List[i].size();j++){
            List[i][j]->Say();
            cout<<endl;
        }
    }
    cout<<"--------------------------\n";
}
int main(){
    srand(time(NULL));
    vector<vector<Cattle*>> ListCattle;
    ListCattle.resize(3);
    int CatchKey;
    do{
        cout<<"Manage Cattle: \n";
        cout<<"\tPress 1 to input kinds of cattles.\n";
        cout<<"\tPress 2 to print all list of Cattles.\n";
        cout<<"\tPress 3 to make all Cattles to say.\n";
        cout<<"\tPress 4 to exit.\n";
        while (cin>>CatchKey&&CatchKey!=1&&CatchKey!=2&&CatchKey!=3&&CatchKey!=4)
        {
            cout<<"Just Press in range 1,2,3,4. Again: ";
        }
        switch (CatchKey)
        {
        case 1:
            Input(ListCattle);
            break;
        case 2:
            Print(ListCattle);
            break;
        case 3:
            Say(ListCattle);
            break;
        default:
            break;
        }
    }while(CatchKey!=4);
    for(int i=0;i<ListCattle.size();i++){
        for(int j=0;j<ListCattle[i].size();j++){
            delete ListCattle[i][j];
        }
    }
    cout<<"Thanks!";
    return 0;
}