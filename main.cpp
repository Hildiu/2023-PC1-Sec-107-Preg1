/*-------------------------------------
 * Dato de entrada: numero (unsigned int) de 4 digitos
 * Dato de Salida: todas la placas desde 1000 al numero con las condiciones
 * Suma de los digitos es par y termina en cero: circula Lun - Mir - Vie - Sab y Dom
 * Suma de los digitos es par y no termina en cero: circula:  Lun - Mir - Vie
 * Suma de los digitos es impar: circula: Mar - Jue
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

unsigned int sumar(unsigned int placa);

int main()
{ unsigned int numero;

  do{
    cout << "Numero de 4 digitos : ";
    cin >> numero;
  }while(numero<1000);
  //-----------------------
  cout << "\n";
  for(unsigned int placa=1000; placa<=numero; placa++)
  {
    unsigned int sumadeDigitos = sumar(placa);
    if(sumadeDigitos % 2 == 0 && placa%10==0)
      cout << placa << "  " << "Suma de Digitos:" << setw(4)<< sumadeDigitos<< "  Circula: Lun - Mir - Vie - Sab y Dom\n";
    if(sumadeDigitos % 2 == 0 && placa%10 !=0)
      cout << placa << "  " << "Suma de Digitos:" << setw(4)<< sumadeDigitos<<"  Circula: Lun - Mir - Vie\n";
    if(sumadeDigitos % 2 !=0)
      cout << placa << "  " << "Suma de Digitos:" << setw(4)<< sumadeDigitos<<"  Circula: Mar - Jue\n";
  }
  return 0;
}

unsigned int sumar(unsigned int placa)
{
  unsigned int s=0;
  while (placa!=0)
  {
    s += (placa%10);
    placa/=10;
  }
  return s;
}