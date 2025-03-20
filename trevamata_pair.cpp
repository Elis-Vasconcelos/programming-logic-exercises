#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    int n, max_capacity, peso;
    string nome;
    vector<pair<string,int>> v, v1;
    pair<string,int> aux;
    bool done = false;
    
    cin>>n;
    
    for (int i = 0;i<n; i++) {
        cin>>aux.first>>aux.second;
        v.push_back(aux);
    };

    cin>>max_capacity;

    for (int i=0;i<n;i++) {
        if (v[i].second > max_capacity){
            if(done == false) {
                cout<<"Vamos virar almoço de aranhas gigantes!"<<endl;
                done = true;
            }
            cout<<v[i].first<<endl;
        };
    };

    if (done == false) {
        cout<<"Vamos todos encontrar a montanha!"<<endl;
    }
}