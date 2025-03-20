#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    int n, max_capacity, peso;
    string nome;
    struct amigo {
        string nome;
        int peso;
    };
    
    vector<amigo> v;
    amigo aux;
    
    bool done = false;
    
    cin>>n;
    
    for (int i = 0;i<n; i++) {
        cin>>aux.nome>>aux.peso;
        v.push_back(aux);
    };

    cin>>max_capacity;

    for (int i=0;i<n;i++) {
        if (v[i].peso > max_capacity){
            if(done == false) {
                cout<<"Vamos virar almoço de aranhas gigantes!"<<endl;
                done = true;
            }
            cout<<v[i].nome<<endl;
        };
    };

    if (done == false) {
        cout<<"Vamos todos encontrar a montanha!"<<endl;
    }
}