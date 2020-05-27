//kernelN.h

. . .
	//Declaración del backup
	Backup backup;
	//Duración máxima del quantum en microsegundos
	int quantum_time = #Duración del quantum
	//
	bool quantum_expirado;

	bool* continuar_eje;
	bool* kernel_completado;
	//Solicita recursos en GPU
	agrega_kernel_planificador(blockDim,gridDim,continuar_eje,kernel_completado);

	/* Ejecución del kernel */
	while(!kernel_completado){
		quantum_expirado = false;

		if(continuar_eje == true){

			kernelFunction<<<blockDim,gridDim >>>(a, ... , resultados,     	    									backup,quantum_expirado);
			/*Espera el tiempo del quantum */
			usleep(quantum_time);
			quantum_expirado = true;
			cudaDeviceSynchronize();
			continuar_eje = false; // automáticamante detiene 
			                       //su ejecución terminado el quantum

			kernel_completado=kc(backup.estado);
		}
	}
. . .
}