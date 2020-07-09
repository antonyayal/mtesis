//Inicializa set de kernels

. . .
//Banderas continuas ejecución
bool* continuar_ejeA = false;
bool* continuar_ejeB = false;
. . .
bool* continuar_ejeN = false;

//Banderas kernel completado
bool* kernel_completadoA = false;
bool* kernel_completadoB = false;
. . .
bool* kernel_completadoN = false;

//Ejecución en paralelo de kernels
run KernelA(continuar_ejeA, kernel_completadoA);
run KernelB(continuar_ejeB, kernel_completadoB);
. . .
run KernelN(continuar_ejeN, kernel_completadoN);

Task K_rdy[numKernels];

/* Inicializa set kernels pendientes de ejecución */ 

for ( i = 0; i < numKernels; i++){ //N numero de kernel
	K_rdy[i].id = N; //id dependiendo de cada kernel
	K_rdy[i].costo = blockDim * gridDim; // Dependiendo de cada kernel
	K_rdy[i].continuar_eje = continuar_ejeN;
	K_rdy[i].kernel_completado = kernel_completadoA;
}

. . .