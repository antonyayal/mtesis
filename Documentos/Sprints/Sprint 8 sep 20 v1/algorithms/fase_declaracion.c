__global__ void kernelFunction(int* a,.., int* resultados,..,     	    							struct Backup* backup, bool* quantum_expirado){
	/* Fase de declaración de variables */

	/* Variable posición de thread y block */
	int id_block = blockIdx.y * gridDim.x + blockId.x;
	int id_thread = threadIdx.y * blockDim.x + threadIdx.x;

	/* Variables locales */
	int temp1;
	int temp2;
	. . .
	int tempn;
	. . .

	/*Contadores*/
	int i;
	int j;
	. . .
	int k;
    . . .