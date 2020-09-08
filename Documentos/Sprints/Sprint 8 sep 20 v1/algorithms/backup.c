struct Backup{

	/* Variables locales */
	int temp1[blockDim*gridDim];
	int temp2[blockDim*gridDim];
	. . .
	int tempn[blockDim*gridDim];

	/*Contadores*/
	int i[gridDim];
	int j[gridDim];
	. . .
	int k[gridDim];

	/* Último punto de control */
	int estado[gridDim];

};