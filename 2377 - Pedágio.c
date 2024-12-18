#include <stdio.h>

int main (void) {
	int CustoTotal = 0, CustoPedagio, CustoKm, Kilometros, DistanciaPedagios;
	
	scanf("%d%d%d%d", &Kilometros, &DistanciaPedagios, &CustoKm, &CustoPedagio);
	CustoTotal += Kilometros * CustoKm;
	CustoTotal += Kilometros / DistanciaPedagios * CustoPedagio;
	
	printf("%d\n", CustoTotal);
	
	return 0;
}
