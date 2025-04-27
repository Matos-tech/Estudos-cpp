#include <iostream>

using namespace std;

int main(){
    int nasceudata, atualdata, idadesua ;
    cout<<"Em que ano nasceu?";
    cin>>nasceudata;
    cout<<"Qual é o ano atual?";
    cin>>atualdata;
    idadesua = atualdata - nasceudata;
    cout<<"Você tem:"<<idadesua;
}