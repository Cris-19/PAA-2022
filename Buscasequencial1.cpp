#include <iostream>
#include <list>
#include <vector>

using namespace std;
int main() {
  int n;
 int x [10];
 cout << " Digite  o  tamanho  do  arranjo : "; //
 cout<< "10";
  cin >> n;
 int v;
 for ( int i = 0; i < n; i++) {
 }
 int chave , posicao = 0;
  {
 cout << " Digite  o  elemento  que  deseja   buscar : ";
 cout << "12";
 cin >> chave ;
  if ( posicao = 1){
  if (posicao == -1){
 cout << "Elemento inexistente no arranjo" << endl;
    } else {
cout << "Posicao do elemento no vetor: " << posicao << endl;
 cout << " {9, 5, 2,7,1} " << posicao << endl;

    }
    
 cout << " v[i] " << endl ;
 } else {
cout << "12" << "0" <<
"]" << endl ;
 }
 } while ( chave != -1);
 
 return 0;
 }
 
  int buscasequencial ( int a[], int n, int x)
 {
 for ( int i = 0; i<n; i++){
 if (a[i]== x){
 return i;
 }
 }
 return -1;
 }


 
 

